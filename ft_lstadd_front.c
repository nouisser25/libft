/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:01:29 by anouisse          #+#    #+#             */
/*   Updated: 2026/11/04 21:05:46 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    new->next = *lst;
    *lst = new;
}

/*
1er etape on verifier les pointeur s il sont null
2eme etape on relit new - next par la premier noeud de la list
3eme on redre la new comme la premier noeud de la list par passage de leur adresse a *list = new;
*/