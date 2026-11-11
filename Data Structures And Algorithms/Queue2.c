// Circular Queue
#include<stdio.h>
#define MAX 5

int queue[MAX];
int front =-1, rear =-1;

void enqueue()  {
    int value;
    if((rear+1)% MAX == front)  {
        printf("Queue is Full\n");
    }
    else {
        printf("Enter the Element : ");
        scanf("%d",&value);
        if(front ==-1){
            front =0;
            rear = 0;
        }
        else {
            rear = (rear+1) %MAX;
        }
        queue[rear] = value;
        printf("Element Inserted\n");
    }
}

void dequeue()  {
    if(front ==-1) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Deleted Element : %d\n",queue[front]);
        if(front == rear) {
            front =-1;
            rear =-1;
        }
        else {
            front = (front +1) % MAX;
        }
    }
}

void display() {
    int i;
    if(front ==-1)  {
        printf("Queue is Empty");
    }
    else  {
        printf("Queue Elements : ");
        i = front;
        while(1) {
            printf("%d ",queue[i]);
            
            if(i == rear){
                break;
            }

            i = (i+1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\n enter your Choice : ");
        scanf("%d",&choice);

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
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}