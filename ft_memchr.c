/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 08:59:17 by anouisse          #+#    #+#             */
/*   Updated: 2026/10/22 15:51:27 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    size_t i;

    p=(const unsigned char*)s;
    
    while(i<n)
    {
        if(p[i] == (unsigned char)c){

            return ((void *)(p+i));
        i++;
        }
            
    }
    return NULL;
}