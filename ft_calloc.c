/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:18:04 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/17 12:18:04 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

void	*ft_calloc(size_t items, size_t size)
{
	void			*str;
	unsigned int	i;

	i = items * size;
	str = malloc(i);
	if (!str)
		return (NULL);
	ft_bzero(str, i);
	return (str);
}
