/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:07:20 by medayi            #+#    #+#             */
/*   Updated: 2024/11/09 15:39:36 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*arr1;
	const unsigned char	*arr2;
	size_t				i;

	arr1 = (const unsigned char *)s1;
	arr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && (arr1[i] || arr2[i]))
	{
		if (arr1[i] != arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}
