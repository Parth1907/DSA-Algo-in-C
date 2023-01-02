#include <stdio.h>
void main() {
    int A[50],n,x,pos=0;
    printf("Enter the size of the list\n");
    scanf("%d",&n);
    printf("Enter %d no.s\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter a no. to search in list\n");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (x==A[i])
        {
            pos=i+1;
            break;
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