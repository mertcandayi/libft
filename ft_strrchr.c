/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:48:39 by medayi            #+#    #+#             */
/*   Updated: 2024/11/11 20:21:36 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int x)
{
	char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (char)x)
			last = (char *)str;
		str++;
	}
	if ((char)x == '\0')
		return ((char *)str);
	return (last);
}
