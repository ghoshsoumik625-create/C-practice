#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

void enqueue() {
    int value;

    if(rear==MAX-1) {
        printf("Queue is Full\n");
    }
    else  {
        printf("Enter the value : ");
        scanf("%d", &value);

        if(front==-1) {
            front = 0;
        } 
        rear++;
        queue[rear] = value;
        printf("Element Inserted\n");
    }
}

void dequeue()  {
    if(front ==-1 || front > rear)  {
        printf("Queue is Empty\n");
    }
    else {
        printf("Deleted element : %d\n", queue[front]);
        front++;
    }
}

void display()  {
    int i;
    if(front == -1 || front> rear) {
        printf("Queue is Empty\n");
    }
    else {
        for( i=front ; i<=rear ; i++ )   {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice;

    while(1)  {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}