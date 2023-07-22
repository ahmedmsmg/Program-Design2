/*** Name: Ahmed Ghoneim.. USF ID:U91248135
 * This app is created to prevent customers from panic buying in a case of emergency
 * ***/



#include <stdio.h>




int main() {

	int units, price, amount, value;


	printf("Enter item price: ");
	scanf("%d", &price);

	// validating price
	if(price <= 0) {
		printf("Invalid number of price: %d \n", price);
		printf("Price must be greater than 0");
		return 0;
	}


	printf("Enter number of units: ");
	scanf("%d", &units);

	// validating units
	 if(units <= 0) {
                printf("Invalid number of units: %d \n", units);
		printf("Units must be greater than 0");
                return 0;
        }

       
	printf("Enter money amount: ");
        scanf("%d", &amount);

	// validating amount
	 if(amount < 0) {
                printf("Invalid number of amount: %d \n " , amount);
		printf("amount must be greater or equal 0");
                return 0;
        }

	// final stands for the total price for the amount of units
	int final = 0;
	
	// i is for specifiying how many times the loop will run
        int i = 0;
        while(i < units) {
                value = i*price;
                final = final + value;
                i++;
        }
	final = final + (units*price);

	// if else statement to check whether the customer has enough money or no
	if(final == amount || final < amount) {
		printf("Has enough money");
	}
	else {
		final = final - amount;
		printf(" Needs %d dollar(s) to complete the purchase!", final);
	}
	
	



	
	return 0;
}
