/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:30:19 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/11/18 16:30:19 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	cnt;
	unsigned int	nmb;
	int				sg;

	cnt = 0;
	sg = 1;
	nmb = 0;
	while (str[cnt] && (str[cnt] == '\t' || str[cnt] == '\v' || str[cnt] == '\n'
			|| str[cnt] == '\f' || str[cnt] == '\r' || str[cnt] == ' ' ))
		cnt++;
	if (str[cnt] == '-' || str[cnt] == '+')
	{
		if (str[cnt] == '-')
		{
			sg *= -1;
		}
		cnt++;
	}
	while (ft_isdigit(str[cnt]))
	{
		nmb *= 10;
		nmb += str[cnt++] - '0';
	}
	return (nmb * sg);
}
