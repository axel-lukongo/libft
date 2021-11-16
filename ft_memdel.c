#include"libft.h"
#include<stdlib.h>

//faudras que je demande le main des autre
void ft_memdel(void **app)
{
	if (app)
	{	
		free(*app);
		*app = NULL;
	}
}