#include<stdio.h>
void my_function(char name[], long long int Roll_No)  {
    printf("Hello, %s! Your roll number is %lld.\n", name, Roll_No);
}
int main() {
    my_function("Shaumik", 120305254040);
    my_function("Debojit", 120305254041);
    return 0;
}