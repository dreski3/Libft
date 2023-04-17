/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarria- <asarria-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:59:19 by asarria-          #+#    #+#             */
/*   Updated: 2023/03/17 12:21:08 by asarria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	char	*str2;

	i = 0;
	str = (char *)malloc(len + 1);
	if (!s || !str)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		str2 = ft_strdup("");
		return (str2);
		free (str2);
	}
	while (len--)
	{
		str[i] = (char)s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*substr;
// 	unsigned int	s_len;

// s_len = ft_strlen((char *)s);
// 	if (start > s_len)
// 		return (NULL);
// 	if (start == s_len)
// 		len
// 	if (start + (unsigned int)len > s_len)
// 		len = s_len - start;
// 	substr = malloc(len + 1);
// 	if (substr == NULL)
// 		return (NULL);
// 	ft_memcpy(substr, s + start, len);
// 	substr[len] = '\0';
// 	return (substr);
// }
