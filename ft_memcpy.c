/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:36:44 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/10 17:36:44 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *org, size_t size)
{
	char	*liqd;
	char	*liqo;
	int		cnt;

	cnt = 0;
	if (dest == NULL && org == NULL)
		return (NULL);
	liqd = (char *)dest;
	liqo = (char *)org;
	while (size > 0)
	{
		liqd[cnt] = liqo[cnt];
		size--;
		cnt++;
	}
	return (dest);
}
