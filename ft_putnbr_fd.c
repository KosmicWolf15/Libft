/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:13:37 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/01/21 02:13:37 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = n;
	if (i == -2147483648)
		ft_putstr_fd ("-2147483648", fd);
	else
	{
		if (i < 0)
		{
			ft_putchar_fd ('-', fd);
			i *= -1;
		}
		if (i >= 10)
		{
			ft_putnbr_fd (i / 10, fd);
		}
		ft_putchar_fd ((i % 10) + '0', fd);
	}
}
