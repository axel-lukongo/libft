#include"libft.h"
#include<stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	char *ptr_dest;
	char *ptr_src;
	ptr_src = (char *)src;
	ptr_dest = dest;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return(dest);
}