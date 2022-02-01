/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:22:37 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/29 12:22:37 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cnt;
	int		size;
	char	*str;

	if (!(s1 && s2))
		return (NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	cnt = 0;
	while (*s1)
		str[cnt++] = *s1++;
	while (*s2)
		str[cnt++] = *s2++;
	str[cnt] = '\0';
	return (str);
}
