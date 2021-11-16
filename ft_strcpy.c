#include<stdio.h>
#include<unistd.h>

//a verifier


char *ft_strcpy(char *dest, char *src)
{
  int i;
  i = 0;
  while(src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  i = 0;
  return(dest);
}