#include<stdio.h>
int main()
{  for(int x =0; x < 10;++x)
	
    {
     for(int y=0;y<10;++y)
     {    
	for(int i =0; i< 10; ++i)
	{
			
		for(int j=0; j < 10; ++j)
		{
			int big = (i>j)? i:j;
			int small =(i<j)?i:j;
	                int big2 = (x>y)? x:y;
                        int small2 =(x<y)?x:y;
	
			putchar(small2 + '0');
			putchar(big2 +'0');
			putchar(' ');
			putchar(small +'0');
			putchar(big +'0');
			putchar(',');
	       }
	}
	}
    }
	return 0;
}
