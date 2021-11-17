#include"libft.h"

int size_cpy(char *s1, char *set)
{
	int size;
	size = ft_strlen(s1);
	while (*s1 && s1[--size] == *set)
		;
	return(size);	
}

char *ft_strtrim(char *s1, char *set)
{
	char *cpy;
	int i;
	unsigned int size;
	i = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 == *set)
		s1++;
	size = size_cpy(s1,set);
	if (!(cpy = malloc(sizeof(char) * size+2)))
		return(0);
	while (i <= size)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return(cpy);
}