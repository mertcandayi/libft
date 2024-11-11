#include "libft.h"
#include <stdio.h>

int main()
{
    int    set[] = {1};
    ft_memset(&set[0], 255, 2);
    ft_memset(&set[0], 248, 1);
    printf("ahanda: %d", set[0]);
}