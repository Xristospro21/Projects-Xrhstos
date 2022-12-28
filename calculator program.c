int main()
{
    int choice;
    int num1, num2;

start:

    printf("\n***Calculator***\n");
    printf("\nChoose an option:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5) {
        printf("\nPlease enter a valid choice!\n");
        goto start;
    }

    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            printf("\nThe sum of %d and %d is %d.", num1, num2, num1 + num2);
            break;

        case 2:
            printf("\nThe difference of %d and %d is %d.", num1, num2, num1 - num2);
            break;

        case 3:
            printf("\nThe product of %d and %d is %d.", num1, num2, num1 * num2);
            break;

        case 4:
            if (num2 == 0) {
                printf("\nDivision by 0 is not allowed!");
            } else {
                printf("\nThe quotient of %d and %d is %d.", num1, num2, num1 / num2);
            }
            break;

        case 5:
            printf("\nGoodbye!");
            break;
    }

    printf("\n\nThe result is ");
    (num1 + num2) % 2 == 0 ? printf("even.") : printf("odd.");

    return 0;
}