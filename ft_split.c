/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:31:12 by medayi            #+#    #+#             */
/*   Updated: 2024/11/09 09:56:10 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count = 0;
	int	in_substring = 0;

	while (*s)
	{
		if (*s != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *start, size_t len)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = start[len];
	return (word);
}

static void	free_words(char **words, int count)
{
	while (count--)
		free(words[count]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i = 0;
	size_t	len;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			result[i] = word_dup(s, len);
			if (!result[i++])
			{
				free_words(result, i - 1);
				return (NULL);
			}
			s += len;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
