/*
    Program: Function Pointer Calculator

    Description:
    This program performs basic arithmetic operations using
    function pointers. The user selects an operation, and
    the corresponding function is called through a function pointer.

    Concepts Used:
    - Functions
    - Function pointers
    - switch statement
    - Arithmetic operations
*/

#include<stdio.h>
void add(int a,int b) {
    printf("Result : %d\n",a+b);
}
void subtract(int a,int b) {
    printf("Result : %d\n",a-b);
} 
void multiply(int a, int b) {
    printf("Result : %d\n",a*b);
}
void divide(int a, int b) {
    printf("Result : %d\n",a/b);
}

int main() {
    int x, y , Choice;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter Second number : ");
    scanf("%d",&y);

    void(*operation[4])(int,int) = {add , subtract, multiply , divide};
    
    printf("\nChoose an operation to perform : \n");
    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    
    printf("Enter your choice : ");
    scanf("%d", &Choice);

    if(Choice >= 1 && Choice <= 4) {
        operation[Choice - 1](x,y);
    } 
    else{
        printf("Invalid Choice!\n");
    }
    return 0;
}