/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:13:15 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/15 19:13:15 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			cnt;
	unsigned char	*liq;
	unsigned char	*liq2;

	cnt = 0;
	liq = (unsigned char *)s1;
	liq2 = (unsigned char *)s2;
	if (s1 == s2 || size == 0)
		return (0);
	while (cnt < size)
	{
		if (liq[cnt] != liq2[cnt])
			return (liq[cnt] - liq2[cnt]);
		cnt++;
	}
	return (0);
}
