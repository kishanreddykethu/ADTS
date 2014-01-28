/*
DESCRIPTION:This file is the implementation of the header file "list.h" with functions to be operated on a singly-linkedlist for further use.
	Author:Kethu Harikishan Reddy
	EMAIL:kishanreddy.kethu@gmail.com
	Version:1.0 
*/
#include <stdlib.h>
#include "list.h"
void list_push(nodeptr *p,int n)
{
	nodeptr temp = *p,q;
	if(*p==NULL)
	{
		temp = (nodeptr)malloc(sizeof(node));
		temp->data=n;
		temp->next=NULL;
		*p = temp;
		return;
	}
	else
	{
		temp = *p;
		while(temp->next !=NULL)
		{
			temp=temp->next;
		}
		q = (nodeptr)malloc(sizeof(node));
		q->data=n;
		q->next=NULL;
		temp->next=q;
		return;
	}
}
void list_pop(nodeptr *p)
{	nodeptr temp = *p;
	if(temp==NULL)
	{
		return;
	}
	else
	{
		if (temp->next==NULL)
		{
			free(*p);
			*p == NULL;
			return;
		}
		else
		{
			while(temp->next->next != NULL)
				{
					temp = temp->next;
					*p = temp;
					free(*p);
					temp->next = NULL;
				}
		}
		return;
	}

}
void list_delete(nodeptr *p)
{
        while(*p != NULL)
                list_pop(*p);

}
int list_length(const nodeptr *p)
{
	nodeptr temp = *p;
	int n=0;
	if(temp == NULL)
	{
		printf("This is an empty linkedlist");
		return 0;
	}
	while(temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return n;

}