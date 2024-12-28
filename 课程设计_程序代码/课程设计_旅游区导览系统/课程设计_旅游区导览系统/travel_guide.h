#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<string.h>
#include<limits>
#define OVERFLOW -2
#define InfoMaxSize 200
#define NameMaxSize 20
#define PasswordMaxSize 20
#define UNVISITED 0
#define VISITED 1
#define OK 1
#define INFINITY INT_MAX
#define AccountNumber "gdut"
#define PasswordNumber "123456"
typedef int Status;
typedef enum {UNDEFINED,UDN}GraphKind;
// 1.����Receive_option��,���ڽ���scanf�����ѡ��
// 2.����absorb_newline�壬���ڽ��������ѡ���ĵ�һ���ַ��������ж��Ƿ�������ȷ
// 3.����Receive_string�壬���ڽ����û�������ַ���
// 4.����Receive_function_result�壬���ڽ��չ��ܺ������صĽ��
// 5.����Function_array�壬������Ϊ����ʵ�ֵĸ�������
// 6.����i,j,kһ��������ѭ���е�������
// 7.����Function_input�壬������Ϊ����ʵ�ֵĸ�������
typedef struct AdjVexNode
{
	int adjvex;            //�ڽӶ����ڶ��������λ��
	int length;            //·������
	float cost_time;         //����ʱ��
	AdjVexNode* nextArc;   //��һ������Ϣ
}AdjVexNode;
//�ڽӱ�洢�ı���Ϣ

typedef struct VexType
{
	char* name;             //��������
	char* info;             //������
	AdjVexNode* firstArc;   //��һ����
}VexType;
//������Ϣ

typedef struct
{
	VexType* vexs;    //��������
	int vexs_num;     //�������
	int arcs_num;     //����
	GraphKind kind;   //ͼ����
	int* tags;        //��־����
}Graph;
//�ڽӱ�洢�������Ȩͼ

typedef struct VexsInfo
{
	char* name;      //��������
	char* info;      //������
}VexsInfo;
//������Ϣ������������ͼʱ��Ϊ������ɵ�����

typedef struct
{
	int prev;     //�ö����ǰ��
	int lowcast;  //��ǰ���·���ĳ���
	float stime;  //��ǰԤ��·������ʱ��
}DistInfo;        //V-U�ж���ĵ�ǰ���·����Ϣ

 void _SetPos(int x, int y);
//����ƶ�����

void main_menu();
//����������

void visiters_menu();
//�ÿͽ���

void manager_menu();
//����Ա����

void secure_manager_menu();
//�������Ա����ǰ���������˺�������а�ȫ��֤

void manager_vexs_menu();
//����Ա�����༭������Ϣ����

void manager_arcs_menu();
//����Ա�����༭����Ϣ����

void Error_menu();
//�������ʱ��ʾ��ҳ��

void InitVexs(VexsInfo* &vexs);
//��ʼ������

int SearchName(Graph &G, char* vex_name);
//���Ҿ�������Ϊvex_name�Ķ����λ�򣬷��򷵻�-1

int SearchArcs(Graph &G, int v, int w);
//����v�����w����֮���Ƿ���ڱ߹�ϵ

Status RandomCreateGraph(Graph &G,VexsInfo* vexs);
//��ͼG�������������Ϣ,������������8��������������15��

void PrintAllVexs(Graph G);
//��ӡ�����еľ�������

Status PrintVexsInfo(Graph G, char* vex_name);
//Ϊ�ο��ṩ������Ϣ�Ĳ�ѯ��vex_name���ο�����ľ�������

void OutputPath(Graph &G, DistInfo* Dist, int k);
//��ӡ��Դ�㵽k��������·��

Status PrintShortestRoad(Graph &G, char* vex_name1, char* vex_name2,DistInfo* &Dist);
//Ϊ�ο��ṩ�����������·����Ϣ�Ĳ�ѯ��vex_name1�ǵ�һ���������֣�vex_name2�ǵڶ�����������

Status AddVexs(Graph &G, char* vex_name, char* vex_info);
//Ϊ����Ա�ṩ���Ӿ���Ĺ��ܣ�vex_name������ľ������֣�vex_info������ľ�����

Status DeleteVexs(Graph &G, char* vex_name);
//Ϊ����Ա�ṩɾ������Ĺ��ܣ�vex_name������ľ�������

Status ModifyVexs(Graph &G, char* vex_name,int type,char* modify);
//Ϊ����Ա�ṩ�޸ľ�����Ϣ�Ĺ��ܣ�vex_name������ľ�������,type�������޸ĵ��Ǿ������ֻ��Ǿ�����

Status AddArcs(Graph &G, char* vex_name1, char* vex_name2,int length,float cost_time);
//Ϊ����Ա�ṩ������������֮��·�ߵĹ��ܣ�vex_name1��vex_name2�������������������

Status DeleteArcs(Graph &G, char* vex_name1, char* vex_name2);
//Ϊ����Ա�ṩɾ����������֮��·�ߵĹ��ܣ�vex_name1��vex_name2�������������������

Status ModifyArcs(Graph &G, char* vex_name1, char* vex_name2, int type, float modify);
//Ϊ����Ա�ṩ�޸���������֮��·����Ϣ�Ĺ��ܣ�vex_name1��vex_name2�������������������,type�������޸ĵ��ǳ��Ȼ���ʱ��

void PrintAllSimpleRoad(Graph G, int v, int w, int length, int d[]);
//��ӡ��������������֮������м�·��

Status FindAllSimpleRoad(Graph G, char* vex_name1, char* vex_name2);
//�ҵ�������������м�·���ĵ��ýӿ�

//�ҵ�v����Ϊ��㣬w����Ϊ�յ�����м�·���������ο������ָ��·��ƥ��,���ڷ���1�������ڷ���0
int PrintGivenSimpleRoad(Graph G, int v, int w, int d_length, int d[], int* vexs, int v_length);

//��ӡ���ÿ�ָ��������������һ����·��
Status FindGivenSimpleRoad(Graph G, char** vex_name, int v_length);

//����v�����w�����·�ߵ�����ʱ�䣬��������ڷ���-1
float ReturnCosttime(Graph G, int v, int w);

void PrintfAllArcs(Graph &G);
//��ӡ�����б߹�ϵ��������ʱʹ�ã�
