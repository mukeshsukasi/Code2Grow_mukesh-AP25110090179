int main() 
{
    int choice,transaction_count=0,max_transaction=5;
    float balance = 10000.0,final_balance;
    float amount;

    printf("Welcome to mini bank transaction\n");
    
    do {//USING DO LOOP TO CONTINUE UNTIL USER EXITS
          
        printf("1. CHECK BALANCE \n");
        printf("2. DEPOSIT\n");
        printf("3.WITHDRAW\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 2) 
        {
            // Deposit
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            printf("amount deposited successfully!\n");
            final_balance=amount+balance; 
            printf("final balance after deposited: %f\n", final_balance);
            

        }
         else if (choice == 3)
        {
            // Withdraw
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            balance=final_balance- amount;
                final_balance=balance; 
                printf("Withdrawal successful!\n");
                printf(" remaining balance is: %f\n", final_balance);
            

        }
         else if (choice == 1) 
         {
            balance=final_balance;
            printf("Current Balance: %f\n", balance);//check balance

        } 
        else if (choice == 4)
         {
            // Exit
            printf("THANK YOU !\n");

        }
         else 
        {
            printf("Invalid choice! Please try again.\n");
        }
        if (choice>1 && choice<4)
        {
            transaction_count++;
        }
        
        if (transaction_count==max_transaction && choice!=4)
        {
            printf("max transaction session ended automatically");
            
        }   
    } 
    while (choice!=4);
    printf("transaction summery\n");
    printf("total transaction%d\n",transaction_count);
    printf("final balance%f\n",final_balance);
    return 0;
}
