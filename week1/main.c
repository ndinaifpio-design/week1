#include <stdio.h>
int main(){
    char municipality[80];
    char mayor[80];
    int population;

    printf("Welcome to Windhoek Municipality: \n");

    printf("Enter the name of the municipality: \n");
    scanf("%49s", &municipality);

    printf("Enter the name of the mayor: \n");
    scanf("%49s", &mayor); 


    printf("Enter the population: \n");
    scanf("%d", &population);

    printf("municipality: %s\n", municipality);
    printf("mayor: %s\n", mayor);
    printf("population: %d\n", population);

    return 0;
}
        



