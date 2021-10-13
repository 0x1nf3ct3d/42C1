#include <stdio.h>
#include <string.h>
#include "libft.h"

#include "libft.h"

 void    *ft_memset(void *b, int c, size_t len)
 {
     unsigned char   *ptr;
     size_t          i;

     ptr = b;
     i = 0;
     while (i < len)
     {
         *(ptr + i++) = c;
     }
     return (b);
 }

int main()
{
	char str[30] = "42 is for programmers";
	printf("\nBefore memset: %s\n", str);
	memset(str + 9, '#', 10*sizeof(char));
	printf("After or_memset: %s\n", str);
	char str1[30] = "42 is for programmers";
	ft_memset(str1 + 9, '*', 10*sizeof(char));
	printf("After ft_memset: %s\n", str1);
	return 0;
}
