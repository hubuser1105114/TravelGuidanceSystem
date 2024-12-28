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
// 1.变量Receive_option族,用于接收scanf输入的选项
// 2.变量absorb_newline族，用于接收输入的选项后的第一个字符，用于判断是否输入正确
// 3.变量Receive_string族，用于接收用户输入的字符串
// 4.变量Receive_function_result族，用于接收功能函数返回的结果
// 5.变量Function_array族，用于作为函数实现的辅助数组
// 6.变量i,j,k一般用作于循环中的自增量
// 7.变量Function_input族，用于作为函数实现的辅助变量
typedef struct AdjVexNode
{
	int adjvex;            //邻接顶点在顶点数组的位序
	int length;            //路径长度
	float cost_time;         //所需时间
	AdjVexNode* nextArc;   //下一条边信息
}AdjVexNode;
//邻接表存储的边信息

typedef struct VexType
{
	char* name;             //景点名字
	char* info;             //景点简介
	AdjVexNode* firstArc;   //第一条边
}VexType;
//顶点信息

typedef struct
{
	VexType* vexs;    //顶点数组
	int vexs_num;     //顶点个数
	int arcs_num;     //边数
	GraphKind kind;   //图类型
	int* tags;        //标志数组
}Graph;
//邻接表存储的无向带权图

typedef struct VexsInfo
{
	char* name;      //景点名字
	char* info;      //景点简介
}VexsInfo;
//景点信息，在生成旅游图时作为随机生成的样本

typedef struct
{
	int prev;     //该顶点的前驱
	int lowcast;  //当前最短路径的长度
	float stime;  //当前预估路径所需时间
}DistInfo;        //V-U中顶点的当前最短路径信息

 void _SetPos(int x, int y);
//光标移动函数

void main_menu();
//生成主界面

void visiters_menu();
//访客界面

void manager_menu();
//管理员界面

void secure_manager_menu();
//进入管理员界面前，需输入账号密码进行安全验证

void manager_vexs_menu();
//管理员——编辑景点信息界面

void manager_arcs_menu();
//管理员——编辑边信息界面

void Error_menu();
//输入错误时显示此页面

void InitVexs(VexsInfo* &vexs);
//初始化样本

int SearchName(Graph &G, char* vex_name);
//查找景点名字为vex_name的顶点的位序，否则返回-1

int SearchArcs(Graph &G, int v, int w);
//查找v顶点和w顶点之间是否存在边关系

Status RandomCreateGraph(Graph &G,VexsInfo* vexs);
//对图G进行随机生成信息,景点数不少于8个，边数不少于15条

void PrintAllVexs(Graph G);
//打印出所有的景点名字

Status PrintVexsInfo(Graph G, char* vex_name);
//为游客提供景点信息的查询，vex_name是游客输入的景点名字

void OutputPath(Graph &G, DistInfo* Dist, int k);
//打印出源点到k顶点的最短路径

Status PrintShortestRoad(Graph &G, char* vex_name1, char* vex_name2,DistInfo* &Dist);
//为游客提供两个景点最短路径信息的查询，vex_name1是第一个景点名字，vex_name2是第二个景点名字

Status AddVexs(Graph &G, char* vex_name, char* vex_info);
//为管理员提供增加景点的功能，vex_name是输入的景点名字，vex_info是输入的景点简介

Status DeleteVexs(Graph &G, char* vex_name);
//为管理员提供删除景点的功能，vex_name是输入的景点名字

Status ModifyVexs(Graph &G, char* vex_name,int type,char* modify);
//为管理员提供修改景点信息的功能，vex_name是输入的景点名字,type决定了修改的是景点名字还是景点简介

Status AddArcs(Graph &G, char* vex_name1, char* vex_name2,int length,float cost_time);
//为管理员提供增加两个景点之间路线的功能，vex_name1和vex_name2是输入的两个景点名字

Status DeleteArcs(Graph &G, char* vex_name1, char* vex_name2);
//为管理员提供删除两个景点之间路线的功能，vex_name1和vex_name2是输入的两个景点名字

Status ModifyArcs(Graph &G, char* vex_name1, char* vex_name2, int type, float modify);
//为管理员提供修改两个景点之间路线信息的功能，vex_name1和vex_name2是输入的两个景点名字,type决定了修改的是长度还是时间

void PrintAllSimpleRoad(Graph G, int v, int w, int length, int d[]);
//打印出任意两个景点之间的所有简单路径

Status FindAllSimpleRoad(Graph G, char* vex_name1, char* vex_name2);
//找到两个景点的所有简单路径的调用接口

//找到v顶点为起点，w顶点为终点的所有简单路径，并与游客输入的指定路线匹配,存在返回1，不存在返回0
int PrintGivenSimpleRoad(Graph G, int v, int w, int d_length, int d[], int* vexs, int v_length);

//打印出访客指定游览多个景点的一条简单路径
Status FindGivenSimpleRoad(Graph G, char** vex_name, int v_length);

//返回v顶点和w顶点的路线的所需时间，如果不存在返回-1
float ReturnCosttime(Graph G, int v, int w);

void PrintfAllArcs(Graph &G);
//打印出所有边关系（仅测试时使用）
