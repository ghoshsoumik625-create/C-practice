#include<stdio.h>
void my_function(int my_number[] , int size) {
    for(int i =0; i<size; i++) {
        printf("%d  ",my_number[i]);
    }
}
int main() {
    int size;
    printf("enter the size of the array : ");
    scanf("%d", &size);     
    
    int my_number[size];
    printf("enter %d number:\n", size);
    for( int i=0;i<size;i++) {
        scanf("%d", &my_number[i]);
    }
    printf("The array elements are :\n");
    my_function(my_number,size);
    return 0;

    
}