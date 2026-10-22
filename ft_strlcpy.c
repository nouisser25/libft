/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:55:48 by anouisse          #+#    #+#             */
/*   Updated: 2026/10/20 15:19:37 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    int len;
    
    i=0;
    len =0;
    
    while(src[len])
        len++;

    while(size-i-1)
        dst[i]=src[i++];
    
        dst[size]='\0';
        return len;
}

#include <stdio.h>

int main(void)
{
    char dst1[20];
    char dst2[20];
    char dst3[20];
    char dst4[20];
    char dst5[20];

    size_t ret1;
    size_t ret2;
    size_t ret3;
    size_t ret4;
    size_t ret5;

    ret1 = ft_strlcpy(dst1, "Hello", 6);
    printf("Test 1: dst = \"%s\", ret = %zu\n", dst1, ret1);

    ret2 = ft_strlcpy(dst2, "Hello", 4);
    printf("Test 2: dst = \"%s\", ret = %zu\n", dst2, ret2);

    ret3 = ft_strlcpy(dst3, "Hello", 1);
    printf("Test 3: dst = \"%s\", ret = %zu\n", dst3, ret3);

    ret4 = ft_strlcpy(dst4, "", 5);
    printf("Test 4: dst = \"%s\", ret = %zu\n", dst4, ret4);

    ret5 = ft_strlcpy(dst5, "abc", 20);
    printf("Test 5: dst = \"%s\", ret = %zu\n", dst5, ret5);

    return (0);
}