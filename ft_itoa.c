#include"libft.h"

int size_nbr(int n)
{
	unsigned int size;
	int nbr;
	size = 0;
	if (n < 0)
		size = 1;
	while (n != 0)
	{
		size++;
		n = n/10;
	}
	return(size);
}

char *  ft_itoa(int n)
{
	int sign;
	char *str;
	int size;
	sign = n;
	size = size_nbr(n);
	if (!(str = malloc(sizeof(char) * (size+1))))
		return(0);
	str[size] = '\0';
	while (size)
	{
		if (n >= 0)
			str[--size] = n%10 + 48;
		else
			str[--size] = -1*(n%10) + 48;
		n /= 10;
	}
	if (sign < 0)
		str[size] = '-';	
	return(str);
}
/*
static	unsigned int	length_n(int n)
{
	unsigned int length;

	length = (n <= 0) ? 1 : 0;
	while (n > 0 || n < 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char					*ft_itoa(int n)
{
	char				*p;
	char				sign;
	unsigned int		length;

	sign = (n < 0) ? '-' : '\0';
	length = length_n(n);
	if (!(p = malloc(sizeof(char) * (length + 1))))
		return (0);
	p[length] = '\0';
	while (length)
	{
		if (n < 0)
			p[--length] = -(n % 10) + '0';
		else
			p[--length] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign)
		p[length] = sign;
	return (p);
}*/