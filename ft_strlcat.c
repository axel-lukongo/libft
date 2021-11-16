#include<stdio.h>

//a verifier

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int i;
  int j;
  int atr;
  int a;
  a=0;
  j = 0;
  i = 0;
  atr = 0;
  while (dest[i] != '\0')
    i++;
  while (src[j] != '\0')
    j++;
  if(size == 0)
    return(0);
  if(size == i)
  {
    return(i);
  }
    a = j + i;
  while(i != size)
    {
      dest[i] = src[atr];
      atr++;
      i++;
    }
  dest[i] = '\0';
  return(a);
}