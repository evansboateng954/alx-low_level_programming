#include<stdio.h>
int main()
{
	/*print hexadecimal values*/
	for(int i=0;i<16;++i)
		{
			if(i>=10)
			{
		/*	  for(char k='a';k<'g';++k)*/
				char k[] ={'a','b','c','d','e','f'};
        			for(int i =0;i<6;++i)
					putchar(k[i]);
			        
			
			}


			else
				 putchar(i+'0');
        	}
	putchar('\n');
}
