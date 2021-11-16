#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include"libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s,0,n);	
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
    ft_bzero( array,size);

    //Display the new values 
    for( length=0; length<9; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}*/