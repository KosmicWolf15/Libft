/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:05:18 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/23 18:05:18 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	cnt;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size > len)
		size = len;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	size = 0;
	cnt = 0;
	while (cnt < len && s[size])
	{
		if (size >= start)
		{
			str[cnt] = s[size];
			cnt++;
		}
		size++;
	}
	str[cnt] = '\0';
	return (str);
}
