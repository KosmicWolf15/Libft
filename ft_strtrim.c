/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:55:56 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/12/09 00:55:56 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	init;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (0);
	init = 0;
	end = ft_strlen(s1);
	while (s1[init] && ft_strchr(set, s1[init]))
		init++;
	while (s1[end - 1] && init < end && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - init + 1));
	if (str)
		ft_strlcpy(str, s1 + init, (end - init + 1));
	return (str);
}
