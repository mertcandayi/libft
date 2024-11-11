/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:07:20 by medayi            #+#    #+#             */
/*   Updated: 2024/11/09 15:36:29 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitcounter(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb *= -1;
		counter++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		counter++;
	}
	counter++;
	return (counter);
}

static void	convertnum(long nb, char *c, int *i)
{
	if (nb < 0)
	{
		nb *= -1;
		*c = '-';
		*i += 1;
	}
	if (nb >= 10)
	{
		convertnum(nb / 10, c, i);
		convertnum(nb % 10, c, i);
	}
	else
	{
		*(c + *i) = nb + '0';
		*i += 1;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		digit_numb;
	int		i;

	i = 0;
	nb = n;
	digit_numb = digitcounter(nb);
	str = malloc(sizeof(char) * digit_numb + 1);
	if (!str)
		return (0);
	convertnum(nb, str, &i);
	str[i] = '\0';
	return (str);
}
