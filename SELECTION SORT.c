//SELECTION SORT
#include<stdio.h>
int main()
{
    int i,j,temp,a[10],n,small,s,flag=0;
    printf("\nEnter the no of element=");
    scanf("%d",&n);
    printf("\nEnter elements\n");

    //Used to enter all elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //small is used to find minimum element from array
    for(i=0;i<n;i++)
    {
        small=i;
        //scan to find minimum element
        for(j=i+1;j<n;j++)
        {
            if(a[small]>a[j])
            {
                small=j;
            }
        }

        //put smallest number on the "i" position
        if(small!=i)
        {
            temp=a[i];
            a[i]=a[small];
            a[small]=temp;
        }

    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
