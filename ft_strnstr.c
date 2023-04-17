/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarria- <asarria-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:57:47 by asarria-          #+#    #+#             */
/*   Updated: 2023/03/07 19:34:12 by asarria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	size_t	needle_len;

	needle_len = (size_t)ft_strlen((char *)needle);
	if (haystack == NULL || needle == NULL)
		return (NULL);
	while (l >= needle_len)
	{
		l--;
		if (!ft_memcmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
