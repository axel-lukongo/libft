#include"libft.h"

void ft_putnbr_fd(int n, int fd)
{
  if(n < 0)
    {
      ft_putchar_fd('-',fd);
      n*= -1;
    }
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n+48,fd);
  if(n > 9 )
    {
      ft_putnbr_fd(n/10,fd);
      ft_putchar_fd(n%10 + '0',fd);
    }
  if(n == -2147483648)
    write(fd,"2147483648",11);
}