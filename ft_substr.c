#include"libft.h"

char *ft_substr(char *s, unsigned int start,size_t len)
{
	char *str;
	if (!(s))
	{
		return(0);
	}
	if (start > (unsigned int)ft_strlen(s))
	{
		return(0);
	}
	if (!(str = malloc(sizeof(char)*len+1)))
	{
		return(0);
	}
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return(str);
}