#include"libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr_s;
	unsigned char letter;
	letter = (unsigned char) c;
	ptr_s = (unsigned char *)s;
	while (n)
	{
		if (*ptr_s == letter)
			return(ptr_s);
		n--;
		ptr_s++;
	}
	return(0);
}