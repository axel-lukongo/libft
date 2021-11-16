#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memset(void *pointer, int value, size_t count);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int  ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

int  ft_strlen(char *str);
char *ft_strdup(char *src);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *str, int c);
char *ft_strstr(char *str, char *to_find);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strncat(char *dest, char *src, unsigned int n);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
char *ft_strcpy(char *dest, char *src);
char *ft_strcat(char *dest, char *src);
int ft_atoi(char *str);

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void ft_putstr(char *str);
void ft_putchar(char c);
void ft_putnbr(int nb);
void *ft_memalloc(size_t size);
void ft_memdel(void **app);
char *ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strcrl(char *s);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s,void (*f)(unsigned int, char *));
char *ft_substr(char *s, unsigned int start,size_t len);
char *ft_strmapi(char *s,char (*f)(unsigned int,char));
char *ft_strjoin(char const *s1, char const*s2);
char *ft_strtrim(char *s1, char *set);