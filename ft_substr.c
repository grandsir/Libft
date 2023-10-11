/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:05:06 by databey           #+#    #+#             */
/*   Updated: 2023/10/11 12:14:16 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = start - 1;
	j = 0;
	while (s[i++])
		if (j < len)
			str[j++] = s[i];
	str[j] = '\0';
	return (str);
}
