#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0,j=0;
int m1[2][2]={{1,2},{3,5}};
int m2[2][2]={{5,6},{7,8}};
int sum [2][2];

 for (i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
        {
        sum[i][j]= m1[i][j]+m2[i][j];
        }
    }

for(i=0;i<2;i++)
{
 for(j=0;j<i;j++)
 {
    printf("%d",sum[i][j]);
 }
}



}
