/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarria- <asarria-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:00:11 by asarria-          #+#    #+#             */
/*   Updated: 2023/02/02 22:11:35 by asarria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed_str;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed_str = malloc(end - start + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_memcpy(trimmed_str, s1 + start, end - start);
	trimmed_str[end - start] = '\0';
	return (trimmed_str);
}

// int main()
// {
// 	char *str = "___Hello World ";
// 	char *set = "_";
// 	char *trimmed_str = ft_strtrim(str, set);

// 	if (trimmed_str)
// 		printf("Trimmed string: %s", trimmed_str);
// 	else
// 		printf("Trimming failed\n");
// 	free(trimmed_str);
// 	return (0);
// }