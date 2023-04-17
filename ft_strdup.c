/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarria- <asarria-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:58:55 by asarria-          #+#    #+#             */
/*   Updated: 2023/01/14 22:24:41 by asarria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (dup)
		ft_memcpy(dup, s, len);
	return (dup);
}

// int main() 
// {
// 	char *str1 = "Hello";
// 	char *str2 = strdup(str1);

// 	if (str2)
// 	{
// 		printf("Duplicated string: %s \n", str2);
// 	} else {
// 		printf("Duplication failed \n");
// 	}
// 	free(str2);
// 	return 0;
// }