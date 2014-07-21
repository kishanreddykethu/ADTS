/*
DESCRIPTION: This is the test file that implements the basic functions defined in the header file "list.h" on singly-linkedlists.
	Author:Kethu Harikishan Reddy
	EMAIL:kishanreddy.kethu@gmail.com
	Version:1.0
*/
#include <stdio.h>
#include "list.h"
void main()
{
	nodeptr p = NULL;
	int n,q;
	char c = 'y';
	while(c=='y')
	{	
		printf("Enter the operation you would like to perform.");
		printf("\n1.ListPush\n2.ListPop\n3.ListDelete\n4.List Length\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Enter the number to be appended.\n");
				scanf("%d",&q);
				list_push(&p,q);
				break;
			case 2:
				printf("The list is being popped");
				list_pop(&p);
				break;
			case 3:
				printf("The list is going to be deleted");
				list_delete(&p);
				break;
			case 4:
				printf("The length of list list is going tobe printed\n %d",list_length(&p));
				break;
			default:
				printf("Wrong Choice!!");
				break;
		}
		printf("Would you like to continue?? y/n");
		scanf("%c",&c);
	}
}