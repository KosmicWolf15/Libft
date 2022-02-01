/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:15:37 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/10 18:15:37 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *orig, size_t size)
{
	char				*liqd;
	char				*liqo;
	unsigned int		cnt;

	cnt = 0;
	if (dest == NULL && orig == NULL)
		return (NULL);
	liqd = (char *)dest;
	liqo = (char *)orig;
	if (dest < orig)
	{
		while (size > 0)
		{
			liqd[cnt] = liqo[cnt];
			size--;
			cnt++;
		}
	}
	else
	{
		cnt = size;
		while (cnt-- > 0)
			liqd[cnt] = liqo[cnt];
	}
	return (dest);
}
