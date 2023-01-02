#include <stdio.h>
void main() {
    int A[50],n,x,i,pos;
    printf("Enter the size of the list\n");
    scanf("%d",&n);
    printf("Enter %d no.s\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter a no. to insert in list\n");
    scanf("%d",&x);
    printf("Enter the position to be inserted\n");
    scanf("%d",&pos);
    for (i = n-1; i >= pos-1; i--)
    {
        A[i+1]=A[i];
    }
    A[pos-1]=x;
    n++;
    printf("The updated list is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}