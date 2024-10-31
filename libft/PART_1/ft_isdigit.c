#include <stdio.h>
#include <ctype.h>

int     ft_isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (2048);
        return (0);
}

int   main(int argc, char *argv[])
{
        int     c1;
        int     c2;

        if (argc == 2)
        {
                c1 = ft_isdigit(argv[1][0]);
                c2 = isdigit(argv[1][0]);
                printf("Using ft_isdigit (return value = %d)\n", c1);
                if (c1)
                        printf("%c is a digit.\n\n", argv[1][0]);
                else
                        printf("%c is not a digit.\n\n", argv[1][0]);
                printf("Using isdigit (return value = %d)\n", c2);
                if (c2)
                        printf("%c is a digit.\n", argv[1][0]);
                else
                        printf("%c is not a digit.\n", argv[1][0]);
                return (0);
        }
        return (1);
}