#include <stdio.h>

int add(int arr[] ,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    return sum;

}

#include <stdio.h>

int replace(int arr[] ,int size)
{
    int largest=0;
    for(int i=0;i<size ;i++)
    {
        if (arr[i]>largest)
        {
            largest =arr[i];
        }
    }
    for(int i=0;i<size ;i++)
    {
        if(arr[i]%2!=0)
        {
            arr[i]=largest;
        }
    }
    return arr[size];
}



int main(void)
{
    int n, a[50];
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int result= add(a,n);
    int result2 =replace(a,n);
    printf("sum of even is %d",result);
    printf("new array is ");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }


}