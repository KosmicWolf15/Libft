/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:25:41 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/15 18:25:41 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			cnt;
	unsigned char	*liq;
	unsigned char	ch;

	cnt = 0;
	liq = (unsigned char *)str;
	ch = (unsigned char)c;
	while (cnt < size)
	{
		if (liq[cnt] == ch)
			return ((void *)liq + cnt);
		cnt++;
	}
	return (NULL);
}
