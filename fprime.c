/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:30:46 by eliu              #+#    #+#             */
/*   Updated: 2016/12/05 22:31:57 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_find(unsigned int x)
{
	unsigned int	y;

	y = 2;
	while (y <= x && x % y != 0)
		y++;
	return (y);
}

int		main(int argc, char **argv)
{
	unsigned int	find;
	unsigned int	i;

	i = 1;
	find = atoi(argv[1]);
	while (argc == 2 && find != 1)
	{
		i = ft_find(find);
		printf("%d", i);
		find /= i;
		if (find != 1)
			printf("%c",'*');
	}	
	printf("%c", '\n');
	return (0);
}
