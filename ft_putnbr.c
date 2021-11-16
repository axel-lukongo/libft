#include<unistd.h>
#include"libft.h"

void ft_putnbr(int nb)
{
  if(nb < 0)
    {
      ft_putchar('-');
      nb*= -1;
    }
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb+48);
  if(nb > 9 )
    {
      ft_putnbr(nb/10);
      ft_putchar(nb%10 + '0');
    }
  if(nb == -2147483648)
    write(1,"2147483648",11);
  
}
