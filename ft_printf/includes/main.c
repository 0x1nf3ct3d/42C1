#include <stdio.h>
#include "ft_printf.h"

int main()
{
	const char	*text;
	const char	*lettre;
	int			nombre;
	int			nombre2;
	unsigned int			nombre3;
	int			nombre4;
	int	printfc;
	void *ptr;
	text = "ft_tagueule";
	lettre = "c";
	nombre = 42;
	nombre2 = 43;
	nombre3 = 42;
	nombre4 = -1;
	printfc = 0;
	ptr = &nombre;
	ft_printf("mine : %i\n", nombre);
	printf("orig : %i\n", nombre);
	ft_printf("Result = %p\n", ptr);
	printf("Result = %p\n", ptr);
	//printf("N lettre: %d\n", count);
	//printf("Printf: %d\n", printfc);
	//printf("Real: %x + %X", nombre3, nombre3);
}
