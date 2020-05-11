#include<stdio.h>
int main()
{    
    printf("Enter numbers between 1 to 5 to decide what to order\n ");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Food Item- Pizza\nPrice-Rs 239");
		         break;
	    case 2: printf("Food Item- Burger\nPrice-Rs 129");
		         break;
		case 3: printf("Food Item- Pasta\nPrice-Rs 179");
		         break;
		case 4: printf("Food Item- French Fries\nPrice-Rs 99");
		         break;
		case 5: printf("Food Item- Sandwich\nPrice-Rs 149");
		         break;
		default: printf("Invalid option");
		         
	}
	return 0;
}
