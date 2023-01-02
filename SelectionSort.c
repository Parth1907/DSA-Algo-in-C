#include <stdio.h>
void selectionSort(int A[],int n) {
        for (int i = 0; i <=n-2; i++)
        {
            int min=A[i];
            int pos=i;
            for (int j = i+1; j <= n-1; j++)
            {
                if (A[j]<min)
                {
                    min=A[j];
                    pos=j;
                }
                
            }
            A[pos]=A[i];
            A[i]=min;
        }
        
}

void main ()
    {
        int arr[10],i,n;
        printf("Enter the size of array\n");
        scanf("%d",&n);
 
        printf("Enter %d numbers \n",n);
        for (i = 0; i < n; ++i) {
	        scanf("%d", &arr[i]);
        }

        selectionSort(arr,n);

        printf("The array arranged in ascending order is given below \n");
        for(i =0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }