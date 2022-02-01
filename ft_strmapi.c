/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:10:57 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/01/19 18:10:57 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			size;
	unsigned int	cnt;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	cnt = 0;
	while (s[cnt])
	{
		str[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	str[cnt] = '\0';
	return (str);
}
