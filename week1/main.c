#include <stdio.h>
int main(){
    char municipality[80];
    char mayor[80];
    int population;

    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter the name of the municipality: "); 
    scanf(" %49[^\n]", municipality);

    printf("Enter the name of the mayor: ");
    scanf(" %49[^\n]", mayor); 

    printf("Enter the population: ");
    scanf("%d", &population);

    printf("municipality: %s\n", municipality);
    printf("mayor: %s\n", mayor);
    printf("population: %d\n", population);

    return 0;
}

        



