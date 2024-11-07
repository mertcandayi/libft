/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:31:12 by medayi            #+#    #+#             */
/*   Updated: 2024/11/07 20:19:43 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	n = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i + n <= len)
	{
		if (ft_strncmp(&haystack[i], needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
