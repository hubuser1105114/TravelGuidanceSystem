#include"travel_guide.h"

//光标移动函数
 void _SetPos(int x, int y)//移动光标到X、Y位置
{
	COORD position;
	position.X = x;
	position.Y = y;
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, position);
}

//生成主界面
void main_menu()
{
	printf("\n\n\n\n");
	printf("\t\t********************************************************************************\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                旅游区导览界面                              **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                请输入数字选择身份：                                        **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                     1.游客                       2.管理员                  **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                    0.退出                                  **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t********************************************************************************\n");
}

//访客界面
void visiters_menu()
{
	printf("\n\n\n\n");
	printf("\t\t********************************************************************************\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                                旅游区导览界面                              **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                您好，尊敬的游客，请选择选项：                              **\n");
	printf("\t\t**                                                                            **\n");
	printf("\t\t**                   1.查询景点                  2.推荐最短路线               **\n");
	printf("\t\t**                   3.查询景点间所有路线        4.规划景点路线               **\n");
	printf("\t\t**                   0.退出                                                   **\n");
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

//管理员界面
void manager_menu()
{
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                旅游区导览界面                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**   你好，管理员，请选择：                     **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**      1.编辑景点信息         2.编辑路线信息   **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                 0.返回主菜单                 **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
}

//进入管理员界面前，需输入账号密码进行安全验证
void secure_manager_menu()
{
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                旅游区导览界面                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**   请输入账号密码，                           **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**            账号：                            **\n");
	printf("\t\t\t\t**            密码：                            **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
}

//管理员——编辑景点信息界面
void manager_vexs_menu()
{
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                旅游区导览界面                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**   你好，管理员，请选择：                     **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**      1.增加景点信息         2.删除景点信息   **\n");
	printf("\t\t\t\t**      3.修改景点信息                          **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                   0.返回                     **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
}


//管理员——编辑边信息界面
void manager_arcs_menu()
{

	{
		printf("\n\n\n\n");
		printf("\t\t\t\t**************************************************\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**                旅游区导览界面                **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**   你好，管理员，请选择：                     **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**      1.增加路线信息         2.删除路线信息   **\n");
		printf("\t\t\t\t**      3.修改路线信息                          **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**                   0.返回                     **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**                                              **\n");
		printf("\t\t\t\t**************************************************\n");
	}
}

//输入错误时显示此页面
void Error_menu()
{
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t**************************************************\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                旅游区导览界面                **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**              输入错误，请重新输入。          **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**    输入换行键继续......                      **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**                                              **\n");
	printf("\t\t\t\t**************************************************\n");
	_SetPos(59, 13);
	getchar();
}

//初始化样本
void InitVexs(VexsInfo* &vexs)
{
	vexs = (VexsInfo*)malloc(sizeof(VexsInfo) * 20);
	for (int i = 0; i < 20; i++)
	{
		vexs[i].info = (char*)malloc(InfoMaxSize * sizeof(char));
		vexs[i].name = (char*)malloc(NameMaxSize * sizeof(char));
	}
	vexs[0].name = strcpy(vexs[0].name, "迎春亭");
	char temp0[InfoMaxSize] = "迎春亭亦称接官亭，是古代官员往来迎送的公馆。"
		                     "这是一个园林幽景，风光旖旎的地方，适合旅客来此处休息和赏景。";
	vexs[0].info = strcpy(vexs[0].info, temp0);
	
	vexs[1].name = strcpy(vexs[1].name, "纳川阁");
	char temp1[InfoMaxSize] = "纳川来自海纳百川，表达包容和开放。"
		                     "阁前更有六条分支的小溪流过，更合纳川之意。纳川阁高三层，适于远眺美景。";
	vexs[1].info = strcpy(vexs[1].info, temp1);

	vexs[2].name = strcpy(vexs[2].name, "相思湖");
	char temp2[InfoMaxSize] = "相思湖湖水波光粼粼，无比的清澈，周围绿树盎然。"
		                      "相传有一对男女在此相爱并私定终生，因此吸引了无数情侣来此。";
	vexs[2].info = strcpy(vexs[2].info, temp2);

	vexs[3].name = strcpy(vexs[3].name, "纯阳殿");
	char temp3[InfoMaxSize] = "纯阳殿本是一处道观，供奉八仙之一的吕洞宾。后重修改为佛教寺庙。"
		                      "造型富有韵味复合四合院布局，木结构，坐南朝北，建筑面积近二千平方米。";
	vexs[3].info = strcpy(vexs[3].info, temp3);

	vexs[4].name = strcpy(vexs[4].name, "玉翠轩");
	char temp4[InfoMaxSize] = "玉翠轩是凉亭和走廊的结合，走廊旁常有翠绿的树木，因得名玉翠"
		                      "玉翠轩是一个纳凉的好去处，也是进行团建活动的好选择。";
	vexs[4].info = strcpy(vexs[4].info, temp4);

	vexs[5].name = strcpy(vexs[5].name, "水镜台");
	char temp5[InfoMaxSize] = "水镜台是现存较大的明清戏台，从建筑结构上看，水镜台体现了殿、台、楼、阁四种风格。"
		                      "造型雄齐，雕刻彩绘精细，四角埋有大缶，作扩音之用。";
	vexs[5].info = strcpy(vexs[5].info, temp5);

	vexs[6].name = strcpy(vexs[6].name, "水禽池");
	char temp6[InfoMaxSize] = "水禽池面积2000平方米,池中有两个小岛,岛上种植了一些牡丹和杜鹃。"
		                      "池中有十余种水鸟，在阳光的辉映下，水池显得格外美丽。";
	vexs[6].info = strcpy(vexs[6].info, temp6);

	vexs[7].name = strcpy(vexs[7].name, "清虚山");
	char temp7[InfoMaxSize] = "清虚山多为石灰岩，久经风雨溶蚀，形成了“如青笋、似狼牙、像箭镞、直刺云天”的奇峰峻岭。"
		                      "山上满沟满沟的杜鹃、海棠，满坡满坡的葛藤和灌木，泉水飞溅，尽显一派南国风光。";
	vexs[7].info = strcpy(vexs[7].info, temp7);

	vexs[8].name = strcpy(vexs[8].name, "枇杷园");
	char temp8[InfoMaxSize] = "枇杷园以多种植枇杷而闻名，在此处，不仅可以看到枇杷硕果累累的景象，"
		                      "还有机会亲自采摘成熟的枇杷并且品尝。园中有售卖枇杷的专卖商店。";
	vexs[8].info = strcpy(vexs[8].info, temp8);

	vexs[9].name = strcpy(vexs[9].name, "淳化斋");
	char temp9[InfoMaxSize] = "淳化斋以淳化居士的“淳化”为名，淳化居士身份未知，但淳化斋相传由此位"
		                      "居士而建，淳化斋中午餐和晚餐提供斋食。";
	vexs[9].info = strcpy(vexs[9].info, temp9);

	vexs[10].name = strcpy(vexs[10].name, "虎丘");
	char temp10[InfoMaxSize] = "虎丘实为虎丘山，海拔高度在100米左右。"
		                       "寺宇沿山而筑，“寺中藏山”为其一大特色。虎丘后山有“虎丘后山胜前山”之说。";
	vexs[10].info = strcpy(vexs[10].info, temp10);

	vexs[11].name = strcpy(vexs[11].name, "波形廊");
	char temp11[InfoMaxSize] = "波形廊廊长近200米，廊宽最大宽度达7米，波形廊蜿蜒盘踞，"
		                       "形状胜似海浪，因此得名“波形廊”，游客可以在廊中欣赏湖边。";
	vexs[11].info = strcpy(vexs[11].info, temp11);

	vexs[12].name = strcpy(vexs[12].name, "玉兰山房");
	char temp12[InfoMaxSize] = "玉兰山房得名于四周遍植的玉兰树。相传这里有一株玉兰树从福建移来的，是“花石纲”遗物。"
		                       "现存完好，游客可来此处赏花并一同学习书画。";
	vexs[12].info = strcpy(vexs[12].info, temp12);

	vexs[13].name = strcpy(vexs[13].name, "南钟");
	char temp13[InfoMaxSize] = "据考证南钟是清代所遗留下来，保存完好，南钟现今仍可敲响。"
		                       "南钟敲响代表祝福和祈福之意，每日傍晚6点会敲响6声南钟。";
	vexs[13].info = strcpy(vexs[13].info, temp13);

	vexs[14].name = strcpy(vexs[14].name, "白莲池");
	char temp14[InfoMaxSize] = "白莲池以多白莲花而闻名，白莲花是由山上的寺庙的僧人所种植。"
		                       "在莲池栏杆外，经常围满游人，他们将金属币一枚一枚地投在池中，"
		                       "沉底了唉声叹息，浮起了兴高采烈，那是因为“浮起”和“福气”谐音的关系。";
	vexs[14].info = strcpy(vexs[14].info, temp14);

	vexs[15].name = strcpy(vexs[15].name, "彩虹桥");
	char temp15[InfoMaxSize] = "彩虹桥全长约85米，在桥上可以看到桥下的池塘，看到远方山上的松塔。"
		                       "由于观景位置良好，彩虹桥吸引了许多游客来此打卡摄影。";
	vexs[15].info = strcpy(vexs[15].info, temp15);

	vexs[16].name = strcpy(vexs[16].name, "红叶道");
	char temp16[InfoMaxSize] = "红叶道全长近800米，两侧是两排红叶杉，红叶杉外是几块大稻田。"
		                       "每当秋分时节，红叶道便会有许多红叶铺落在地上，因此得名红叶道。";
	vexs[16].info = strcpy(vexs[16].info, temp16);

	vexs[17].name = strcpy(vexs[17].name, "千民寨");
	char temp17[InfoMaxSize] = "千民寨历史可追溯到清代，这里有近千户人家在此常年居住，寨中文化丰富独特。"
		                       "晚上由于各家灯火，游客可在观景台上一览饱福寨中灯火的全貌。";
	vexs[17].info = strcpy(vexs[17].info, temp17);

	vexs[18].name = strcpy(vexs[18].name, "不系舟");
	char temp18[InfoMaxSize] = "不系舟意思是比喻自由而无所牵挂，出自《庄子·列御寇》。不系舟原型为一小舟，舟身有些许破损，"
		                       "已无法再登舟，原型不远处有一舟型的酒楼，游客可在此用餐。";
	vexs[18].info = strcpy(vexs[18].info, temp18);

	vexs[19].name = strcpy(vexs[19].name, "白杨沟");
	char temp19[InfoMaxSize] = "白杨沟是游客避暑游玩的好去处，白杨沟并没有种植很多白杨，反而种植了许多榕树，"
		                       "低灌木。游客可在此野餐或野营，当然白杨沟也是一放风筝的好去处。";
	vexs[19].info = strcpy(vexs[19].info, temp19);
}

//查找景点名字为vex_name的顶点的位序，否则返回-1
int SearchName(Graph &G, char* vex_name)
{
	int i;
	for (i = 0; i < G.vexs_num; i++)
		if (0 == strcmp(G.vexs[i].name, vex_name))return i;
	return -1;
}

//查找v顶点和w顶点之间是否存在边关系,如果不存在边关系，返回0；若存在，返回v顶点和w顶点之间的路径长度
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

//对图G进行随机生成信息,景点数不少于8个，边数不少于15条
Status RandomCreateGraph(Graph &G, VexsInfo* vexs)
{
	G.kind = UDN;
	srand((unsigned int)time(NULL));
	G.vexs_num = 8 + rand() % 5;                              //顶点个数为8~12个
	G.vexs = (VexType*)malloc(G.vexs_num * sizeof(VexType));
	if (NULL == G.vexs)return OVERFLOW;
	for (int i = 0; i < G.vexs_num; i++)
	{
		G.vexs[i].firstArc = NULL;
		G.vexs[i].name = (char*)malloc(NameMaxSize * sizeof(char));   //景点名字在10个字以内
		if (NULL == G.vexs[i].name)return OVERFLOW;
		G.vexs[i].name = strcpy(G.vexs[i].name, "/0");
		G.vexs[i].info = (char*)malloc(InfoMaxSize * sizeof(char));   //景点简介在100个字以内
		if (NULL == G.vexs[i].info)return OVERFLOW;
		G.vexs[i].info = strcpy(G.vexs[i].info, "/0");
		G.vexs[i].firstArc = (AdjVexNode*)malloc(sizeof(AdjVexNode));
		if (NULL == G.vexs[i].firstArc)return OVERFLOW;
		G.vexs[i].firstArc = NULL;
	}
	G.tags = (int*)malloc(G.vexs_num * sizeof(int));
	if (NULL == G.tags)return OVERFLOW;
	G.arcs_num = 15 + rand() % 6;                             //边数为15~20条
	for (int i = 0; i < G.vexs_num; i++)                      //初始化tags数组
		G.tags[i] = UNVISITED;
	for (int i = 0; i < G.vexs_num; i++)                      //随机初始化vexs数组景点
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
		length = 200 + rand() % 801;                   //路径长度在200~1000米
		cost_time = (float)length / (float)80;         //预估每分钟走80米
		AddArcs(G, G.vexs[v].name, G.vexs[w].name, length, cost_time);
	}
}

//打印出所有的景点名字
void PrintAllVexs(Graph G)
{
	printf("\n\t\t\t\t\t\t");
	for (int i = 0; i < G.vexs_num; i++)
	{
		printf("景点%d：",i+1);
		printf("%s", G.vexs[i].name);
		printf("\n\t\t\t\t\t\t");
	}
}

//为游客提供景点信息的查询，vex_name是游客输入的景点名字
Status PrintVexsInfo(Graph G, char* vex_name)
{
	int i;
	for (i = 0; i < G.vexs_num; i++)
	{
		if (0 == strcmp(G.vexs[i].name, vex_name))
		{
			system("cls");
			printf("\t\t\t\t\t\t旅游导览系统\n");
			printf("\t\t\t\t********************************************\n\n");
			printf("景点名字：");
			printf("%s", G.vexs[i].name);
			printf("\n");
			printf("景点简介：");
			printf("%s", G.vexs[i].info);
			return OK;
		}
	}
	return ERROR;
}

//为管理员提供增加两个景点之间路线的功能，vex_name1和vex_name2是输入的两个景点名字
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

//打印出源点到k顶点的最短路径
void OutputPath(Graph &G, DistInfo* Dist, int k)
{
	if (-1 == k)return;
	OutputPath(G, Dist, Dist[k].prev);
	printf("%s--->", G.vexs[k].name);
}

//为游客提供两个景点最短路径信息的查询，vex_name1是第一个景点名字，vex_name2是第二个景点名字
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
	if (INFINITY == Dist[w].lowcast)return INFINITY;                 //可能有不可达的情况
	return OK;
}

//为管理员提供增加景点的功能，vex_name是输入的景点名字，vex_info是输入的景点简介
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

//为管理员提供删除景点的功能，vex_name是输入的景点名字
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

//为管理员提供修改景点信息的功能，vex_name是输入的景点名字,type决定了修改的是景点名字还是景点简介
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

//为管理员提供删除两个景点之间路线的功能，vex_name1和vex_name2是输入的两个景点名字
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

//为管理员提供修改两个景点之间路线信息的功能，vex_name1和vex_name2是输入的两个景点名字,type决定了修改的是长度还是时间
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

//打印出所有边关系
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
			printf("   长度：%d m", p->length);
			printf("\n");
			p = p->nextArc;
		}
	}
}

//打印出任意两个景点之间的所有简单路径
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
		printf("   总路程：%d m", distance);
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

//找到两个景点的所有简单路径的调用接口
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

//找到v顶点为起点，w顶点为终点的所有简单路径，并与游客输入的指定路线匹配,存在返回1，不存在返回0
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
			printf("   总路程：%d m", distance);
			printf("   预估所需时间：%.1f min", total_time);
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

//打印出访客指定游览多个景点的一条简单路径
Status FindGivenSimpleRoad(Graph G, char** vexs_name, int vexs_length)
{
	int* vexs = (int*)malloc(sizeof(int) * vexs_length);
	if (NULL == vexs)return OVERFLOW;
	for (int i = 0, k = 0; i < vexs_length; i++)
	{
		int pos = SearchName(G, vexs_name[i]);
		if (pos < 0)                                      //要求景点名字不可以输入错误
		{
			free(vexs);
			return -1;
		}
		for (int j = 0; j < i; j++)                       //不允许重复景点
		{
			if (vexs[j] == pos)return -1;
		}
		vexs[k++] = pos;
	}                                                     //记录沿线景点
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

//返回v顶点和w顶点的路线的所需时间，如果不存在返回-1
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





