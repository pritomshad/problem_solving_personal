#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdint.h>
#include<stdbool.h>
#define pi acos(-1.0)

/**********************functions***********************/
int a[101][100];
int track[101][101];
/*********************functions***********************/
int main()
{
    int t,n,m;
    scanf("%d%d%d",&t,&n,&m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d",&a[i][j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            int u=-1,d=-1,l=-1,r=-1;
            u = i-1>=0?i-1:-1;
            d = i+1<=n-1?i+1:-1;
            l = j-1>=0?j-1:-1;
            r = j+1<=m-1?j+1:-1;

            
        }
    

    return 0;
}