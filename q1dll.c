/*A menu driven program to perform certain operations on a double linked list*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	struct node *prev;
	int info;
	struct node *next;
};
struct node*newstart;
void createlist(struct node*);
void traverse(struct node*);
void insert_beg(struct node*);
void insert_end(struct node*);
void insert_loc(struct node*);
void delete_beg(struct node*)
void delete_end(struct node*);
void delete_loc(struct node*);
int main()
{
	struct node *start;
	createlist(start);
	int choice=1,item;
	while();
}
