#include<stdio.h>

//a verifier

char *ft_strncat(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  unsigned int j;
  i = 0;
  j = 0;
  while(dest[i] != '\0')
    i++;
  while(j < n)
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  dest[i] = '\0';
  return(dest);
}
