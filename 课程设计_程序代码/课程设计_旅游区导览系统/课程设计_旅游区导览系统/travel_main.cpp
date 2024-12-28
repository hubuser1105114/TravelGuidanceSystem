#include"travel_guide.h"
int main()
{
	int Receive_options_1;
	char EmptyBuf[BUFSIZ] = "\0";                                        //置空缓冲区
	VexsInfo* sample_vexs = NULL;
	InitVexs(sample_vexs);
	Graph G = { NULL,0 ,0 ,UNDEFINED,NULL };
	RandomCreateGraph(G, sample_vexs);
	while (1)
	{
		system("cls");
		main_menu();
		_SetPos(54, 8);
		setbuf(stdin,EmptyBuf);
		scanf("%d", &Receive_options_1);
		char absorb_newline_1 = getchar();
		setbuf(stdin, EmptyBuf);
		if (1 == Receive_options_1 && absorb_newline_1 == '\n')                                     //游客选项
		{
			system("cls");
			visiters_menu();
			_SetPos(64, 8);
			int Receive_options_visitor_1;
			scanf("%d", &Receive_options_visitor_1);
			char absorb_newline_2 = getchar();
			setbuf(stdin, EmptyBuf);
			if(1 == Receive_options_visitor_1 && absorb_newline_2 == '\n')                                //游客——查询景点选项
			{
				system("cls");
				printf("\t\t\t\t\t\t旅游导览系统\n");
				printf("\t\t\t\t********************************************");
				PrintAllVexs(G);
				char Receive_string_visitor_1[NameMaxSize];
				printf("\n\n请输入景点名字查询：");
				scanf_s("%s", Receive_string_visitor_1,NameMaxSize);
				char absorb_newline_3 = getchar();
				setbuf(stdin, EmptyBuf);
				if (  absorb_newline_3 == '\n'&& OK == PrintVexsInfo(G, Receive_string_visitor_1))
				{ printf("\n\n输入换行键继续...."); getchar(); }
				else
				{
					system("cls");
					printf("\n\n\n\n");
					printf("\t\t\t\t**************************************************\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                旅游区导览界面                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**               景点名字输入错误               **\n");
					printf("\t\t\t\t**                ，请重新输入。                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**    输入换行键继续......                      **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**************************************************\n");
					_SetPos(59, 13);
					getchar();
				}
			}
			else if(2 == Receive_options_visitor_1 && absorb_newline_2 == '\n')                          //游客——查询最短路径选项           
			{
				char Receive_string_visitor_2_1[NameMaxSize];
				char Receive_string_visitor_2_2[NameMaxSize];
				system("cls");
				printf("\n\n\n\n");
				printf("\t\t********************************************************************************\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                旅游区导览界面                              **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                您好，尊敬的游客，请：                                      **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                   输入起始景点名字：                                       **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                   输入目的景点名字：                                       **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t********************************************************************************\n");
				_SetPos(55, 11);
				scanf("%s", Receive_string_visitor_2_1);
				char absorb_newline_4 = getchar();
				_SetPos(55, 14);
				scanf("%s", Receive_string_visitor_2_2);
				char absorb_newline_5 = getchar();
				int Receive_function_result_1;
				DistInfo* Function_array_1 = NULL;
				system("cls");
				setbuf(stdin, EmptyBuf);
				if (OK > (Receive_function_result_1 = PrintShortestRoad(G, Receive_string_visitor_2_1, Receive_string_visitor_2_2, Function_array_1)))
				{
					printf("\n\n\n\n");
					printf("\t\t\t\t**************************************************\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                旅游区导览界面                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**               景点名字输入错误               **\n");
					printf("\t\t\t\t**                ，请重新输入。                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**    输入换行键继续......                      **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**************************************************\n");
					_SetPos(59, 13);
					getchar();
				}
				else if (INFINITY <= Receive_function_result_1)   //景点出现不可达的情况
				{
					printf("\t\t\t\t\t\t旅游导览系统\n");
					printf("\t\t\t\t********************************************\n\n");
					printf("\t\t\t");
					printf("%s到%s的路线现在规划中，暂时无法通行，请您耐心等待。", Receive_string_visitor_2_1, Receive_string_visitor_2_2);
					printf("\n\n输入回车键继续.....");
					getchar();
				}
				else
				{
					printf("\t\t\t\t\t\t旅游导览系统\n");
					printf("\t\t\t\t********************************************\n\n");
					printf("\t");
					printf("%s到%s的最优路线：",Receive_string_visitor_2_1, Receive_string_visitor_2_2);
					OutputPath(G, Function_array_1, Function_array_1[SearchName(G,Receive_string_visitor_2_2)].prev);
					printf("%s", G.vexs[SearchName(G, Receive_string_visitor_2_2)]);
					printf("   总路程：%d m", Function_array_1[SearchName(G, Receive_string_visitor_2_2)].lowcast);
					printf("   预估所需时间：%.1f min", Function_array_1[SearchName(G, Receive_string_visitor_2_2)].stime);
					free(Function_array_1);
					Function_array_1 = NULL;
					printf("\n\n输入回车键继续.....");
					getchar();
				}
			}
			else if (0 == Receive_options_visitor_1 && absorb_newline_2 == '\n')break;     
			else if (3 == Receive_options_visitor_1 && absorb_newline_2 == '\n')           //游客——查询所有简单路径选项
			{
			system("cls");
			printf("\n\n\n\n");
			printf("\t\t********************************************************************************\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                旅游区导览界面                              **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                您好，尊敬的游客，请：                                      **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                   输入起始景点名字：                                       **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                   输入目的景点名字：                                       **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t********************************************************************************\n");
			_SetPos(55, 11);
			char Receive_string_visitor_3_1[NameMaxSize], Receive_string_visitor_3_2[NameMaxSize];
			scanf("%s", Receive_string_visitor_3_1);
			getchar();
			_SetPos(55, 14);
			scanf("%s", Receive_string_visitor_3_2);
			setbuf(stdin, EmptyBuf);
			if(OK == FindAllSimpleRoad(G,Receive_string_visitor_3_1,Receive_string_visitor_3_2))
			{ 
				system("cls");
				printf("\t\t\t\t\t\t旅游导览系统\n");
				printf("\t\t\t\t********************************************\n\n");
				FindAllSimpleRoad(G, Receive_string_visitor_3_1, Receive_string_visitor_3_2);
				printf("\n输入换行键继续.....");
				getchar();
			}
			else
			{
				system("cls");
				printf("\n\n\n\n");
				printf("\t\t\t\t**************************************************\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                旅游区导览界面                **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**               景点名字输入错误               **\n");
				printf("\t\t\t\t**                ，请重新输入。                **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**    输入换行键继续......                      **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**************************************************\n");
				_SetPos(59, 13);
				getchar();
			}
            }
			else if (4 == Receive_options_visitor_1 && absorb_newline_2 == '\n')                   //游客——查询指定路线选项
			{
			      int Receive_options_visitor_2 = 1;
				  setbuf(stdin, EmptyBuf);
				  char** Function_array_2;
				  Function_array_2 = (char**)malloc(sizeof(char*) * G.vexs_num);
				  int i;
				  for (i = 0; i < G.vexs_num; i++)
				  {
					  Function_array_2[i] = (char*)malloc(sizeof(char) * NameMaxSize);
				  }
				  i = 0;
			      while (Receive_options_visitor_2 == 1)
			     {
					  if (i >= G.vexs_num)
					  {
						  system("cls");
						  printf("\n\n\n\n");
						  printf("\t\t\t\t**************************************************\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                旅游区导览界面                **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**             景点个数已达上限，               **\n");
						  printf("\t\t\t\t**              无法继续添加。                  **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**    输入换行键继续......                      **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**************************************************\n");
						  _SetPos(59, 13);
						  getchar();
						  break;
					  }
					 system("cls");
					 printf("\n\n\n\n");
					 printf("\t\t\t\t**************************************************\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                旅游区导览界面                **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**      请输入景点的名字：                      **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**      注意：默认第一个输入的景点是起点，      **\n");
					 printf("\t\t\t\t**            最后一个输入的景点是终点。        **\n");
					 printf("\t\t\t\t**************************************************\n");
					 _SetPos(58, 9);
					 scanf("%s", Function_array_2[i++]);
					 system("cls");
					 printf("\n\n\n\n");
					 printf("\t\t\t\t**************************************************\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                旅游区导览界面                **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                  添加成功！                  **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**************************************************\n");
					 Sleep(750);
					 setbuf(stdin, EmptyBuf);
					 system("cls");
					 printf("\n\n\n\n");
					 printf("\t\t\t\t**************************************************\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                旅游区导览界面                **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**      是否继续添加景点：                      **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**          1.是                 2.否           **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**************************************************\n");
					 _SetPos(58, 9);
					 scanf("%d", &Receive_options_visitor_2);
				  }
				      //
				    
				  int Function_input_1 = i,Receive_function_result_2; 
				  if(OK == ( Receive_function_result_2 = FindGivenSimpleRoad(G,Function_array_2,Function_input_1)))
				  {
					  system("cls");
					  printf("\t\t\t\t\t\t旅游导览系统\n");
					  printf("\t\t\t\t********************************************\n\n");
					  printf("推荐路线：");
					  FindGivenSimpleRoad(G, Function_array_2, Function_input_1);
					  setbuf(stdin, EmptyBuf);
					  printf("\n输入换行键继续.....");
					  getchar();
				  }
				  else if (Receive_function_result_2 == -1)
				  {
					  setbuf(stdin, EmptyBuf);
					      system("cls");
						  printf("\n\n\n\n");
						  printf("\t\t\t\t**************************************************\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                旅游区导览界面                **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**             输入错误，请重新输入。           **\n");
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
				  else if (0 == Receive_function_result_2)
				  {
					  setbuf(stdin, EmptyBuf);
					  system("cls");
					  printf("\n\n\n\n");
					  printf("\t\t\t\t**************************************************\n");
					  printf("\t\t\t\t**                                              **\n");
					  printf("\t\t\t\t**                旅游区导览界面                **\n");
					  printf("\t\t\t\t**                                              **\n");
					  printf("\t\t\t\t**                                              **\n");
					  printf("\t\t\t\t**                  无可推荐路线。              **\n");
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
            }
			else
			{
			Error_menu();
			}                             
		}
		else if (2 == Receive_options_1 && absorb_newline_1 == '\n')                  //管理员选项
		{
			system("cls");
			secure_manager_menu();
			char Receive_string_manager_1_1[PasswordMaxSize], Receive_string_manager_1_2[PasswordMaxSize];
			_SetPos(52, 10);
			scanf("%s", Receive_string_manager_1_1);
			getchar();
			_SetPos(52, 11);
			scanf("%s", Receive_string_manager_1_2);
			getchar();
			if (0 != strcmp(Receive_string_manager_1_1, AccountNumber) || 0 != strcmp(Receive_string_manager_1_2, PasswordNumber))
			{
				system("cls");
				printf("\n\n\n\n");
				printf("\t\t\t\t**************************************************\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                旅游区导览界面                **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**            账号密码错误，请重新输入。        **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**    输入换行键继续......                      **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**************************************************\n");
				_SetPos(59, 13);
				getchar();
				continue;
			}
			int Receive_options_manager_1;
			char absorb_newline_3;
			while (1)
			{
				system("cls");
				manager_menu();
				_SetPos(59, 8);
				scanf("%d", &Receive_options_manager_1);
				absorb_newline_3 = getchar();
				setbuf(stdin, EmptyBuf);
				if (1 == Receive_options_manager_1 && absorb_newline_3 == '\n')                  //管理员——编辑景点选项
				{
					system("cls");
					manager_vexs_menu();
					_SetPos(59, 8);
					int Receive_options_manager_1_1;
					scanf("%d", &Receive_options_manager_1_1);
					char absorb_newline_4 = getchar();
					setbuf(stdin, EmptyBuf);
					if (1 == Receive_options_manager_1_1 && absorb_newline_4 == '\n')              //增加景点信息选项
					{
						system("cls");
						printf("\t\t\t\t\t\t旅游导览系统\n");
						printf("\t\t\t\t********************************************\n\n");
						char Receive_string_manager_2_1[NameMaxSize];
						char Receive_string_manager_2_2[InfoMaxSize];
						printf("请输入新增景点的景点名字(名字字数在10字以内)：");
						scanf("%s", Receive_string_manager_2_1);
						printf("\n");
						printf("请输入新增景点的景点简介(简介字数在100字以内)：");
						scanf("%s", Receive_string_manager_2_2);
						getchar();
						int Receive_function_result_3;
						if (OK == (Receive_function_result_3 = AddVexs(G, Receive_string_manager_2_1, Receive_string_manager_2_2)))
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                增加新景点成功！              **\n");
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
						else if (Receive_function_result_3 == -1)
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**             景点名字重复或输入不符合         **\n");
							printf("\t\t\t\t**             标准，增加新景点失败。           **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    输入换行键继续......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           系统或空间不足，增加                 **\n");
							printf("\t\t\t\t**           景点失败。                         **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    输入换行键继续......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (2 == Receive_options_manager_1_1 && absorb_newline_4 == '\n')        //删除景点信息选项
					{
						char Receive_string_manager_3[NameMaxSize];
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t\t\t**************************************************\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                旅游区导览界面                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     请输入，                                 **\n");
						printf("\t\t\t\t**     删除的景点的名字：                       **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**************************************************\n");
						_SetPos(57, 9);
						scanf("%s", Receive_string_manager_3);
						getchar();
						if (OK == DeleteVexs(G, Receive_string_manager_3))
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                删除景点成功！                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           景点名字不存在，删除失败。         **\n");
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
					}
					else if (3 == Receive_options_manager_1_1 && absorb_newline_4 == '\n')        //修改景点信息选项
					{
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t\t\t**************************************************\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                旅游区导览界面                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     请输入，                                 **\n");
						printf("\t\t\t\t**     修改的景点的名字：                       **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**************************************************\n");
						_SetPos(57, 9);
						char Receive_string_manager_4_1[NameMaxSize];
						scanf("%s", Receive_string_manager_4_1);
						setbuf(stdin, EmptyBuf);
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t\t\t**************************************************\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                旅游区导览界面                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     修改：                                   **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**      1.该景点名字          2.该景点简介      **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**************************************************\n");
						_SetPos(45, 8);
						int Function_input_2;
						scanf("%d", &Function_input_2);
						setbuf(stdin, EmptyBuf);
						char Receive_string_manager_4_2[InfoMaxSize];
						system("cls");
						printf("\t\t\t\t\t\t旅游导览系统\n");
						printf("\t\t\t\t********************************************\n\n");
						printf("输入修改内容：");
						scanf("%s", Receive_string_manager_4_2);
						setbuf(stdin, EmptyBuf);
						if (OK == ModifyVexs(G, Receive_string_manager_4_1, Function_input_2, Receive_string_manager_4_2))
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                修改景点成功！                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           输入错误或此景点不存在，           **\n");
							printf("\t\t\t\t**           修改景点失败。                     **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    输入换行键继续......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (0 == Receive_options_manager_1_1 && absorb_newline_4 == '\n')
					{
						continue;
					}
					else
					{
						Error_menu();
					}
				}
				else if (2 == Receive_options_manager_1 && absorb_newline_3 == '\n')                //管理员——编辑边信息选项
				{
					system("cls");
					manager_arcs_menu();
					_SetPos(59, 8);
					int Receive_options_2;
					scanf("%d", &Receive_options_2);
					char absorb_newline_5 = getchar();
					if (1 == Receive_options_2 && absorb_newline_5 == '\n')              //增加路线信息选项
					{
						char Receive_string_manager_5_1[NameMaxSize], Receive_string_manager_5_2[NameMaxSize];
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t********************************************************************************\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                旅游区导览界面                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                请输入：                                                    **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                  景点名字1：                                               **\n");
						printf("\t\t**                  景点名字2：                                               **\n");
						printf("\t\t**                   路线长度：                                               **\n");
						printf("\t\t**           预计路线花费时间：                                               **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t********************************************************************************\n");
						_SetPos(47, 10);
						scanf("%s", Receive_string_manager_5_1);
						getchar();
						_SetPos(47, 11);
						scanf("%s", Receive_string_manager_5_2);
						getchar();
						int Function_input_3_1;
						float Function_input_3_2;
						_SetPos(47, 12);
						scanf("%d", &Function_input_3_1);
						_SetPos(47, 13);
						scanf("%f", &Function_input_3_2);
						setbuf(stdin, EmptyBuf);
						if (OK == AddArcs(G, Receive_string_manager_5_1, Receive_string_manager_5_2, Function_input_3_1, Function_input_3_2))
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                增加新路线成功！              **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           输入错误或路线已规划，             **\n");
							printf("\t\t\t\t**           增加路线失败。                     **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    输入换行键继续......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (2 == Receive_options_2 && absorb_newline_5 == '\n')           //删除路线信息选项
					{
						char Receive_string_manager_6_1[NameMaxSize], Receive_string_manager_6_2[NameMaxSize];
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t********************************************************************************\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                旅游区导览界面                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**          删除路线，请输入路线两端的景点名字，                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   输入景点名字1：                                          **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   输入景点名字2：                                          **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t********************************************************************************\n");
						_SetPos(52, 11);
						scanf("%s", Receive_string_manager_6_1);
						getchar();
						_SetPos(52, 14);
						scanf("%s", Receive_string_manager_6_2);
						getchar();
						if (OK == DeleteArcs(G, Receive_string_manager_6_1, Receive_string_manager_6_2))
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                删除路线成功！                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**               景点或路线不存在，             **\n");
							printf("\t\t\t\t**               删除路线失败。                 **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    输入换行键继续......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (3 == Receive_options_2 && absorb_newline_5 == '\n')                //修改路线信息选项
					{
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t********************************************************************************\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                旅游区导览界面                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**          修改路线，请输入路线两端的景点名字，                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   输入景点名字1：                                          **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   输入景点名字2：                                          **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t********************************************************************************\n");
						_SetPos(52, 11);
						char Receive_string_manager_7_1[NameMaxSize];
						scanf("%s", Receive_string_manager_7_1);
						getchar();
						char Receive_string_manager_7_2[NameMaxSize];
						_SetPos(52, 14);
						scanf("%s", Receive_string_manager_7_2);
						getchar();
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t\t\t**************************************************\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                旅游区导览界面                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     修改：                                   **\n");
						printf("\t\t\t\t**               1.该路线长度                   **\n");
						printf("\t\t\t\t**               2.该路线预估花费时间           **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**************************************************\n");
						_SetPos(45, 8);
						int Function_input_4_1;
						setbuf(stdin, EmptyBuf);
						scanf("%d", &Function_input_4_1);
						char absorb_newline_6 = getchar();
						setbuf(stdin, EmptyBuf);
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t\t\t**************************************************\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                旅游区导览界面                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     请输入修改值：                           **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**************************************************\n");
						_SetPos(53, 9);
						float Function_input_4_2;
						scanf("%f", &Function_input_4_2);
						setbuf(stdin, EmptyBuf);
						if (absorb_newline_6 == '\n' && OK == ModifyArcs(G, Receive_string_manager_7_1, Receive_string_manager_7_2, Function_input_4_1, Function_input_4_2))
						{
							system("cls");
							printf("%f", Function_input_4_2);
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                修改路线成功！                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                旅游区导览界面                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**              输入错误或路线不存在，          **\n");
							printf("\t\t\t\t**              修改路线失败。                  **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    输入换行键继续......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (0 == Receive_options_2 && absorb_newline_5 == '\n')
					{
						continue;
					}
					else
					{
						setbuf(stdin, EmptyBuf);
						Error_menu();
					}
				}
				else if (0 == Receive_options_manager_1 && absorb_newline_3 == '\n') { break; }           //退出选项
				else
				{
					Error_menu();
				}
			}
		}
		//管理员选项
		else if (0 == Receive_options_1 && absorb_newline_1 == '\n')                            //退出选项
		{
			 break;
		}
		else                                                                                   //输入错误处理
		{
		Error_menu();
		}
	}
	system("cls");
	system("pause");
}