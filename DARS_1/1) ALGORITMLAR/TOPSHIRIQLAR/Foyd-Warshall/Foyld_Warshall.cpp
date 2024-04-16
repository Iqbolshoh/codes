#include <iostream>

using namespace std;

#define n 4
#define INF 999

void Print_Graph(int graph[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == INF)
                printf("%4s", "INF");
            else
                printf("%4d", graph[i][j]);
        }
        cout << endl;
    }
}

void Floyd_Warshall(int graph[][n])
{
    int i, j, k;

    for (k = 0; k < n; k++)
    {
       cout <<endl <<"     " << k+1 << " - qadam " << endl;
         Print_Graph(graph);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                graph[j][k] = min(graph[j][k], graph[j][i] + graph[i][k]);
            }
        }
    }
    // cout <<endl <<"     " << k+1 << " - qadam " << endl;
    Print_Graph(graph);
}

int main()
{
    int graph[n][n] = {
        {0, 3, INF, 5},
        {2, 0, INF, 4},
        {INF, 1, 0, INF},
        {INF, INF, 2, 0}
    };
    Floyd_Warshall(graph);
}
