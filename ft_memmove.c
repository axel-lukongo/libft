#include"libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;
	ptr_src = (unsigned char *) src;
	ptr_dest = (unsigned char *)dest;

	if (ptr_src < ptr_dest)
	{
		while (n)
		{
			ptr_dest[n] = ptr_src[n];
			n--;
		}
	}
		else
			ft_memcpy(dest,src,n);
		return(dest);
}