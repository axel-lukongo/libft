#include<stdlib.h>
#include<stdio.h>

int length_word(char *s, char c)
{
	int len;
	len = 0;
	while(s[len] && s[len] != c)
	{
		len++;
	}
		return (len);
}

int nbr_word(char *s, char c)
{
	int word;
	int i;
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			s[i++];
		if (s[i] != c)
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return(word);
}

char **ft_strsplit(char *s, char c)
{
	int word;
	int i;
	int j;
	char **tab;
	i = -1;
	word = nbr_word(s,c);
	if (!(tab = malloc(sizeof (char *) * (word+1))))
		return(0);
	while (++i < word)
	{
		while (*s == c)
			s++;
		if (!(tab[i] = malloc(sizeof(char) * (length_word(s,c)+1))))
			return(0);
		j = 0;
		while (*s && *s != c)
		{
			tab[i][j++] = *s;
			s++;
		}
		tab[i][j] = '\0';
	}
	tab[i] = '\0';
	return(tab);
}