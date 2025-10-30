#include <stdio.h>

int main()
{
    float balance = 10000.0;
    int choice;
    float amount;

    while (1) 
    {
        printf("\nMini Banking System Menu:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 25000) {
                    balance += amount * 1.01;
                } else {
                    balance += amount;
                }
                balance -= 25.0;
                printf("Deposit successful. New balance: ?%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Warning: Insufficient balance.\n");
                } else {
                    balance -= amount;
                    balance -= 25.0;
                    printf("Withdrawal successful. New balance: ?%.2f\n", balance);
                }
                break;
            case 3:
                printf("Current balance: ?%.2f\n", balance);
                break;
            case 4:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
