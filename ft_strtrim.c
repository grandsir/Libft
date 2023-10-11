/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:09 by databey           #+#    #+#             */
/*   Updated: 2023/10/11 15:34:18 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (*str)
// 	{
// 		i++;
// 		str++;
// 	}
// 	return (i);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < ft_strlen(s) + 1)
// 	{
// 		if (s[i] == c)
// 			return (s[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;
	int		i;

	i = -1;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	trimmed = (char *)malloc(end - start + 2);
	while (start + (++i) <= end)
		trimmed[i] = s1[i + start];
	trimmed[i] = '\0';
	return (trimmed);
}

// int	main() {
// 	char *str = "  Wow  ";
// 	char *set = " ";
// 	printf("%s", ft_strtrim(str, set));
// }