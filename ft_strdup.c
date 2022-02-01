/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:57:16 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/16 12:57:16 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = malloc(ft_strlen(str) + 1);
	if (dup == 0)
		return (0);
	ft_strlcpy(dup, str, (ft_strlen(str) + 1));
	return (dup);
}
