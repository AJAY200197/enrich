#include<stdio.h>
void main()
{
    int n,a,m,i,j,b[10][10],k;
    scanf("%d",&n);
    a=n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
	        b[i][j]=0;
        }
    }
    i=0;
    j=n/2;
    for(k=1;k<=a;k++)
    {
        b[i][j]=k;
        i--;
        j++;
        if(i==-1&&j==n)
        {
            i=1;
            j=n-1;
        }
        else
        {
            if(i==-1)
            {
                i=n-1;
            }
            if(j==n)
            {
                j=0;
            }
        }
        if(b[i][j]!=0)
        {
            if(i<n-1)
            {
	            i=i+2;
            }
            else
            {
	            i=1;
            }
            j=j-1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}