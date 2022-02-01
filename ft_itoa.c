/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:35:14 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/12/13 19:35:14 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	get_len(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = get_len(n);
	str = (char *)malloc (sizeof(char) *(size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n < 0)
	{
		str[--size] = - (n % 10) + '0';
		n = -(n / 10);
	}
	else if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
