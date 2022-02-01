/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:25:46 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/08 18:25:46 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		inv;
	char	*str;

	str = (char *)s;
	inv = ft_strlen(str);
	while (inv >= 0)
	{
		if (str[inv] == (char)c)
			return (str + inv);
		--inv;
	}
	return (0);
}
