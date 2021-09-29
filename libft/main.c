#include "libft.h"
#include <stdio.h>

int main()
{
    char str[10] = "Hello 42";
    char *memset;

    printf("Before: %s\n", str);
    memset = ft_memset(str+2, '*', 8);
    printf("After memset: %s\n", memset);
}
