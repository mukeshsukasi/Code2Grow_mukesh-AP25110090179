#include <stdio.h>
int main()
{
	float you,friend1,friend2,tax,tip,total_bill,meal_cost,share;
	
	
	printf("enter meal_cost\n");
	scanf("%f",&meal_cost);
 	
	printf("Tax %:\n");
	scanf("%f",&tax);
	
    printf("Tip %:\n");
	scanf("%f",&tip);
	
	
	tax=(tax/100)*meal_cost;       //bracket() has higher precedence
	tip=(tip/100)*meal_cost;
	total_bill=meal_cost+tax+tip;
	share=total_bill/3;
	you=share/2+share;
	friend1=share/2+share;
	friend2=0;
	
	printf("each person should pay share as shows \n");
	printf("you=%f\n",you);
	printf("friend1=%f\n",friend1);
	printf("friend2=%f\n",friend2);
	
	
	return 0;
	
	
}
