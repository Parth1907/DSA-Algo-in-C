#include<stdio.h>
int Q[5], front, rear, x;
void InsCQ() {
    if (front==(rear+1)%5) {
        printf("Overflow\n");
    }
    if (rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=(rear+1)%5;
    }   
    Q[rear]=x;
}

void DelCQ() {
    if (front==-1) {
        printf("Queque is empty\n");
    }
    
    x=Q[front];
    if (front==rear)
    {
        front=-1;
        rear=-1;
    }

    else
    {
        front=(front+1)%5;
    }
        
}

void PrintQueque() {
    for (int i = front; i <= rear; i++)
    {
        printf("%d ",Q[i]);
    }
    printf("\n");
}

void main() {
    int operation;
    // printf("Enter the no. of elements in array\n");
    // scanf("%d",&n);
    // printf("Enter %d no.s\n",n);
    // for (int i=0;i<n;i++) {
    //     scanf("%d",&Q[i]);
    // }

    front=-1;
    rear=-1;

    while (operation!=3)
    {   
       printf("Enter an operation to be performed (1=insertion, 2=deletion, 3=quit): ");
       scanf("%d", &operation); 
       switch (operation)
        {
        case 1:
            printf("PLease enter how many no. to insert\n");
            int n;
            scanf("%d",&n);
            printf("PLease enter the no. for insertion.\n");
            for (int i = 0; i < n; i++)
            {
                
                scanf("%d",&x);
                InsCQ(); 
            }          
            break;
        case 2:
            printf("Please enter how many no.s to delete\n");
            scanf("%d",&n);
            for (int i = 0; i < n; i++)
            {
                DelCQ();
            }            
            break;
        default:
            break;
        } 
    }
    
    PrintQueque();    
}