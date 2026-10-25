#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Car {
    char brand[50];
    int year;
    char colour[50];
    float price;
};

int main() {
    int n;
    printf("Enter the Number of  : ");
    scanf("%d",&n);
    getchar();

    struct Car *ptr = malloc( n * sizeof(struct Car ));

    if(ptr == NULL)  {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for( int i=0;i<n;i++){
        printf("\nEnter Car Name : ");
        fgets(ptr[i].brand, sizeof(ptr[i].brand), stdin);
        ptr[i].brand[strcspn(ptr[i].brand, "\n")] = '\0';
        
        printf("Enter the Car Colour : ");
        fgets(ptr[i].colour, sizeof(ptr[i].colour), stdin);
        ptr[i].colour[strcspn(ptr[i].colour, "\n")] = '\0';

        printf("Enter Car Manufacturing year : ");
        scanf("%d",&ptr[i].year);
        getchar();

        printf("Enter The Car price : ");
        scanf("%f", &ptr[i].price);
        getchar();
    }

    printf("\n=====CAR DETAILS=====\n");

    for(int i = 0; i < n ; i++)  {
        printf("\nCar Name : %s\n", ptr[i].brand);
        printf("Colour :%s\n", ptr[i].colour);
        printf("Year :%d\n", ptr[i].year);
        printf("Price :%.2f\n", ptr[i].price);
    }
    free(ptr);

    return 0;

}