#include <stdio.h>
#include <string.h>

int calc_hours(int h,int a[50])
{
    int sum=0;
    for(int i =0;i<h;i++)
    {
        sum+=a[i];
    }
    return sum;
}
float calc_average(int h, int a[50])
{
    int sum=0;
    for(int i=0;i<h;i++)
    {
        sum+=a[i];
    }
    float avg= (float)sum/h;
    return avg;
}

int main(void)
{
    int n;
    int arr[50];
    printf("Number of weeks taking cs50:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter week %d hours:",i+1);
        scanf("%d",&arr[i]);
    }
    char u[5];
    printf("enter T for sum or A for avg:");
    scanf("%s",&u);
    if(strcmp(u,"T")==0)
    {
        printf("%d\n", calc_hours(n,arr));
    }
    else if(strcmp(u,"A")==0)
    {
        printf("%f\n", calc_average(n,arr));
    }
    
}