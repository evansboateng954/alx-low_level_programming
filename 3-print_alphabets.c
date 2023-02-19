#include<stdio.h> 
int main()

{
	for(char alpha ='a'; alpha <='z';++alpha)

		putchar(alpha);
		
	for(char capital_alpha ='A';capital_alpha <='Z';++capital_alpha)/*get all uppercase alphabets*/
	{	putchar(capital_alpha);}
		putchar('\n');
	
	return 0;
}
		
