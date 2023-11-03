#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

//To Remove
#include <stdio.h>
#include <string.h>

//Done
int	    ft_isalpha(int c);
int	    ft_isdigit(int c);
int	    ft_isalnum(int c);
int	    ft_isascii(int c);
int	    ft_isprint(int c);
int	    ft_toupper(int c);
int     ft_tolower(int c);
int	    ft_atoi(const char *nptr);
int     ft_strncmp(const char *s1, const char *s2, unsigned int n);
int	    ft_memcmp(const void *s1, const void *s2, unsigned int n);
char	*ft_strdup(char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, unsigned int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
char	**ft_split(char const *s, char c);

//To Do

char	*ft_calloc(unsigned int nmemb, unsigned int size);
char	*ft_itoa(int n);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif