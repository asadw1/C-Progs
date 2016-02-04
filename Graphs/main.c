
#include <stdio.h>
#include <stdlib.h>
#include "graph.h"


void main()
{
   int option;
   //clrscr();
   do
   {		printf("\n A Program to represent a Graph by using an ");
		printf("Adjacency Matrix method \n ");
		printf("\n 1. Directed Graph ");
		printf("\n 2. Un-Directed Graph ");
		printf("\n 3. Exit ");
		printf("\n\n Select a proper option : ");
		scanf("%d", &option);
		switch(option)
		{
			case 1 : dirGraph();
				 break;
			case 2 : undirGraph();
				 break;
			case 3 : exit(EXIT_SUCCESS);
		} // switch
	}while(1);
} // main
