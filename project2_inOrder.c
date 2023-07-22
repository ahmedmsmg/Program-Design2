/*** Name: Ahmed Ghoneim..
 * This program uses the ASCII values in order to verify if the input
 * inout characters are in order or not.
 * ***/


#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{

	int value = 0;

	char ch1, ch2;

	//scanning input and changing it into lower case
	ch1=getchar();
	ch1=tolower(ch1);

	//while loop to accept all characters except "Enter Key"
	while((ch2=getchar())!='\n'){
		ch2=tolower(ch2);

		//if statements to change the value from 0 to 1 incase 
		//that the condition is met
		if(ch1>ch2) {
			value=1;
		}
		if(isalpha(ch1) == 0 && isalpha(ch2) == 0) {
			value =1;
		}
	
	}
	//using the value of "value" in order to check if the input is
	//in order or not
	if(value == 0) {
		printf("In order");
	}
	else {
		printf("Not in order");
	}
	return 0;

}
