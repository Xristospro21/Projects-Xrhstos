
int main()
{
    int selection;
    float num1;
    float num2;
    float result;
    
    printf("\nWelcome to the Calculator Program\n");
    printf("\nChoose an Operation\n");
    printf("\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n");
    printf("\nEnter your selection: ");
    scanf("%d", &selection);
    
    switch(selection)
    {
        case 1:
            printf("\nEnter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("\nThe result is: %f\n", result);
            break;
        case 2:
            printf("\nEnter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("\nThe result is: %f\n", result);
            break;
        case 3:
            printf("\nEnter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("\nThe result is: %f\n", result);
            break;
        case 4:
            printf("\nEnter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 / num2;
            printf("\nThe result is: %f\n", result);
            break;
        default:
            printf("\nInvalid selection\n");
            break;
    }

    return 0;
}