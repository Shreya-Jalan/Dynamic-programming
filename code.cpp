#include<iostream> using namespace std;
double dynamicPaths(int x1, int y1, int x2, int y2) {
int i,j;
double array[x2 - x1 + 1][y2 - y1 + 1];
array[0][0] = 0; for (i = 1; i<x2 - x1 +
1; i++)
{
array[i][0] = 1; 
}
for (i = 1; i<y2 - y1 + 1; i++)
{
array[0][i] = 1;
} for (i = 1; i<x2 - x1 + 1;
i++)
{
for (j = 1; j<y2 - y1 + 1; j++)
{
array[i][j] = array[i][j - 1] + array[i - 1][j]; }
}
return array[x2 - x1 ][y2 - y1 ];
}
int main()
{
cout<<dynamicPaths(2,1,4,2); }
