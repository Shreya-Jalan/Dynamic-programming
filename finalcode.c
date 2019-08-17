#include<stdio.h>
#include<limits.h>
#define R 100
#define C 100
int min(int x, int y, int z); int
minCost(int cost[R][C], int m, int n)
{
int i, j;
int tc[R][C]; int
temp[R][C];
for(i=0;i<R;++i
)
for(j=0;j<C;++j) temp[i][j]=cost[i][j];
tc[0][0] = cost[0][0]; for (i = 1; i
<= m; i++) tc[i][0] = tc[i-1][0] +
cost[i][0];
for (j = 1; j <= n; j++) tc[0][j] =
tc[0][j-1] + cost[0][j];
for (i = 1; i <= m; i++) 
for (j = 1; j <= n; j++) tc[i][j]
= min(tc[i-1][j-1],
tc[i-1][j], tc[i][j-1]) +
cost[i][j];
return tc[m][n];
}
int min(int x, int y, int z)
{ if (x < y)
return (x < z)? x : z;
else
return (y < z)? y : z;
}
int main()
{
int i,j;
int cost[R][C]; for(i=0;i<R;++i)
for(j=0;j<C;++j)
cost[i][j]=i+j;
printf(" %d ", minCost(cost, 12, 12)); return
0; 
} 
