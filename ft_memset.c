/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:56:24 by anouisse          #+#    #+#             */
/*   Updated: 2026/11/05 19:16:43 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
//     int num = -1;
// 	int new_num = 90;
// 	unsigned char *pn = (unsigned char *)&new_num;
// 	unsigned char *pnn = (unsigned char *)&num;

// 	int i = 0;
// 	while (i < 4)
// 	{
// 		ft_memset(pn + i, pnn[i], 1);
// 		i++;
// 	}
// 	printf("%d", new_num);
// }

// int main()
// {
// 	int i = 87; 00000000 00000000 00000000 01010111

// 	memset(&i, 0 ,4); 00000000 00000000 00000000 00000000
// 	memset(&i, 5 ,2); 00000000 00000000 00000101 00000101
// 	memset(&i, 57 ,1);00000000 00000000 00000101 00111001
// }