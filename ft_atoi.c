#include<stdlib.h>
#include<stdio.h>
#include"libft.h"

int ft_atoi(char *str)
{
  int i;
  int mult;
  int conv;
  mult = 1;
  i = 0;
  conv = 0;
  while((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
    i++; 
  while(str[i] == 45|| str[i] == 43)
    {
      if(str[i] == 45)
	mult *= -1;
      if(str[i] == 43)
	mult *= 1;
      i++;
    }
  while(str[i] >= '0' && str[i] <= '9')
    {
      conv = conv * 10 + str[i] - 48;
      i++;
    }
  conv *= mult;
  return(conv);
}