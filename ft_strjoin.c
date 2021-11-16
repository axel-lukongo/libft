#include <stdlib.h>
#include<stdio.h>
#include"libft.h"

char *ft_strjoin(char const *s1, char const*s2)
{
	char *str;
	int i;
	i = ft_strlen(s1) + ft_strlen(s2);
	if (s1 && s2)
	{
		if (!(str = malloc(sizeof(char) * i+1)))
			return(0);
		ft_strcpy(str,s1);
		ft_strcat(str,s2);
		return(str);
	}
	else
		return(0);
}