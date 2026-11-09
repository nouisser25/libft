/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouisse <anouisse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 22:02:40 by anouisse          #+#    #+#             */
/*   Updated: 2026/11/05 19:45:49 by anouisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*copy_word(char const *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**free_tab(char **tab, int i)
{
	while (i > 0)
		free(tab[--i]);
	free(tab);
	return (NULL);
}

static int	fill_tab(char **tab, char const *str, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[j])
	{
		while (str[j] && str[j] == c)
			j++;
		start = j;
		while (str[j] && str[j] != c)
			j++;
		if (j > start)
		{
			tab[i] = copy_word(str, start, j);
			if (!tab[i])
				return (0);
			i++;
		}
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;

	if (!str)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, str, c))
		return (free_tab(tab, count_words(str, c)));
	return (tab);
}
