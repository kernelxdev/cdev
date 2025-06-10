#include <stdio.h>
#include <string.h>

double addition();

int main() {
    int option;

    printf("Select option:\n1. Addition\n2. Substraction\n");
    scanf("%d", &option);

    if(option < 1 || option > 2)
        printf("Select an option from 1 to 2\n");

    switch(option)
    {
        case 1:
            double result = addition();
            printf("%f\n", result);
            break;
    }

    return 0;
}

double addition() {
    double a;
    double b;

    printf("Enter number a: \n");
    scanf("%lf", &a);
    
    printf("Enter number b: \n");
    scanf("%lf", &b);

    return a + b;
}