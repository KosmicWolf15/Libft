/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:53:15 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/12/13 15:53:15 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	word_cnter(char *s, char c)
{
	int	word;
	int	cnt;

	word = 0;
	cnt = 0;
	while (s[cnt])
	{
		while (s[cnt] && s[cnt] == c)
			cnt++;
		if (s[cnt] && s[cnt] != c)
			word++;
		while (s[cnt] && s[cnt] != c)
			cnt++;
	}
	return (word);
}

char	**shield(char **str, size_t word_count, size_t word_len)
{
	size_t	i;

	i = 0;
	str[word_count] = malloc(sizeof(char) * (word_len + 1));
	if (!str[word_count])
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
		return (NULL);
	}
	return (str);
}

char	**ft_splot(char const *s, char **str, size_t word_len, char c)
{
	size_t	cnt;
	size_t	word_count;

	cnt = 0;
	word_count = 0;
	while (s[cnt])
	{
		while (s[cnt] && s[cnt] == c)
		{
			word_count += (word_len > 0);
			word_len = 0;
			cnt++;
		}
		while (s[cnt] && s[cnt] != c)
		{
			word_len++;
			cnt++;
		}
		if (!s[cnt] && !word_len)
			break ;
		shield(str, word_count, word_len);
		ft_strlcpy(*(str + word_count), s + cnt - word_len, word_len + 1);
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	word_len;
	size_t	word_count;

	word_count = word_cnter((char *)s, c);
	str = ft_calloc(1, sizeof(char *) * (word_count + 1));
	if (!str)
		return (NULL);
	word_len = 0;
	str = ft_splot(s, str, word_len, c);
	return (str);
}
