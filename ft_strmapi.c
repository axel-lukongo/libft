#include"libft.h"
char *ft_strmapi(char *s,char (*f)(unsigned int,char))
{
	char	*str;
	size_t	i;
	i = 0;
	if (!(str = malloc(sizeof(char)*ft_strlen(s))))
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			str[i] = f(i,s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}