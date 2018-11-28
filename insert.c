#include<stdio.h>
insertion(int *a,int n)
    {
        for(i=0;i<n;i++)
        {
            int key=a[i];
            int j=i-1;
            while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }
        }
            a[j+1]=key;
    }

int main()
{
    int a[50],t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        insertion(a,n);
        t--;
    }
return 0;
}

