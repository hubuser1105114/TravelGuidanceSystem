#include"travel_guide.h"

//����ƶ�����
 void _SetPos(int x, int y)//�ƶ���굽X��Yλ��
{
	COORD position;
	position.X = x;
	position.Y = y;
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, position);
}

//����������
void main_menu()
{
	printf("\n\n\n\n");
	printf("\t\t********************************************************************************\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                ��������������                              **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                ����������ѡ����ݣ�                                        **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                     1.�ο�                       2.����Ա                  **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                    0.�˳�                                  **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t********************************************************************************\n");
}

//�ÿͽ���
void visiters_menu()
{
	printf("\n\n\n\n");
	printf("\t\t********************************************************************************\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                ��������������                              **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                ���ã��𾴵��οͣ���ѡ��ѡ�                              **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                   1.��ѯ����                  2.�Ƽ����·��               **\n");
	printf("\t\t**                   3.��ѯ���������·��        4.�滮����·��               **\n");
	printf("\t\t**                   0.�˳�                                                   **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t********************************************************************************\n");
}

//����Ա����
void manager_menu()
{
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                ��������������                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**   ��ã�����Ա����ѡ��                     **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**      1.�༭������Ϣ         2.�༭·����Ϣ   **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                 0.�������˵�                 **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
}

