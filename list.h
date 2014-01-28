/*
DESCRIPTION:This header file is to use basic functions (prototypes in this file) on a singly-linkedlist which will be implemented 
in list.c file.
	Author:Kethu Harikishan Reddy
	EMAIL:kishanreddy.kethu@gmail.com
	Version:1.0 
*/
#ifndef _LIST_H
#define _LIST_H
typedef struct node node;
typedef node *nodeptr;
struct node{
        int data;
        nodeptr next;
};
void list_push(nodeptr *,int );
void list_pop(nodeptr *);
void list_delete(nodeptr *);
int list_length(const nodeptr *);
#endif