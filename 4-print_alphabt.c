#include<stdio.h>
int main()
{
	/*print all alphapbets except e and q*/

	for(char alpha='a'; alpha <='z';++alpha)

	if(alpha == 'e'||alpha=='q')
		;
	else
		putchar(alpha);

	putchar('\n');
	return 0;
}
