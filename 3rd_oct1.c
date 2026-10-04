#include<stdio.h>
int my_function(int x , int y){
    return x+y;
}
int main() {
    int n1,n2;
    printf("the value of n1 is : ");
    scanf("%d",&n1);
    printf("the value of n2 is : ");
    scanf("%d",&n2);
    
    int result;
    result = my_function(n1,n2);
    
    printf("The sum of Number is : %d",result);
    return 0;
}