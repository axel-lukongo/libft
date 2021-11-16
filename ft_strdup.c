#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include"libft.h"

//a verifier
char *ft_strdup(char *src)
{
  int i;
  int len;
  char *str;

  len = 0;
  while (src[len])
    len++;
  str = (char*)malloc(sizeof(*str) * (len + 1));
  i = 0;
  while (i < len)
    {
      str[i] = src[i];
      i++;
    }
  return (str);
}