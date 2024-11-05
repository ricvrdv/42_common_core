#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
        unsigned char   *ptr_s;
        unsigned char   ch;
        size_t                  i;

        ptr_s = (unsigned char *)s;
        ch = (unsigned char)c;
        i = 0;
        while (i < n)
        {
                if (ptr_s[i] == ch)
                        return ((void *)(ptr_s + i));
                i++;
        }
        return (NULL);
}

int     main(void)
{
        char    *mem = "Unts unts";
        unsigned char   to_locate= 's';
        size_t  n_bytes = 10;
        char    *ptr_mem_1 = ft_memchr(mem, to_locate, n_bytes);
        char    *ptr_mem_2 = memchr(mem, to_locate, n_bytes);

        printf("Memory area: \"%s\"\tTo locate: \"%c\"\n", mem, to_locate);
        printf("First instance (using ft_memchr): \"%s\"\n", ptr_mem_1);
        printf("First instance    (using memchr): \"%s\"\n", ptr_mem_2);
        return (0);
}
