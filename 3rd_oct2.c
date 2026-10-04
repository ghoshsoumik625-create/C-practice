//Write a C program to create two functions
#include<stdio.h>
void my_function();
void myOther_function();

int main() {
    my_function();
    return 0;
}
void my_function() {
    printf("This is my function\n");
    myOther_function();
}
void myOther_function() {
    printf("This is my other function\n");
}