#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    memset( array, 2, size );

    //Display the new values 
    for( length=0; length<9; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}
*/
void *ft_memset( void *pointer, int value, size_t count )
{
	unsigned int i;
	char *ptr;
	ptr = pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
	return(ptr);
}
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