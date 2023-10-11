/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:07:19 by databey           #+#    #+#             */
/*   Updated: 2023/10/11 15:53:47 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*temp;
	int		i;

	while (ft_strchr(s, c) - i < ft_strlen(s) && arr)
	{
		temp = ft_substr(s, i, ft_strchr(s, c) - i);
		*(arr)++ = temp;
	}
	return (arr);
}

int main() {
	char *str = "test,test,test";
	char sep = ',';
	char **arr = ft_split(str, c);

	while(*arr)
	{
		printf("%s", *(arr)++);
	}
}