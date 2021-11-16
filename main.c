#include<string.h>
#include<stdio.h>
#include"libft.h"
/*
int main() {

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

int main() 
{
  // char array[] = {"123456"};
	//char *c;
//	char array2[] = {"14"};
  //  size_t size = sizeof(char) * 3;
	//char c = '4';
	char *str;
	str = ft_strtrim(",,salut,,",",");
	printf("%s\n",str);
	free(str);
}
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