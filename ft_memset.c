#include <stdio.h>

void *  ft_memset(void *str, int c, unsigned long int len)
{
    while (len--)
    {
        (*(char *))str[len - 1] = (unsigned char)c;        
    }
    return (str);
}

int main(void)
{
    char *str = "hello";
    ft_memset(str, 'n', 2);
    printf("%s", str);
}