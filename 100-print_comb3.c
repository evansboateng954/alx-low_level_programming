#include<stdio.h>
int main()
{
	for(int i =0; i< 10; ++i)
	{
		for(int j=0; j < 10; ++j)
		{
			int big = (i>j)? i:j;
			int small =(i<j)?i:j;
			
			if(big== small)
				;
			else
			{
			putchar(small +'0');
			putchar(big +'0');
			putchar(',');
			}
		}
	}
	return 0;
}
