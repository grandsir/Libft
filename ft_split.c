/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:07:19 by databey           #+#    #+#             */
/*   Updated: 2023/10/11 16:29:22 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	size_t	len;
	char	*temp;

	len = ft_strlen(s);
	arr = (char **)malloc((len + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		temp = ft_substr(s, 0, ft_strchr(s, c) - s);
		if (temp)
			arr[i++] = temp;
		s = ft_strchr(s, c);
		if (!s)
			break ;
		s++;
	}
	arr[i] = NULL ;
	return (arr);
}