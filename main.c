#include<string.h>
#include<stdio.h>
#include"libft.h"

/*int main() {

    char array [] = { "salut"};
    size_t size = sizeof( char ) * 8;
    int length;

    // Display the initial values 
    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    // Reset the memory bloc 
    ft_memset( array, 2, size );

    //Display the new values 
    for( length=0; length<9; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}*/
/*int main()
{
  int i = 0;
  char **tab;
  int x = 0;
  tab = ft_strsplit("sa---lu",'-');
  if(tab == NULL)
    return(0);
  while (i < 3)
    {
      printf("string %d : %s\n", i, tab[i]);
      i++;
    }
  
  while(x < 3)
    {
      free(tab[x++]);
    }
  free(tab);
  return (0);
}*/
/*int main() 
{
	char array[] = {"123456"};
	char *c;
	char array2[] = {"14"};
	size_t size = sizeof(char) * 3;
	char c = '4';
	char *str;
	str = ft_strtrim(",,salut,,",",");
	printf("%s\n",str);
	free(str);
}*/
/*int main()

{
	printf("[ft_strdel]\n");
	char **tofree2;
	tofree2 = ft_memalloc(1);
	tofree2[0] = ft_strnew(2);
	tofree2[0][0] = 'y';
	tofree2[0][1] = 'o';
	tofree2[0][2] = '\0';
	tofree2[1] = NULL;
	printf("%s\n", tofree2[0]);
//	printf("%d\n", (int)tofree2[0]);
	printf("----------\n");
	ft_strdel(tofree2);//FT_STRDEL
	printf("%s\n", *tofree2[0]);
//	printf("%d\n", (int)tofree2[0]);
	printf("\n");
	printf("[expected]\n");
	printf("yo\n(some adress)\n----------\n(null)\n0\n");
}*/
/*int main()
{
	char *str;
	str = ft_itoa(214748364);
	printf("%s\n",str);
}*/
/*int main()
{
	ft_putendl_fd("salut",1);
}*/
/*int main()
{
	ft_putnbr_fd(25,1);
}*/
/*int main()
{
	t_list *ptr;
	ptr = ft_lstnew("21");
	print_list(ptr);
}*/
/*int main()
{
	t_list *ptr1;
	t_list *ptr2;
	ptr1 = ft_lstnew("2");
	ptr2 = ft_lstnew("5");
	ft_lstadd_front(&ptr1,ptr2);
	print_list(ptr1);
}*/
void *f(void *str)
{
	int a = 4;
	str = &a;
}
int main(void)
{
	t_list *lst;
	t_list *list2;
	int a = 3;
	lst = (t_list*)malloc(sizeof(t_list));
	lst->content = &a;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->content = &a;
	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->content = &a;
	lst->next->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->next->content = &a;
	lst->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->next->next->content = &a;
	lst->next->next->next->next->next =  0;
	print_list(lst);
	list2 = ft_lstmap(lst,f);
	print_list(list2);
	while (list2)
	{
		free(lst);
		lst = list2;
		list2 = list2->next;
	}
	free(lst);
	return (0);
}