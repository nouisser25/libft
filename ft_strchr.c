/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:44:46 by anouisse          #+#    #+#             */
/*   Updated: 2026/10/21 20:51:42 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    ch;

    ch = (char)c;
    while (*s)
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (ch == '\0')
        return ((char *)s);
    return (NULL);
}
