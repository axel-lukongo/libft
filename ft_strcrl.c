#include"libft.h"

void ft_strcrl(char *s)
{
	int size;
	size = ft_strlen(s);
	ft_bzero(s,size);
}