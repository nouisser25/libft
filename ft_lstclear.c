/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:52:08 by anouisse          #+#    #+#             */
/*   Updated: 2026/11/09 02:17:06 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;

    if (!lst || !del)
        return;
    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
}

/*
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;
    
    if(!lst || !del)
        return;
    while(*lst)
    {
        temp = (*lst- next)
        ft_lstdelone(*lst, del);
        *lst = temp
    }
        *lst = NULL;
}


*/