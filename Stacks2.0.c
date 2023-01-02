#include <stdio.h>
int S[50], top;
void Push(int size,int x) {
    if (top==size-1) {
        printf("Stack is Full");
        return;
    }
    top+=1;
    S[top]=x;
}

void Pop() {
    if (top==-1) {
        printf("Stack is empty");
        return;
    }
    int x=S[top];
    top--;
}
void PrintStack() {
    for (int i = top; i >= 0; i--)
    {
        printf("%d ",S[i]);
    }
    printf("\n");
}

void main() {
    int n, x, operation;
    printf("Enter the no. of elements in array\n");
    scanf("%d",&n);
    printf("Enter %d no.s\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&S[i]);
    }
    
    top=n-1;
    printf("Enter an operation to be performed (1=insertion, 2=deletion): ");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        printf("PLease enter the no. for insertion.\n");
        scanf("%d",&x);
        Push(50, x);
        PrintStack();
        break;
    case 2:    
        Pop();
        PrintStack();
        break;
    default:
        break;
    }
}