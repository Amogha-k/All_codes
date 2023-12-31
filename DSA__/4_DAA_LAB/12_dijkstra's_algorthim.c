#include <stdio.h>
#include <time.h>

#define MAX 10

int choose(int dist[], int s[], int n)
{
  int j = 1, min = 100, w;
  for (w = 1; w <= n; w++)
    if ((dist[w] < min) && (s[w] == 0))
    {
      min = dist[w];
      j = w;
    }
  return j;
}

void spath(int v, int cost[][MAX], int dist[], int n)
{
  int w, u, i, num, s[MAX];
  for (i = 1; i <= n; i++)
  {
    s[i] = 0;
    dist[i] = cost[v][i];
  }
  s[v] = 0;
  dist[i] = 999;
  for (num = 2; num <= n; num++)
  {
    u = choose(dist, s, n);
    s[u] = 1;
    for (w = 1; w <= n; w++)
      if ((dist[u] + cost[u][w]) < dist[w] && !s[w])
        dist[w] = dist[u] + cost[u][w];
  }
}

void main()
{
  int i, j, cost[MAX][MAX], dist[MAX], n, v;
  double clk;
  clock_t starttime, endtime;

  printf("\nEnter number of vertices:");
  scanf("%d", &n);
  printf("\nEnter the cost of adjacency matrix\n");
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      scanf("%d", &cost[i][j]);
  printf("\nEnter the source vertex");
  scanf("%d", &v);

  starttime = clock();
  spath(v, cost, dist, n);
  endtime = clock();
  
  printf("\nShortest  distance\n");
  for (i = 1; i <= n; i++)
    printf("\n%d to %d = %d", v, i, dist[i]);
  clk = (double)(endtime - starttime) / CLOCKS_PER_SEC;
  printf("The time taken is %f\n", clk);
}
/*Expected output:
Enter the number of vertices : 5
Enter the cost of adjacency matrix
0	  4 	2	  999	8
999	0	  999	 4	5
999	999	 0	 1	999
999	999	999	 0	3
999	999	999	999	0

Enter the source vertex : 1
Shortest  distance
1 to 1 = 0
1 to 2 = 4
1 to 3 = 2
1 to 4 = 3
1 to 5 = 6
The time taken is 0.456643*/