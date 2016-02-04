// Implement function prototypes from graph.h
// contains code for directed & undirected graphs

#include <stdio.h>
#include "graph.h"

int dirGraph()
{
	// data
	int adj_mat[MAX][MAX];
	int num_vert;
	int in_deg, out_deg, i, j;

	// ask how many vertices(nodes)
	// stupidity check 1 of 927193825
	printf("Number of vertices: ");
	scanf("%d",&num_vert);
	if(num_vert > MAX)
	{
	  printf("Sorry. No more than 26 nodes.");
	}
	
	readGraph(adj_mat, num_vert);	// read the graph

	// display all this crap
	printf(" \n Vertex \t In_Degree \t Out_Degree \t Total_Degree ");
	
	for( i = 1; i <= num_vert; i++ ) // traverse nodes
	{
	   in_deg = out_deg = 0;	 // init in/out-degree to 0
	   for( j = 1; j <= num_vert; j++ )
	   {
		// In-degree: number of edges ending at
		// the current vertex
		if( adj_mat[j][i] == 1 ) // col, row
		       in_deg++;
	   } // for
	   for( j = 1; j <= num_vert; j++ ) // 2nd traversal
           {
                // Out-degree: number of edges starting at
                // the current vertex
                if( adj_mat[i][j] == 1 ) // row, col
                       out_deg++;

		// display in/out degree info
		printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n",i,in_deg,out_deg, in_deg + out_deg);
           }

	}
	return; // end of directed graph
}

// Undirected Graph
int undirGraph()
{
	// data
	int adj_mat[MAX][MAX];
	int num_vert;
	int degree, i, j;
	// ask how many vertices(nodes)
        // stupidity check 2 of 927193825
        printf("Number of vertices: ");
        scanf("%d",&num_vert);
        if(num_vert > MAX)
        {
          printf("Sorry. No more than 26 nodes.");
        }

	readGraph( adj_mat, num_vert );

	printf("\n Vertex \t Degree ");

	for ( i = 1; 1 <= num_vert; i++ )
	{

		degree = 0;
		for( j = 1; j <= num_vert; j++ )
		{
		   if( adj_mat[i][j] == 1 )
			degree++;
		}

		printf("\n\n %5d \t\t %d\n\n", i, degree);
	}
	return;
}

int readGraph( int adjacency_matrix[MAX][MAX], int count)
{
	int i, j, n;
	char reply;

	for( i = 1; i <= n; i++ )
	{
		for( j = 1; j <= n; j++ )
		{
			if( i == j)	// distance from a vertex to itself = 0
			{
			   adjacency_matrix[i][j] = 0;
			   continue;
			}

			printf("\n Vertices %d & %d are Adjacent? (Y/N): ", i , j);
			fflush( stdin );	// flush output buffer
			scanf("%c", &reply);
			if( reply == 'y' || reply == 'Y')
			{
			   adjacency_matrix[i][j] = 1;
			}
			else
			{
			   adjacency_matrix[i][j] = 0;
			}
		}

	}
	return;
}

