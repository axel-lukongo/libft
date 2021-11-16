#include"libft.h"

//a verifier

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;

	tmp = 0;
	while (*str)
	{
		if (*str == c)
			tmp = (char*)str;
		str++;
	}
	if (*str == c)
		tmp = (char*)str;
	return (tmp);
}