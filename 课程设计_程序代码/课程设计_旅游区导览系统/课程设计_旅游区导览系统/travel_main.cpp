#include"travel_guide.h"
int main()
{
	int Receive_options_1;
	char EmptyBuf[BUFSIZ] = "\0";                                        //�ÿջ�����
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
		if (1 == Receive_options_1 && absorb_newline_1 == '\n')                                     //�ο�ѡ��
		{
			system("cls");
			visiters_menu();
			_SetPos(64, 8);
			int Receive_options_visitor_1;
			scanf("%d", &Receive_options_visitor_1);
			char absorb_newline_2 = getchar();
			setbuf(stdin, EmptyBuf);
			if(1 == Receive_options_visitor_1 && absorb_newline_2 == '\n')                                //�ο͡�����ѯ����ѡ��
			{
				system("cls");
				printf("\t\t\t\t\t\t���ε���ϵͳ\n");
				printf("\t\t\t\t********************************************");
				PrintAllVexs(G);
				char Receive_string_visitor_1[NameMaxSize];
				printf("\n\n�����뾰�����ֲ�ѯ��");
				scanf_s("%s", Receive_string_visitor_1,NameMaxSize);
				char absorb_newline_3 = getchar();
				setbuf(stdin, EmptyBuf);
				if (  absorb_newline_3 == '\n'&& OK == PrintVexsInfo(G, Receive_string_visitor_1))
				{ printf("\n\n���뻻�м�����...."); getchar(); }
				else
				{
					system("cls");
					printf("\n\n\n\n");
					printf("\t\t\t\t**************************************************\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                ��������������                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**               ���������������               **\n");
					printf("\t\t\t\t**                �����������롣                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**************************************************\n");
					_SetPos(59, 13);
					getchar();
				}
			}
			else if(2 == Receive_options_visitor_1 && absorb_newline_2 == '\n')                          //�ο͡�����ѯ���·��ѡ��           
			{
				char Receive_string_visitor_2_1[NameMaxSize];
				char Receive_string_visitor_2_2[NameMaxSize];
				system("cls");
				printf("\n\n\n\n");
				printf("\t\t********************************************************************************\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                ��������������                              **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                ���ã��𾴵��οͣ��룺                                      **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                   ������ʼ�������֣�                                       **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                                                                            **\n");
				printf("\t\t**                   ����Ŀ�ľ������֣�                                       **\n");
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
					printf("\t\t\t\t**                ��������������                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**               ���������������               **\n");
					printf("\t\t\t\t**                �����������롣                **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**                                              **\n");
					printf("\t\t\t\t**************************************************\n");
					_SetPos(59, 13);
					getchar();
				}
				else if (INFINITY <= Receive_function_result_1)   //������ֲ��ɴ�����
				{
					printf("\t\t\t\t\t\t���ε���ϵͳ\n");
					printf("\t\t\t\t********************************************\n\n");
					printf("\t\t\t");
					printf("%s��%s��·�����ڹ滮�У���ʱ�޷�ͨ�У��������ĵȴ���", Receive_string_visitor_2_1, Receive_string_visitor_2_2);
					printf("\n\n����س�������.....");
					getchar();
				}
				else
				{
					printf("\t\t\t\t\t\t���ε���ϵͳ\n");
					printf("\t\t\t\t********************************************\n\n");
					printf("\t");
					printf("%s��%s������·�ߣ�",Receive_string_visitor_2_1, Receive_string_visitor_2_2);
					OutputPath(G, Function_array_1, Function_array_1[SearchName(G,Receive_string_visitor_2_2)].prev);
					printf("%s", G.vexs[SearchName(G, Receive_string_visitor_2_2)]);
					printf("   ��·�̣�%d m", Function_array_1[SearchName(G, Receive_string_visitor_2_2)].lowcast);
					printf("   Ԥ������ʱ�䣺%.1f min", Function_array_1[SearchName(G, Receive_string_visitor_2_2)].stime);
					free(Function_array_1);
					Function_array_1 = NULL;
					printf("\n\n����س�������.....");
					getchar();
				}
			}
			else if (0 == Receive_options_visitor_1 && absorb_newline_2 == '\n')break;     
			else if (3 == Receive_options_visitor_1 && absorb_newline_2 == '\n')           //�ο͡�����ѯ���м�·��ѡ��
			{
			system("cls");
			printf("\n\n\n\n");
			printf("\t\t********************************************************************************\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                ��������������                              **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                ���ã��𾴵��οͣ��룺                                      **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                   ������ʼ�������֣�                                       **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                                                                            **\n");
			printf("\t\t**                   ����Ŀ�ľ������֣�                                       **\n");
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
				printf("\t\t\t\t\t\t���ε���ϵͳ\n");
				printf("\t\t\t\t********************************************\n\n");
				FindAllSimpleRoad(G, Receive_string_visitor_3_1, Receive_string_visitor_3_2);
				printf("\n���뻻�м�����.....");
				getchar();
			}
			else
			{
				system("cls");
				printf("\n\n\n\n");
				printf("\t\t\t\t**************************************************\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                ��������������                **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**               ���������������               **\n");
				printf("\t\t\t\t**                �����������롣                **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**************************************************\n");
				_SetPos(59, 13);
				getchar();
			}
            }
			else if (4 == Receive_options_visitor_1 && absorb_newline_2 == '\n')                   //�ο͡�����ѯָ��·��ѡ��
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
						  printf("\t\t\t\t**                ��������������                **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**             ��������Ѵ����ޣ�               **\n");
						  printf("\t\t\t\t**              �޷�������ӡ�                  **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
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
					 printf("\t\t\t\t**                ��������������                **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**      �����뾰������֣�                      **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**      ע�⣺Ĭ�ϵ�һ������ľ�������㣬      **\n");
					 printf("\t\t\t\t**            ���һ������ľ������յ㡣        **\n");
					 printf("\t\t\t\t**************************************************\n");
					 _SetPos(58, 9);
					 scanf("%s", Function_array_2[i++]);
					 system("cls");
					 printf("\n\n\n\n");
					 printf("\t\t\t\t**************************************************\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                ��������������                **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                  ��ӳɹ���                  **\n");
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
					 printf("\t\t\t\t**                ��������������                **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**      �Ƿ������Ӿ��㣺                      **\n");
					 printf("\t\t\t\t**                                              **\n");
					 printf("\t\t\t\t**          1.��                 2.��           **\n");
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
					  printf("\t\t\t\t\t\t���ε���ϵͳ\n");
					  printf("\t\t\t\t********************************************\n\n");
					  printf("�Ƽ�·�ߣ�");
					  FindGivenSimpleRoad(G, Function_array_2, Function_input_1);
					  setbuf(stdin, EmptyBuf);
					  printf("\n���뻻�м�����.....");
					  getchar();
				  }
				  else if (Receive_function_result_2 == -1)
				  {
					  setbuf(stdin, EmptyBuf);
					      system("cls");
						  printf("\n\n\n\n");
						  printf("\t\t\t\t**************************************************\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                ��������������                **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**                                              **\n");
						  printf("\t\t\t\t**             ����������������롣           **\n");
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
				  else if (0 == Receive_function_result_2)
				  {
					  setbuf(stdin, EmptyBuf);
					  system("cls");
					  printf("\n\n\n\n");
					  printf("\t\t\t\t**************************************************\n");
					  printf("\t\t\t\t**                                              **\n");
					  printf("\t\t\t\t**                ��������������                **\n");
					  printf("\t\t\t\t**                                              **\n");
					  printf("\t\t\t\t**                                              **\n");
					  printf("\t\t\t\t**                  �޿��Ƽ�·�ߡ�              **\n");
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
            }
			else
			{
			Error_menu();
			}                             
		}
		else if (2 == Receive_options_1 && absorb_newline_1 == '\n')                  //����Աѡ��
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
				printf("\t\t\t\t**                ��������������                **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**            �˺�����������������롣        **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**                                              **\n");
				printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
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
				if (1 == Receive_options_manager_1 && absorb_newline_3 == '\n')                  //����Ա�����༭����ѡ��
				{
					system("cls");
					manager_vexs_menu();
					_SetPos(59, 8);
					int Receive_options_manager_1_1;
					scanf("%d", &Receive_options_manager_1_1);
					char absorb_newline_4 = getchar();
					setbuf(stdin, EmptyBuf);
					if (1 == Receive_options_manager_1_1 && absorb_newline_4 == '\n')              //���Ӿ�����Ϣѡ��
					{
						system("cls");
						printf("\t\t\t\t\t\t���ε���ϵͳ\n");
						printf("\t\t\t\t********************************************\n\n");
						char Receive_string_manager_2_1[NameMaxSize];
						char Receive_string_manager_2_2[InfoMaxSize];
						printf("��������������ľ�������(����������10������)��");
						scanf("%s", Receive_string_manager_2_1);
						printf("\n");
						printf("��������������ľ�����(���������100������)��");
						scanf("%s", Receive_string_manager_2_2);
						getchar();
						int Receive_function_result_3;
						if (OK == (Receive_function_result_3 = AddVexs(G, Receive_string_manager_2_1, Receive_string_manager_2_2)))
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                �����¾���ɹ���              **\n");
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
						else if (Receive_function_result_3 == -1)
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**             ���������ظ������벻����         **\n");
							printf("\t\t\t\t**             ��׼�������¾���ʧ�ܡ�           **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
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
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           ϵͳ��ռ䲻�㣬����                 **\n");
							printf("\t\t\t\t**           ����ʧ�ܡ�                         **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (2 == Receive_options_manager_1_1 && absorb_newline_4 == '\n')        //ɾ��������Ϣѡ��
					{
						char Receive_string_manager_3[NameMaxSize];
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t\t\t**************************************************\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                ��������������                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     �����룬                                 **\n");
						printf("\t\t\t\t**     ɾ���ľ�������֣�                       **\n");
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
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ɾ������ɹ���                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           �������ֲ����ڣ�ɾ��ʧ�ܡ�         **\n");
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
					}
					else if (3 == Receive_options_manager_1_1 && absorb_newline_4 == '\n')        //�޸ľ�����Ϣѡ��
					{
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t\t\t**************************************************\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                ��������������                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     �����룬                                 **\n");
						printf("\t\t\t\t**     �޸ĵľ�������֣�                       **\n");
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
						printf("\t\t\t\t**                ��������������                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     �޸ģ�                                   **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**      1.�þ�������          2.�þ�����      **\n");
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
						printf("\t\t\t\t\t\t���ε���ϵͳ\n");
						printf("\t\t\t\t********************************************\n\n");
						printf("�����޸����ݣ�");
						scanf("%s", Receive_string_manager_4_2);
						setbuf(stdin, EmptyBuf);
						if (OK == ModifyVexs(G, Receive_string_manager_4_1, Function_input_2, Receive_string_manager_4_2))
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                �޸ľ���ɹ���                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           ��������˾��㲻���ڣ�           **\n");
							printf("\t\t\t\t**           �޸ľ���ʧ�ܡ�                     **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
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
				else if (2 == Receive_options_manager_1 && absorb_newline_3 == '\n')                //����Ա�����༭����Ϣѡ��
				{
					system("cls");
					manager_arcs_menu();
					_SetPos(59, 8);
					int Receive_options_2;
					scanf("%d", &Receive_options_2);
					char absorb_newline_5 = getchar();
					if (1 == Receive_options_2 && absorb_newline_5 == '\n')              //����·����Ϣѡ��
					{
						char Receive_string_manager_5_1[NameMaxSize], Receive_string_manager_5_2[NameMaxSize];
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t********************************************************************************\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                ��������������                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                �����룺                                                    **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                  ��������1��                                               **\n");
						printf("\t\t**                  ��������2��                                               **\n");
						printf("\t\t**                   ·�߳��ȣ�                                               **\n");
						printf("\t\t**           Ԥ��·�߻���ʱ�䣺                                               **\n");
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
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ������·�߳ɹ���              **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**           ��������·���ѹ滮��             **\n");
							printf("\t\t\t\t**           ����·��ʧ�ܡ�                     **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (2 == Receive_options_2 && absorb_newline_5 == '\n')           //ɾ��·����Ϣѡ��
					{
						char Receive_string_manager_6_1[NameMaxSize], Receive_string_manager_6_2[NameMaxSize];
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t********************************************************************************\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                ��������������                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**          ɾ��·�ߣ�������·�����˵ľ������֣�                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   ���뾰������1��                                          **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   ���뾰������2��                                          **\n");
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
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ɾ��·�߳ɹ���                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**               �����·�߲����ڣ�             **\n");
							printf("\t\t\t\t**               ɾ��·��ʧ�ܡ�                 **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**************************************************\n");
							_SetPos(59, 13);
							getchar();
						}
					}
					else if (3 == Receive_options_2 && absorb_newline_5 == '\n')                //�޸�·����Ϣѡ��
					{
						system("cls");
						printf("\n\n\n\n");
						printf("\t\t********************************************************************************\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                ��������������                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**          �޸�·�ߣ�������·�����˵ľ������֣�                              **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   ���뾰������1��                                          **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                                                                            **\n");
						printf("\t\t**                   ���뾰������2��                                          **\n");
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
						printf("\t\t\t\t**                ��������������                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     �޸ģ�                                   **\n");
						printf("\t\t\t\t**               1.��·�߳���                   **\n");
						printf("\t\t\t\t**               2.��·��Ԥ������ʱ��           **\n");
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
						printf("\t\t\t\t**                ��������������                **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**                                              **\n");
						printf("\t\t\t\t**     �������޸�ֵ��                           **\n");
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
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                �޸�·�߳ɹ���                **\n");
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
						else
						{
							system("cls");
							printf("\n\n\n\n");
							printf("\t\t\t\t**************************************************\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                ��������������                **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**              ��������·�߲����ڣ�          **\n");
							printf("\t\t\t\t**              �޸�·��ʧ�ܡ�                  **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**                                              **\n");
							printf("\t\t\t\t**    ���뻻�м�����......                      **\n");
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
				else if (0 == Receive_options_manager_1 && absorb_newline_3 == '\n') { break; }           //�˳�ѡ��
				else
				{
					Error_menu();
				}
			}
		}
		//����Աѡ��
		else if (0 == Receive_options_1 && absorb_newline_1 == '\n')                            //�˳�ѡ��
		{
			 break;
		}
		else                                                                                   //���������
		{
		Error_menu();
		}
	}
	system("cls");
	system("pause");
}