/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:26:19 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/01/30 10:40:51 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		cnt;
	char	*str;

	cnt = 0;
	str = (char *)s;
	while (str[cnt] != (char)c)
	{	
		if (str[cnt] == '\0')
			return (0);
		str++;
	}
	return (str);
}
