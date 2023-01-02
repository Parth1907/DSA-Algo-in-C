#include <stdio.h>

void BubSort(int A[],int n)
{   
    for(int i=0;i<n-1;i++) {
        for (int j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
}

void main() {
    int A[50],n;
    printf("Enter no. of elements: \n");
    scanf("%d",&n);

    printf("Enter %d numbers: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    BubSort(A,n);
    printf("The sorted array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}


