/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:07:20 by medayi            #+#    #+#             */
/*   Updated: 2024/11/09 15:35:54 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbyte, size_t size)
{
	void	*dst;

	dst = malloc(size * nbyte);
	if (!dst)
		return (0);
	ft_bzero(dst, size * nbyte);
	return (dst);
}
