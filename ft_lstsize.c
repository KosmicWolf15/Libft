/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:41:10 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/01/28 12:23:46 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*aux;

	aux = lst;
	size = 0;
	if (!lst)
		return (0);
	while (aux != NULL)
	{
		size++;
		aux = aux->next;
	}
	return (size);
}
