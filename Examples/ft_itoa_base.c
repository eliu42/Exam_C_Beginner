/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 21:37:06 by eliu              #+#    #+#             */
/*   Updated: 2017/03/12 22:38:59 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
char	*ft_itoa_base(int value, int base)
{
	char	*str;
	size_t	len;
	long	n;
	char	*hex = "0123456789ABCDEF";

	len = 1;
	n = value;
	if (value < 0 && base == 10)
		len++;
	while (value /= base)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len] = '\0';
	str[--len] = *(hex + n % base);
	while (n /= base)
		str[--len] = *(hex + n % base);
	return (str);
}

int		main()
{
	printf("%s\n", ft_itoa_base(4, 2));
	printf("%s\n", ft_itoa_base(16, 2));

	printf("%s\n", ft_itoa_base(256, 2));
	printf("%s\n", ft_itoa_base(512, 2));
	printf("%s\n", ft_itoa_base(1345678, 10));
	printf("%s\n", ft_itoa_base(-26, 10));
	printf("%s\n", ft_itoa_base(42, 10));
	return (0);
}
