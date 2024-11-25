#include <stdio.h>

int trace(int x[][10],int m, int n)
{
    int trace=0;
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==j)
            {
                trace+=x[i][j];
            }
        }
    }
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(x[i][j]==0)
            {
                x[i][j]=trace;
            }
        }
    }
    return arr[size];
}
int main(void)
{
    int n, a[50],result[50];
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            

        }
    }
    

}