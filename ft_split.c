/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:07:20 by medayi            #+#    #+#             */
/*   Updated: 2024/11/10 18:55:02 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	free_lst(char **lst, int i)
{
	while (i >= 0)
	{
		free(lst[i]);
		i--;
	}
	free(lst);
}

static int	process_word(char **lst, const char *s, char c, int i)
{
	size_t	word_len;

	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	lst[i] = ft_substr(s, 0, word_len);
	if (!lst[i])
	{
		free_lst(lst, i - 1);
		return (0);
	}
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;
	size_t	word_len;

	if (!s)
		return (NULL);
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = process_word(lst, s, c, i);
			if (!word_len)
				return (NULL);
			i++;
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
