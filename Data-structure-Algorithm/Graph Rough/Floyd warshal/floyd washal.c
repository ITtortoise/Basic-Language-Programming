#include<stdio.h>
#define INF 99999
int V;
void floydWarshell (int graph[][V])
{

    int dist[V][V], i, j, k;


    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];


    for (k = 0; k < V; k++)
        for (i = 0; i < V; i++)
            for (j = 0; j < V; j++)
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    printSolution(dist);
}


void printSolution(int dist[][V])
{
    int i,j;
    printf ("Following matrix shows the shortest distances"
            " between every pair of vertices \n");
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf ("%7d", dist[i][j]);
        }
        printf("\n");
    }
}


int main()
{

    int node;

    printf("Enter Nodes: ");

    scanf("%d",&node);

    V=node;

    int graph[V][V];
    int i,j;
    printf("Enter Matrix (for infinity enter 99999)\n");

    for(i=0; i<V; i++)
        for(j=0; j<V; j++)
            scanf("%d",&graph[i][j]);

    floydWarshell(graph);
    return 0;
}

