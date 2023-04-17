/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarria- <asarria-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:02:47 by asarria-          #+#    #+#             */
/*   Updated: 2023/03/07 21:09:02 by asarria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	str_assigner(int len, int num, char *str, int negative)
{
	if (negative)
		num = -num;
	if (num <= -1 && num >= -9)
		len = 1;
	while (len--)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	if (negative)
		str[0] = '-';
}

int	str_iterator(int num, int len)
{
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	int			negative;
	char		*str;
	long int	num;

	num = n;
	len = 1;
	negative = 0;
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num-- < 0)
		negative = 1;
	len = str_iterator(num, len);
	len += negative;
	str = (char *)malloc(sizeof (char) * len);
	if (str == NULL)
		return (NULL);
	if (len == 0)
		return (NULL);
	str[--len] = '\0';
	num = n;
	str_assigner(len, num, str, negative);
	return (str);
}
