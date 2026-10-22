/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:24:07 by anouisse          #+#    #+#             */
/*   Updated: 2026/10/21 13:59:37 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;

	dlen = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	if (dlen == size)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + ft_strlen(src));
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20];
	size_t	r;

	strcpy(dst, "Hello");
	r = ft_strlcat(dst, " World", 20);
	printf("dst = \"%s\", retour = %zu\n", dst, r);
	return (0);
}