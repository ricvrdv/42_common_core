#include <stdio.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    char    *ptr;
    unsigned char uc;
    size_t i;

    ptr = (char *)b;
    uc = (unsigned char)c;
    i = 0;
    while (i < len)
    {
        ptr[i] = uc;
        i++;
    }
    return b;
}

int main(void)
{
    char    buffer_1[] = "Hello";
    char    buffer_2[] = "Hello";

    printf("Original buffer_1: \"%s\"\n", buffer_1);

    ft_memset(buffer_1, 65, 3);
    printf("After ft_memset(): \"%s\"\n\n", buffer_1);
    
    printf("Original buffer_2: \"%s\"\n", buffer_2);
    memset(buffer_2, 65, 2);
    printf("After memset(): \"%s\"\n", buffer_2);
    return (0);
}