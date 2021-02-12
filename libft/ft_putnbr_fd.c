/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:27:23 by msessa            #+#    #+#             */
/*   Updated: 2021/01/18 14:49:04 by msessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set_digits(int n)
{
	int	digits;

	digits = 1;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static void	ft_save_pos_nb(char *res, int n, int digits)
{
	res[digits] = '0' + (n % 10);
	while ((n /= 10) != 0)
		*(res + --digits) = '0' + (n % 10);
}

static void	ft_save_neg_nb(char *res, int n, int digits)
{
	res[digits] = '0' - (n % 10);
	while ((n /= 10) != 0)
		*(res + --digits) = '0' - (n % 10);
}

void		ft_write_nb(int n, int fd, int digits, int neg)
{
	char	nb[digits + neg];

	if (!neg)
		ft_save_pos_nb(nb, n, digits - 1);
	else
	{
		*nb = '-';
		ft_save_neg_nb(nb, n, digits);
	}
	write(fd, nb, digits + neg);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		digits;
	int		neg;

	digits = ft_set_digits(n / 10);
	neg = n < 0 ? 1 : 0;
	ft_write_nb(n, fd, digits, neg);
}
