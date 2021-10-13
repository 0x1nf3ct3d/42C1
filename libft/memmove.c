#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
    if (src == NULL && dst == NULL)
    	return (NULL);
    if (src <= dst)
    {
    	while (len--)
      	{
        	((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
        }
    }
    else
    {
    	i = 0;
        while (i < len)
        {
        	((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
	return (dst);
}

int main()
{
	char strs[] = "Hello";
	char strd[] = "World";
	printf("Before or_memmove:\ndst = %s\nsrc = %s\n", strs, strd);
	memmove(strd, strs, 6);
	printf("After or_memmove:\ndst = %s\nsrc = %s\n", strs, strd);
	char str1s[] = "Hello";
 	char str1d[] = "World";
    printf("Before ft_memmove:\ndst = %s\nsrc = %s\n", str1s, str1d);
    memmove(str1d, str1s, 6);
	printf("After ft_memmove:\ndst = %s\nsrc = %s\n", str1s, str1d);
	return 0;
}
