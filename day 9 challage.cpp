#include<stdio.h>
int main()
{
   
    int totalCustomers, numItems, itemCode, quanty;
    float total, discount, finalTotal, grandTotal = 0;

    printf("Enter total number of customers: ");
    scanf("%d", &totalCustomers);

    for (int i = 1; i <= totalCustomers; i++)
     {
        printf("\n--- Customer %d ---\n", i);
        printf("Enter number of items: ");
        scanf("%d", &numItems);

        printf("\nCode  Item Name     Price (?)\n");
        printf("1     Sandwich      80\n");
        printf("2     Burger        120\n");
        printf("3     Pizza Slice   150\n");
        printf("4     Coffee        60\n");
        printf("5     Juice         50\n");

        total = 0;
        for (int j = 0; j < numItems; j++) 
        {
            printf("Enter item code: ");
            scanf("%d", &itemCode);
            printf("Enter quantity: ");
            scanf("%d", &quanty);

            switch (itemCode)
             {
                case 1:
                    printf("Sandwich x %d = %d\n", quanty, 80 * quanty);
                    total += 80 * quanty;
                    break;
                case 2:
                    printf("Burger x %d = %d\n", quanty, 120 * quanty);
                    total += 120 * quanty;
                    break;
                case 3:
                    printf("Pizza Slice x %d = %d\n", quanty, 150 * quanty);
                    total += 150 * quanty;
                    break;
                case 4:
                    printf("Coffee x %d = %d\n", quanty, 60 * quanty);
                    total += 60 * quanty;
                    break;
                case 5:
                    printf("Juice x %d = %d\n", quanty, 50 * quanty);
                    total += 50 * quanty;
                    break;
                default:
                    printf("Invalid item code.\n");
            }
        }

        discount = 0;
        if (total > 500)
        {
            discount = total * 0.10;
        }

        finalTotal = total - discount;
        grandTotal += finalTotal;

        printf("Total: %f\n", total);
        if (discount > 0)
       {
            printf("Discount after 10 percentage : %f\n", discount);
       }
        printf("Final Bill: f\n", finalTotal);
    }

    printf("Canteen Summary \n");
    printf("Total Customers Served: %d\n", totalCustomers);
    printf("Total Revenue: ?%.0f\n", grandTotal);
    

    return 0;
}
