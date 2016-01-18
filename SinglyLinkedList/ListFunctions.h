#ifndef LIST_FUNCTIONS_H
#define LIST_FUNCTIONS_H

#include <cstdlib>
#include <iostream>
using namespace std;

struct node
{
	int number; // data
	node *next;	// pointer to next element
};

//	Prototypes
bool isEmpty(node *head);
char menu();
void insertAsFirstElement(node *&head, node *&last, int number);
void insert(node *&head, node *&last, int number);
void remove(node *&head, node *&last, int number);
void showList(node *current);

#endif 