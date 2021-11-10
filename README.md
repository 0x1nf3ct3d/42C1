# ft_printf
## A mimic of standard printf function.
[![jaeskim's 42Project Score](https://badge42.herokuapp.com/api/project/hsabir/ft_printf1)](https://github.com/JaeSeoKim/badge42)
![alt text](https://github.com/1mthe0wl/ft_printf/blob/main/ft_printf.png?raw=true)

Back when I started the piscine there were a strange rule, that we were not allowed to use the standard printf function from libc, therefore we should use the write() function from <unistd.h> which takes only one character in a time, then we created the ft_putstr(), and ft_putnbr() functions which iterated through an array write its items. Now there is another adventure of recreating printf. 
#### Because putnbr and putstr aren’t enough...
### The subject:
You have to recode the libc’s printf function, It must not do the buffer management like the real printf, It will manage the following conversions: cspdiuxX%.
### The bonus part:
 If the Mandatory part is not perfect don’t even think about bonuses. Manage any combination of the following flags: ’-0.’ and minimum field width
with all conversions, Manage all the following flags: ’# +’ (yes, one of them is a space).
And if we focus enough we'll see a big note! 
`If you plan to do bonuses you should think about how to do them from the beginning to avoid a naive approach.`

At first it may looks like recreating the wheel and wasting our time, but believe me it isn't, it's more a project to tought us thinking like a programmer, to learn the art of abstraction, that's what I at least learned.

The prototype of printf looks something like this `int printf(const char *, ...)`. And the main issue we face about it is the number of argument it can get, that's what actually the second argument presents `...`, after some research I learned that concept is called [Variadic Functions](https://en.wikipedia.org/wiki/Variadic_function#In_C).

The variadic function handles the issue of not knowing howmany argument we will get.
Once this problem has been handled the next step is to look at the format until we reach at a special character which is a '%', Once we reach it we will then look the afterward what is there, and here is some art of abstraction, the next step is to determine what is after '%' and initialize our structure, Oh yes for the sake of simplicity I'm using a structure which contains my types that change based on the flags defined, at this rate all I did is to check what is after '%' until I reach to one of the specifiers `cspdiuxX%`, and I've done this by reading  and playing with two manuals [cpp reference of printf](https://www.cplusplus.com/reference/cstdio/printf/), [Secrets of “printf”](https://www.cypress.com/file/54441/download).

Yes, as the note says, we first check if there are some flags specified? If yes, we set the coresponding flags inside our structure, then one we are on a specifier we send it to the ft_print() function.
