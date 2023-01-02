#include <stdio.h>
void main() {
    int A[50],n,x,pos=0,i;
    printf("Enter the size of the list\n");
    scanf("%d",&n);
    printf("Enter %d no.s in ascending order\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter a no. to be searched\n");
    scanf("%d",&x);
    int beg=0,end=n-1,mid;
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if (x==A[mid])
        {
            pos=mid+1;
            break;
        }
        else if (x<A[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }       
    }  
    if (pos==0)
        {
            printf("%d does not exist in the list",x);
        }
    else
        {
            printf("%d is at position %d\n",x,pos);
        }  
}