#include "libft.h"
#include <stdio.h>

void maj_premier_caractere(unsigned int i, char *c)
{
    if(i == 0 && (*c >= 'a'&& *c<='z'))
    {
        *c = *c-32;
    }
}

int main()
{
    char str[] = "bonjour";

    printf("Avant : %s\n",str);

    ft_striteri(str,maj_premier_caractere);

    printf("Apres : %s\n",str);

    return 0;
}
