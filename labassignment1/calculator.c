//Nan Chen
//chen.nan2@northeastern.edu
#include<stdio.h>
int main()
{
    int a,b,c, choice;
    
    printf("Enter your choice\n");
    printf(" 1.addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
            printf("Enter a and b values");
            scanf("%d %d", &a, &b);
            printf("Addition\n");
            c = a+b;
            printf("Sum=%d\n", c);
            break;
        case 2:
            printf("Enter a and b values");
            scanf("%d %d", &a, &b);
            printf("Subtraction\n");
            c = a - b;
            printf("Diff=%d\n", c);
            break;
        case 3:
            printf("Enter a and b values");
            scanf("%d %d", &a, &b);
            printf("Multiplication\n");
            c = a * b;
            printf("Product=%d\n", c);
            break;
        case 4:
            printf("Enter a and b values");
            scanf("%d %d", &a, &b);
            printf("Division\n");
            if (b == 0)
            {
                printf("divide by zero error\n");
                break;
            }else
            {
                double c = (double)a / b;
                printf("Quotient=%f\n", c);
            }
            break;
        default:
            printf("Invalid option\n");
            break;
    }
    return 0;
}
