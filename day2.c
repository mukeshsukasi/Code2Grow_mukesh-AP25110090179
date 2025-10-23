#include <stdio.h>
	printf("Tip %:\n");
	scanf("%d",&tip);
	
	
	tax=(tax/100)*meal_cost;
	tip=(tip/100)*meal_cost;
	total_bill=meal_cost+tax+tip;
	share=total_bill/3;
	you=share/2+share;
	friend1=share/2+share;
	friend2=0;
	
	printf("each person should pay share as shows \n");
	printf("you=%d\n",you);
	printf("friend1=%d\n",friend1);include <stdio.h>
int main()
{
	int you,friend1,friend2,tax,tip,total_bill,meal_cost,share;
	
	
	printf("enter meal_cost\n");
	scanf("%d",&meal_cost);
 	
	printf("Tax %:\n");
	scanf("%d",&tax);
	
	printf("friend2=%d\n",friend2);
	
	
	return 0;
	
	
}
