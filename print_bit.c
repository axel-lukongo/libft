#include<stdio.h>

int main()
{
	int i = 8;
	char c = 5;
	while(i--)
	{
		if(c & (1 << i))
			printf("1");
		else
			printf("0");
	}
}