//�������Ա����ǰ���������˺�������а�ȫ��֤
void secure_manager_menu()
{
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                ��������������                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**   �������˺����룬                           **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**            �˺ţ�                            **\n");
	printf("\t\t\t\t**            ���룺                            **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
}

//����Ա�����༭������Ϣ����
void manager_vexs_menu()
{
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                ��������������                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**   ��ã�����Ա����ѡ��                     **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**      1.���Ӿ�����Ϣ         2.ɾ��������Ϣ   **\n");
	printf("\t\t\t\t**      3.�޸ľ�����Ϣ                          **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                   0.����                     **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
}


//����Ա�����༭����Ϣ����
void manager_arcs_menu()
{

	{
		printf("\n\n\n\n");
		printf("\t\t\t\t**************************************************\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**                ��������������                **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**   ��ã�����Ա����ѡ��                     **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**      1.����·����Ϣ         2.ɾ��·����Ϣ   **\n");
		printf("\t\t\t\t**      3.�޸�·����Ϣ                          **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**                   0.����                     **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**************************************************\n");
	}
}

//�������ʱ��ʾ��ҳ��
void Error_menu()
{
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                ��������������                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**              ����������������롣          **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
	_SetPos(59, 13);
	getchar();
}

//��ʼ������
void InitVexs(VexsInfo* &vexs)
{
	vexs = (VexsInfo*)malloc(sizeof(VexsInfo) * 20);
	for (int i = 0; i < 20; i++)
	{
		vexs[i].info = (char*)malloc(InfoMaxSize * sizeof(char));
		vexs[i].name = (char*)malloc(NameMaxSize * sizeof(char));
	}
	vexs[0].name = strcpy(vexs[0].name, "ӭ��ͤ");
	char temp0[InfoMaxSize] = "ӭ��ͤ��ƽӹ�ͤ���ǹŴ���Ա����ӭ�͵Ĺ��ݡ�"
		                     "����һ��԰���ľ�������컵ĵط����ʺ��ÿ����˴���Ϣ���;���";
	vexs[0].info = strcpy(vexs[0].info, temp0);
	
	vexs[1].name = strcpy(vexs[1].name, "�ɴ���");
	char temp1[InfoMaxSize] = "�ɴ����Ժ��ɰٴ��������ݺͿ��š�"
		                     "��ǰ����������֧��СϪ�����������ɴ�֮�⡣�ɴ�������㣬����Զ��������";
	vexs[1].info = strcpy(vexs[1].info, temp1);

	vexs[2].name = strcpy(vexs[2].name, "��˼��");
	char temp2[InfoMaxSize] = "��˼����ˮ�������ԣ��ޱȵ��峺����Χ������Ȼ��"
		                      "�ഫ��һ����Ů�ڴ��మ��˽����������������������������ˡ�";
	vexs[2].info = strcpy(vexs[2].info, temp2);

	vexs[3].name = strcpy(vexs[3].name, "������");
	char temp3[InfoMaxSize] = "�������һ�����ۣ��������֮һ���������������޸�Ϊ�������"
		                      "���͸�����ζ�����ĺ�Ժ���֣�ľ�ṹ�����ϳ����������������ǧƽ���ס�";
	vexs[3].info = strcpy(vexs[3].info, temp3);

	vexs[4].name = strcpy(vexs[4].name, "�����");
	char temp4[InfoMaxSize] = "���������ͤ�����ȵĽ�ϣ������Գ��д��̵���ľ����������"
		                      "�������һ�������ĺ�ȥ����Ҳ�ǽ����Ž���ĺ�ѡ��";
	vexs[4].info = strcpy(vexs[4].info, temp4);

	vexs[5].name = strcpy(vexs[5].name, "ˮ��̨");
	char temp5[InfoMaxSize] = "ˮ��̨���ִ�ϴ������Ϸ̨���ӽ����ṹ�Ͽ���ˮ��̨�����˵̨��¥�������ַ��"
		                      "�������룬��̲ʻ澫ϸ���Ľ����д�󾣬������֮�á�";
	vexs[5].info = strcpy(vexs[5].info, temp5);

	vexs[6].name = strcpy(vexs[6].name, "ˮ�ݳ�");
	char temp6[InfoMaxSize] = "ˮ�ݳ����2000ƽ����,����������С��,������ֲ��һЩĵ���Ͷž顣"
		                      "������ʮ����ˮ��������Ļ�ӳ�£�ˮ���Եø���������";
	vexs[6].info = strcpy(vexs[6].info, temp6);

	vexs[7].name = strcpy(vexs[7].name, "����ɽ");
	char temp7[InfoMaxSize] = "����ɽ��Ϊʯ���ң��þ�������ʴ���γ��ˡ�������������������ߡ�ֱ�����족�������롣"
		                      "ɽ�����������Ķž顢���ģ��������µĸ��ٺ͹�ľ��Ȫˮ�ɽ�������һ���Ϲ���⡣";
	vexs[7].info = strcpy(vexs[7].info, temp7);

	vexs[8].name = strcpy(vexs[8].name, "����԰");
	char temp8[InfoMaxSize] = "����԰�Զ���ֲ���˶��������ڴ˴����������Կ�������˶�����۵ľ���"
		                      "���л������Բ�ժ��������˲���Ʒ����԰�����������˵�ר���̵ꡣ";
	vexs[8].info = strcpy(vexs[8].info, temp8);

	vexs[9].name = strcpy(vexs[9].name, "����ի");
	char temp9[InfoMaxSize] = "����ի�Դ�����ʿ�ġ�������Ϊ����������ʿ���δ֪��������ի�ഫ�ɴ�λ"
		                      "��ʿ����������ի����ͺ�����ṩիʳ��";
	vexs[9].info = strcpy(vexs[9].info, temp9);

	vexs[10].name = strcpy(vexs[10].name, "����");
	char temp10[InfoMaxSize] = "����ʵΪ����ɽ�����θ߶���100�����ҡ�"
		                       "������ɽ�����������в�ɽ��Ϊ��һ����ɫ�������ɽ�С������ɽʤǰɽ��֮˵��";
	vexs[10].info = strcpy(vexs[10].info, temp10);

	vexs[11].name = strcpy(vexs[11].name, "������");
	char temp11[InfoMaxSize] = "�������ȳ���200�ף��ȿ�����ȴ�7�ף������������̾ᣬ"
		                       "��״ʤ�ƺ��ˣ���˵����������ȡ����οͿ������������ͺ��ߡ�";
	vexs[11].info = strcpy(vexs[11].info, temp11);

	vexs[12].name = strcpy(vexs[12].name, "����ɽ��");
	char temp12[InfoMaxSize] = "����ɽ�����������ܱ�ֲ�����������ഫ������һ���������Ӹ��������ģ��ǡ���ʯ�١����"
		                       "�ִ���ã��οͿ����˴��ͻ���һͬѧϰ�黭��";
	vexs[12].info = strcpy(vexs[12].info, temp12);

	vexs[13].name = strcpy(vexs[13].name, "����");
	char temp13[InfoMaxSize] = "�ݿ�֤���������������������������ã������ֽ��Կ����졣"
		                       "�����������ף������֮�⣬ÿ�հ���6�������6�����ӡ�";
	vexs[13].info = strcpy(vexs[13].info, temp13);

	vexs[14].name = strcpy(vexs[14].name, "������");
	char temp14[InfoMaxSize] = "�������Զ������������������������ɽ�ϵ������ɮ������ֲ��"
		                       "�����������⣬����Χ�����ˣ����ǽ�������һöһö��Ͷ�ڳ��У�"
		                       "�����˰���̾Ϣ���������˸߲��ң�������Ϊ�����𡱺͡�������г���Ĺ�ϵ��";
	vexs[14].info = strcpy(vexs[14].info, temp14);

	vexs[15].name = strcpy(vexs[15].name, "�ʺ���");
	char temp15[InfoMaxSize] = "�ʺ���ȫ��Լ85�ף������Ͽ��Կ������µĳ���������Զ��ɽ�ϵ�������"
		                       "���ڹ۾�λ�����ã��ʺ�������������ο����˴���Ӱ��";
	vexs[15].info = strcpy(vexs[15].info, temp15);

	vexs[16].name = strcpy(vexs[16].name, "��Ҷ��");
	char temp16[InfoMaxSize] = "��Ҷ��ȫ����800�ף����������ź�Ҷɼ����Ҷɼ���Ǽ�����"
		                       "ÿ�����ʱ�ڣ���Ҷ�����������Ҷ�����ڵ��ϣ���˵�����Ҷ����";
	vexs[16].info = strcpy(vexs[16].info, temp16);

	vexs[17].name = strcpy(vexs[17].name, "ǧ��կ");
	char temp17[InfoMaxSize] = "ǧ��կ��ʷ��׷�ݵ�����������н�ǧ���˼��ڴ˳����ס��կ���Ļ��ḻ���ء�"
		                       "�������ڸ��ҵƻ��οͿ��ڹ۾�̨��һ������կ�еƻ��ȫò��";
	vexs[17].info = strcpy(vexs[17].info, temp17);

	vexs[18].name = strcpy(vexs[18].name, "��ϵ��");
	char temp18[InfoMaxSize] = "��ϵ����˼�Ǳ������ɶ�����ǣ�ң����ԡ�ׯ�ӡ������ܡ�����ϵ��ԭ��ΪһС�ۣ�������Щ������"
		                       "���޷��ٵ��ۣ�ԭ�Ͳ�Զ����һ���͵ľ�¥���οͿ��ڴ��ò͡�";
	vexs[18].info = strcpy(vexs[18].info, temp18);

	vexs[19].name = strcpy(vexs[19].name, "���");
	char temp19[InfoMaxSize] = "������οͱ�������ĺ�ȥ���������û����ֲ�ܶ���������ֲ�����������"
		                       "�͹�ľ���οͿ��ڴ�Ұ�ͻ�ҰӪ����Ȼ���Ҳ��һ�ŷ��ݵĺ�ȥ����";
	vexs[19].info = strcpy(vexs[19].info, temp19);
}

//���Ҿ�������Ϊvex_name�Ķ����λ�򣬷��򷵻�-1
int SearchName(Graph &G, char* vex_name)
{
	int i;
	for (i = 0; i < G.vexs_num; i++)
		if (0 == strcmp(G.vexs[i].name, vex_name))return i;
	return -1;
}

//����v�����w����֮���Ƿ���ڱ߹�ϵ,��������ڱ߹�ϵ������0�������ڣ�����v�����w����֮���·������
int SearchArcs(Graph &G, int v, int w)
{
	AdjVexNode* p = NULL;
	if (v<0 || w<0 || v>G.vexs_num || w>G.vexs_num)return ERROR;
	for (p = G.vexs[v].firstArc; NULL != p; p = p->nextArc)
	{
		if (p->adjvex == w)return p->length;
	}
	return false;
}

//��ͼG�������������Ϣ,������������8��������������15��
Status RandomCreateGraph(Graph &G, VexsInfo* vexs)
{
	G.kind = UDN;
	srand((unsigned int)time(NULL));
	G.vexs_num = 8 + rand() % 5;                              //�������Ϊ8~12��
	G.vexs = (VexType*)malloc(G.vexs_num * sizeof(VexType));
	if (NULL == G.vexs)return OVERFLOW;
	for (int i = 0; i < G.vexs_num; i++)
	{
		G.vexs[i].firstArc = NULL;
		G.vexs[i].name = (char*)malloc(NameMaxSize * sizeof(char));   //����������10��������
		if (NULL == G.vexs[i].name)return OVERFLOW;
		G.vexs[i].name = strcpy(G.vexs[i].name, "/0");
		G.vexs[i].info = (char*)malloc(InfoMaxSize * sizeof(char));   //��������100��������
		if (NULL == G.vexs[i].info)return OVERFLOW;
		G.vexs[i].info = strcpy(G.vexs[i].info, "/0");
		G.vexs[i].firstArc = (AdjVexNode*)malloc(sizeof(AdjVexNode));
		if (NULL == G.vexs[i].firstArc)return OVERFLOW;
		G.vexs[i].firstArc = NULL;
	}
	G.tags = (int*)malloc(G.vexs_num * sizeof(int));
	if (NULL == G.tags)return OVERFLOW;
	G.arcs_num = 15 + rand() % 6;                             //����Ϊ15~20��
	for (int i = 0; i < G.vexs_num; i++)                      //��ʼ��tags����
		G.tags[i] = UNVISITED;
	for (int i = 0; i < G.vexs_num; i++)                      //�����ʼ��vexs���龰��
	{
		int pos = rand() % 20;     
		int contrast = 0;                                    
		for (int j = 0; j < i; j++)
		{
			if (0 == strcmp(vexs[pos].name, G.vexs[j].name)) 
			{
				contrast = 1;
				i--;
				break;
			}
		}
		if (contrast)continue;
		G.vexs[i].name = strcpy(G.vexs[i].name, vexs[pos].name);
		G.vexs[i].info = strcpy(G.vexs[i].info, vexs[pos].info);
	}
	int v, w;
	int length;
	float cost_time;
	for (int i = 0; i < G.arcs_num; i++)
	{
		v = rand() % G.vexs_num;
		w = rand() % G.vexs_num;
		if (v == w || 0 != SearchArcs(G, v, w))
		{
			i--; continue;
		}
		length = 200 + rand() % 801;                   //·��������200~1000��
		cost_time = (float)length / (float)80;         //Ԥ��ÿ������80��
		AddArcs(G, G.vexs[v].name, G.vexs[w].name, length, cost_time);
	}
}

//��ӡ�����еľ�������
void PrintAllVexs(Graph G)
{
	printf("\n\t\t\t\t\t\t");
	for (int i = 0; i < G.vexs_num; i++)
	{
		printf("����%d��",i+1);
		printf("%s", G.vexs[i].name);
		printf("\n\t\t\t\t\t\t");
	}
}

//Ϊ�ο��ṩ������Ϣ�Ĳ�ѯ��vex_name���ο�����ľ�������
Status PrintVexsInfo(Graph G, char* vex_name)
{
	int i;
	for (i = 0; i < G.vexs_num; i++)
	{
		if (0 == strcmp(G.vexs[i].name, vex_name))
		{
			system("cls");
			printf("\t\t\t\t\t\t���ε���ϵͳ\n");
			printf("\t\t\t\t********************************************\n\n");
			printf("�������֣�");
			printf("%s", G.vexs[i].name);
			printf("\n");
			printf("�����飺");
			printf("%s", G.vexs[i].info);
			return OK;
		}
	}
	return ERROR;
}

//Ϊ����Ա�ṩ������������֮��·�ߵĹ��ܣ�vex_name1��vex_name2�������������������
Status AddArcs(Graph &G, char* vex_name1, char* vex_name2,int length,float cost_time)
{
	int v = -1, w = -1;
	v = SearchName(G, vex_name1);
	w = SearchName(G, vex_name2);
	if (v == -1 || w == -1 || v == w)return false;
	if (0 != SearchArcs(G, v, w))return false;
	if (length > INT_MAX || cost_time > INT_MAX || length <= 0 || cost_time <= 0)return false;
	AdjVexNode* temp1 = (AdjVexNode*)malloc(sizeof(AdjVexNode));
	if (NULL == temp1)return OVERFLOW;
	temp1->adjvex = w;
	temp1->cost_time = cost_time;
	temp1->length = length;
	temp1->nextArc = G.vexs[v].firstArc;
	G.vexs[v].firstArc = temp1;
    //
	AdjVexNode* temp2 = (AdjVexNode*)malloc(sizeof(AdjVexNode));
	if (NULL == temp2)return OVERFLOW;
	temp2->adjvex = v;
	temp2->cost_time = cost_time;
	temp2->length = length;
	temp2->nextArc = G.vexs[w].firstArc;
	G.vexs[w].firstArc = temp2;
	return OK;
}

//��ӡ��Դ�㵽k��������·��
void OutputPath(Graph &G, DistInfo* Dist, int k)
{
	if (-1 == k)return;
	OutputPath(G, Dist, Dist[k].prev);
	printf("%s--->", G.vexs[k].name);
}

//Ϊ�ο��ṩ�����������·����Ϣ�Ĳ�ѯ��vex_name1�ǵ�һ���������֣�vex_name2�ǵڶ�����������
Status PrintShortestRoad(Graph &G, char* vex_name1, char* vex_name2,DistInfo* &Dist)
{
	int v, w;
	v = SearchName(G, vex_name1);
	w = SearchName(G, vex_name2);
	if (v == -1 || w == -1)return -1;
	int i, j, k, min;
	AdjVexNode* p;
	Dist = (DistInfo*)malloc(sizeof(DistInfo) * G.vexs_num);
	if (NULL == Dist)return OVERFLOW;
	for (i = 0; i < G.vexs_num; i++)
	{
		Dist[i].lowcast = INFINITY;
		Dist[i].stime = INFINITY;
		G.tags[i] = UNVISITED;
	}
	for (p = G.vexs[v].firstArc; NULL != p; p = p->nextArc)
	{
		Dist[p->adjvex].prev = v;
		Dist[p->adjvex].lowcast = p->length;
		Dist[p->adjvex].stime = p->cost_time;
	}
	Dist[v].prev = -1;
	Dist[v].lowcast = 0;
	Dist[v].stime = 0;
	G.tags[v] = VISITED;
	for (i = 1; i < G.vexs_num; i++)
	{
		min = INFINITY; k = 0;
		for(j = 0;j<G.vexs_num;j++)
			if (min > Dist[j].lowcast && G.tags[j] == UNVISITED) { min = Dist[j].lowcast; k = j; }
		G.tags[k] = VISITED;
		for (p = G.vexs[k].firstArc; NULL != p; p = p->nextArc)
		{
			j = p->adjvex;
			if (UNVISITED == G.tags[j] && Dist[k].lowcast + p->length < Dist[j].lowcast)
			{
				Dist[j].lowcast = Dist[k].lowcast + p->length;
				Dist[j].prev = k;
				Dist[j].stime = Dist[k].stime + p->cost_time;
			}
		}
	}
	if (INFINITY == Dist[w].lowcast)return INFINITY;                 //�����в��ɴ�����
	return OK;
}

//Ϊ����Ա�ṩ���Ӿ���Ĺ��ܣ�vex_name������ľ������֣�vex_info������ľ�����
Status AddVexs(Graph &G, char* vex_name, char* vex_info)
{
	if (strlen(vex_name) > NameMaxSize || strlen(vex_info) > InfoMaxSize)return -1;
	if (-1 != SearchName(G, vex_name))return -1;
	VexType* ptr = (VexType*)realloc(G.vexs, (G.vexs_num + 1) * sizeof(VexType));
	if (NULL == ptr)return OVERFLOW;
	G.vexs = ptr;
	int* pr = (int*)realloc(G.tags, (G.vexs_num + 1) * sizeof(int));
	if (pr == NULL)return OVERFLOW;
	G.tags = pr;
	G.vexs[G.vexs_num].name = (char*)malloc(sizeof(char) * NameMaxSize);
	if (NULL == G.vexs[G.vexs_num].name)return OVERFLOW;
	G.vexs[G.vexs_num].info = (char*)malloc(sizeof(char) * InfoMaxSize);
	if (NULL == G.vexs[G.vexs_num].info)return OVERFLOW;
	G.vexs[G.vexs_num].firstArc = (AdjVexNode*)malloc(sizeof(AdjVexNode));
	if (NULL == G.vexs[G.vexs_num].firstArc)return OVERFLOW;
	G.vexs[G.vexs_num].firstArc = NULL;

	G.vexs[G.vexs_num ].name = strcpy(G.vexs[G.vexs_num ].name, vex_name);
	G.vexs[G.vexs_num ].info = strcpy(G.vexs[G.vexs_num ].info, vex_info);
	G.vexs_num++;
	for (int i = 0; i < G.vexs_num; i++)
		G.tags[i] = UNVISITED;
	return OK;
}

//Ϊ����Ա�ṩɾ������Ĺ��ܣ�vex_name������ľ�������
Status DeleteVexs(Graph &G, char* vex_name)
{
	int pos;
	pos = SearchName(G, vex_name);
	if (-1 == pos)return false;
	VexType temp;
	temp = G.vexs[pos];
	G.vexs[pos] = G.vexs[G.vexs_num - 1];
	G.vexs[G.vexs_num - 1] = temp;
	free(G.vexs[G.vexs_num - 1].firstArc);
	free(G.vexs[G.vexs_num - 1].name);
	free(G.vexs[G.vexs_num - 1].info);
	G.vexs[G.vexs_num - 1].info = G.vexs[G.vexs_num - 1].name = NULL;
	G.vexs[G.vexs_num - 1].firstArc = NULL;
	G.vexs_num--;
	return OK;   
}

//Ϊ����Ա�ṩ�޸ľ�����Ϣ�Ĺ��ܣ�vex_name������ľ�������,type�������޸ĵ��Ǿ������ֻ��Ǿ�����
Status ModifyVexs(Graph &G, char* vex_name , int type,char* modify)
{
	
	int pos;
	pos = SearchName(G, vex_name);
	if (-1 == pos)return false;
	if (1 == type)
	{
		if (strlen(modify) > NameMaxSize)return false;
		G.vexs[pos].name = strcpy(G.vexs[pos].name, modify);
		return OK;
	}
	if (2 == type)
	{
		if (strlen(modify) > InfoMaxSize)return false;
		G.vexs[pos].info = strcpy(G.vexs[pos].info, modify);
		return OK;
	}
	return false;
}

//Ϊ����Ա�ṩɾ����������֮��·�ߵĹ��ܣ�vex_name1��vex_name2�������������������
Status DeleteArcs(Graph &G, char* vex_name1, char* vex_name2)
{
	int v, w;
	v = SearchName(G, vex_name1);
	w = SearchName(G, vex_name2);
	if (-1 == v || -1 == w)return false;
	if (0 == SearchArcs(G, v, w))return false;
	AdjVexNode* p = NULL, *pr = G.vexs[v].firstArc;
	while (NULL != pr && pr->adjvex != w)
	{
		p = pr;
		pr = pr->nextArc;
	}
	if (NULL != pr && pr->adjvex == w)
	{
		if(pr == G.vexs[v].firstArc)
		{
			G.vexs[v].firstArc = pr->nextArc;
			free(pr);
		}
		else
		{
			p->nextArc = pr->nextArc;
			free(pr);
		}
	}
	//
	pr = G.vexs[w].firstArc;
	while (NULL != pr && pr->adjvex != v)
	{
		p = pr;
		pr = pr->nextArc;
	}
	if (NULL != pr && pr->adjvex == v)
	{
		if (pr == G.vexs[w].firstArc)
		{
			G.vexs[w].firstArc = pr->nextArc;
			free(pr);
		}
		else
		{
			p->nextArc = pr->nextArc;
			free(pr);
		}
	}
	return OK;
}

//Ϊ����Ա�ṩ�޸���������֮��·����Ϣ�Ĺ��ܣ�vex_name1��vex_name2�������������������,type�������޸ĵ��ǳ��Ȼ���ʱ��
Status ModifyArcs(Graph &G, char* vex_name1, char* vex_name2,int type,float modify)
{
	int v, w;
	v = SearchName(G, vex_name1);
	w = SearchName(G, vex_name2);
	if (-1 == v || -1 == w)return false;
	if (0 == SearchArcs(G, v, w))return false;
	if (type != 1 && type != 2)return false;
	if (modify > INT_MAX || modify <= 0)return false;
	AdjVexNode* p = NULL;
	if (1 == type)
	{
		p = G.vexs[v].firstArc;
		while (NULL != p)
		{
			if (p->adjvex == w)
			{
				p->length = (int)modify;
				break;
			}
			p = p->nextArc;
		}
		p = G.vexs[w].firstArc;
		while (NULL != p)
		{
			if (p->adjvex == v)
			{
				p->length = (int)modify;
				break;
			}
			p = p->nextArc;
		}
		return OK;
	}
	//
	if (2 == type)
	{
		p = G.vexs[v].firstArc;
		while (NULL != p)
		{
			if (p->adjvex == w)
			{
				p->cost_time = modify;
				break;
			}
			p = p->nextArc;
		}
		p = G.vexs[w].firstArc;
		while (NULL != p)
		{
			if (p->adjvex == v)
			{
				p->cost_time = modify;
				break;
			}
			p = p->nextArc;
		}
		return OK;
	}
	return false;
}

//��ӡ�����б߹�ϵ
void PrintfAllArcs(Graph &G)
{
	AdjVexNode* p = NULL;
	int i;
	for (i = 0; i < G.vexs_num; i++)
	{
		p = G.vexs[i].firstArc;
		while (NULL != p)
		{
			printf("%s", G.vexs[i].name);
			printf(" ---- ");
			printf("%s", G.vexs[p->adjvex].name);
			printf("   ���ȣ�%d m", p->length);
			printf("\n");
			p = p->nextArc;
		}
	}
}

//��ӡ��������������֮������м�·��
void PrintAllSimpleRoad(Graph G,int v,int w,int length,int d[])
{
	length++;
	G.tags[v] = VISITED;
	d[length] = v;
	if (v == w)
	{
		int distance = 0;
		for (int i = 0; i < length ; i++)
		{
			printf("%s", G.vexs[d[i]].name);
			printf("---->");
			distance += SearchArcs(G, d[i], d[i + 1]);
		}
		printf("%s", G.vexs[w].name);
		printf("   ��·�̣�%d m", distance);
		printf("\n\n");
	}
	AdjVexNode* p;
	for (p = G.vexs[v].firstArc; NULL != p; p = p->nextArc)
	{
		if (G.tags[p->adjvex] == UNVISITED)
		{
			PrintAllSimpleRoad(G, p->adjvex, w, length, d);
		}
	}
	G.tags[v] = UNVISITED;
}

//�ҵ�������������м�·���ĵ��ýӿ�
Status FindAllSimpleRoad(Graph G, char* vex_name1, char* vex_name2)
{
	int* d;
	d = (int*)malloc(sizeof(int) * G.vexs_num);
	if (NULL == d)return OVERFLOW;
	int v, w, length = -1;
	v = SearchName(G, vex_name1);
	w = SearchName(G, vex_name2);
	if (v == -1 || w == -1)return -1;
	for (int i = 0; i < G.vexs_num; i++)
	{
		G.tags[i] = UNVISITED;
		d[i] = -1;
	}
	PrintAllSimpleRoad(G, v, w, length, d);
	return OK;
}

//�ҵ�v����Ϊ��㣬w����Ϊ�յ�����м�·���������ο������ָ��·��ƥ��,���ڷ���1�������ڷ���0
int PrintGivenSimpleRoad(Graph G, int v, int w, int d_length, int d[] ,int* vexs,int v_length)
{
	d_length++;
	G.tags[v] = VISITED;
	d[d_length] = v;
	if (v == w)
	{
		int have = 1;
		for (int i = 0; i<v_length; i++)
		{
			have = 0;
			for (int j = 0; j <= d_length; j++)
			{
				if (vexs[i] == d[j])have = 1;
			}
			if (have == 0)break;
		}
		if (have == 1)
		{
			int distance = 0;
			float total_time = 0;
			for (int i = 0; i < d_length; i++)
			{
				printf("%s", G.vexs[d[i]].name);
				printf("---->");
				distance += SearchArcs(G, d[i], d[i + 1]);
				total_time += ReturnCosttime(G, d[i], d[i + 1]);
			}
			printf("%s", G.vexs[w].name);
			printf("   ��·�̣�%d m", distance);
			printf("   Ԥ������ʱ�䣺%.1f min", total_time);
			printf("\n\n");
			return 1;
		}
	}
	AdjVexNode* p;
	for (p = G.vexs[v].firstArc; NULL != p; p = p->nextArc)
	{
		if (G.tags[p->adjvex] == UNVISITED)
		{
			int s = PrintGivenSimpleRoad(G, p->adjvex, w, d_length, d, vexs, v_length);
			if (s == 1)return s;
		}
	}
	G.tags[v] = UNVISITED;
	return 0;
}

//��ӡ���ÿ�ָ��������������һ����·��
Status FindGivenSimpleRoad(Graph G, char** vexs_name, int vexs_length)
{
	int* vexs = (int*)malloc(sizeof(int) * vexs_length);
	if (NULL == vexs)return OVERFLOW;
	for (int i = 0, k = 0; i < vexs_length; i++)
	{
		int pos = SearchName(G, vexs_name[i]);
		if (pos < 0)                                      //Ҫ�󾰵����ֲ������������
		{
			free(vexs);
			return -1;
		}
		for (int j = 0; j < i; j++)                       //�������ظ�����
		{
			if (vexs[j] == pos)return -1;
		}
		vexs[k++] = pos;
	}                                                     //��¼���߾���
	int* d = (int*)malloc(sizeof(int) * G.vexs_num);
	int d_length = -1;
	for (int i = 0; i < G.vexs_num; i++)
	{
		d[i] = -1;
		G.tags[i] = UNVISITED;
	}
	if(1 == PrintGivenSimpleRoad(G,vexs[0],vexs[vexs_length-1],d_length,d,vexs,vexs_length))
	{
		free(d);
		free(vexs);
		return OK;
	}
	else
	{
		free(d);
		free(vexs); 
		return false;
	}
}

//����v�����w�����·�ߵ�����ʱ�䣬��������ڷ���-1
float ReturnCosttime(Graph G, int v, int w)
{
	if (v < 0 || w < 0 || v >= G.vexs_num || w >= G.vexs_num)return -1;
	if (SearchArcs(G, v, w) == 0)return -1;
	AdjVexNode* p = NULL;
	for (p = G.vexs[v].firstArc; NULL != p; p = p->nextArc)
	{
		if (p->adjvex == w)
		{
			return p->cost_time;
		}
	}
	return -1;
}





