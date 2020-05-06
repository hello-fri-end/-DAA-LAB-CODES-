#include <stdio.h>
#include <stdlib.h>
#include "1.GCD/gcd.h"
#include "2/lab2.h"
#include "3/lab3.h"
#include "4/lab4.h"
#include "5/lab5.h"
#include "6/lab6.h"

int main()
{
	printf("welcome to our lab submission code\n");
	printf("enter the following choices\n");
	printf("1 ==> 1.GCD\n");
	printf("2 ==> 2.9-Jan-2020\n");
	printf("3 ==> 3.16-Jan-2020\n");
	printf("4 ==>4.23-Jan-2020\n");
	printf("5 ==> 5.6-Feb-2020\n");
	printf("6 ==>6.27-Feb-2020\n");		
	int num;
	int ch;
	scanf("%d",&num);
	system("clear");//clearing console screen similar to clrscr in c++
	switch(num)
	{
		case 1:
				printf("ENTER THE CHOICE FOR PROGRAM OF DATE 1.GCD\n");
				printf("1==>LOGIC 1 ITERATIVE\n");
				printf("2==>LOGIC 1 RECURSIVE\n");
				printf("3==>LOGIC 2 ITERATIVE\n");
				printf("4==>LOGIC 2 RECURSIVE\n");
				printf("5==>LOGIC 3 ITERATIVE\n");
				printf("6==>LOGIC 3 RECURSIVE\n");
				printf("7==>LOGIC 2 GENERAL\n");
				scanf("%d",&ch);
				system("clear");
				switch(ch)
				{
					case 1 : gcd_1_itr();
					break;
					case 2 : gcd_1_rec();
					break;
					case 3 : gcd_2_itr();
					break;
					case 4 : gcd_2_rec();
					break;
					case 5 :gcd_3_itr();
					break;
					case 6 : gcd_3_rec();
					break;
					case 7 : gcd_2_gen();
					break;
					default :printf("invalid\n");
				}
				break;
		case 2:
					printf("ENTER THE CHOICE FOR PROGRAM 2.9-Jan-2020 \n");
					printf("1==>q1_binary seach\n");
					printf("2==>q2_map\n");
					printf("3==>q3_fibonacci\n");
					printf("4==>q4_linearsearch\n");
					printf("5==>q5\n");
					printf("6==>q6_linearsearch\n");
					scanf("%d",&ch);
					system("clear");
					switch(ch)
					{
						case 1 :  q1_binary();
						break;
						case 2 :  q1_map();
						break;
						case 3 :  q2_fibonacci();
						break;
						case 4 :  q2_linearseach();
						break;
						case 5 : q3();
						break;
						case 6 :   q1_twopointer();
						break;
						default :printf("invalid\n");
					}							
			break;
			case 3 :printf("ENTER THE CHOICE FOR PROGRAM 3.16-Jan-2020 \n");
					printf("1==>q1_insertionsort\n");
					printf("2==>l3_mapping\n");
					printf("3==>q1_mergesort\n");
					scanf("%d",&ch);
					system("clear");
					switch(ch)
					{
						case 1 :q1_insertionsort();
						break;
						case 2:  l3_mapping();
						break;
						case 3: q1_mergesort();
						break;
						default :printf("invalid\n");
					}
				break;
			case 4 :printf("ENTER THE CHOICE FOR PROGRAM 4.23-Jan-2020 \n");
					printf("1==>twomergesort\n");
					printf("2==>threemerge\n");
					printf("3==>count1_binary\n");
					printf("4==>coun_negative\n");
					printf("5==>general_gcd\n");
					printf("6==>q2_brueteforce\n");
					printf("7==>hanoi\n");
					scanf("%d",&ch);
					system("clear");
					switch(ch)
					{
						case 1 :twomergesort();
						break;
						case 2:threemerge();
						break;
						case 3:count1_binary();
						break;
						case 4 :coun_negative();
						break;
						case 5: general_gcd();
						break;
						case 6:q2_brueteforce();
						break;
						case 7:hanoi();
						break;
						default :printf("invalid\n");
					}
					break;
				case 5:	printf("ENTER THE CHOICE FOR PROGRAM 5.6-Feb-2020 \n");
						printf("1==>q1\n");
						printf("2==>kpointer\n");
						printf("3==>heapify\n");
						printf("4==>dandc\n");
						printf("5==>twoatatime\n");
						printf("6==>bstree\n");
						scanf("%d",&ch);
					    system("clear");
					    switch(ch)
					    {
							case 1:q52();
							break;
							case 2:kpointer();
							break;
							case 3:heapify();
							break;
							case 4:dandc();
							break;
							case 5:twoattime();
							break;
							case 6:bstree();
							break;
							default :printf("invalid\n");
						}
					break;
					case 6 :printf("ENTER THE CHOICE FOR PROGRAM 5.6-Feb-2020 \n");printf("ENTER THE CHOICE FOR PROGRAM 5.6-Feb-2020 \n");
							printf("1==>binary\n");
							printf("2==>ksmallmain\n");
							printf("3==> qsort_ans\n");
						    scanf("%d",&ch);
					        system("clear");
					        switch(ch)
					        {
								case 1:binary();
								break;
								case 2: ksmallmain();
								break;
								case 3:qsort_ans();
								break;
								default :printf("invalid\n");
							}
					break;						
					default :printf("hii,sorry invalid\n");		
	}
	return (0);			
}
