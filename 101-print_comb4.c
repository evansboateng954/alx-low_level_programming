#include<stdio.h>
int main()

{	int num []={1,2,3,4,5,6,7,8,9,0};
for(int i=0;i<9;++i)
{
	for(int k=1;k<8;++k)
	{

		for(int m=2;m<7;++m)
		{
		  int big=(i>k)? i:k;/*get the largest of all*/
		  big=(big>m)? big:m;

		  int small =(i<k)? i:k;/*get the least of the three*/
		  small=(small<m)? small:m;
		int mid=0;/*get the middle value*/
		if(i==big)
			 mid=(k>m)?k:m;
		else if(k==big)
			 mid=(i>m)?i:m;
		else if(m==big)
			mid=(i>k)?i:k;


		  putchar(small +'0');
		  putchar(mid +'0');
		  putchar(big +'0');
    		  putchar(',');
		  putchar(' ');}
	}
}

	return 0;
}

