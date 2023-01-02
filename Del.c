#include <stdio.h>
void main() {
    int A[50],n,i,pos;
    printf("Enter the size of the list\n");
    scanf("%d",&n);
    printf("Enter %d no.s\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter the position to delete in list\n");
    scanf("%d",&pos);
    if (n==0)
    {
        printf("Array is empty");
    }
    
    for (i =pos; i <= n-1; i++)
    {
        A[i-1]=A[i];
    }
    n--;
    printf("The updated list is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}