/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:21:37 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/01/29 13:22:29 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	*ft_memset(void *str, int chr, size_t size)
{
	unsigned char	*liq;
	size_t			cnt;

	liq = (unsigned char *)str;
	cnt = 0;
	while (size > cnt)
	{
		liq[cnt] = (unsigned char)chr;
		cnt++;
	}
	return (str);
}
