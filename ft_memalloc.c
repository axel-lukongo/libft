#include"libft.h"

void *ft_memalloc(size_t size)
{
	void *str;

	if (!(str = (void *)malloc(sizeof (str) * size)))
	{
		return(NULL);
	}
	ft_bzero(str,size);
	return(str);
}