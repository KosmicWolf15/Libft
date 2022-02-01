/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:02:38 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/01/29 18:22:38 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	cnt;
	size_t	cnt2;

	cnt = 0;
	if (!str)
		return ((char *)substr);
	if (substr[0] == '\0')
		return ((char *)str);
	while (str[cnt] && len > cnt)
	{
		cnt2 = 0;
		while (str[cnt + cnt2] && substr[cnt2] && len > (cnt + cnt2))
		{
			if (str[cnt + cnt2] != substr[cnt2])
				break ;
			cnt2++;
		}
		if (substr[cnt2] == '\0')
			return ((char *)str + cnt);
		cnt++;
	}
	return (NULL);
}
