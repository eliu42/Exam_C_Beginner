/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 08:35:14 by eliu              #+#    #+#             */
/*   Updated: 2016/11/23 08:55:28 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc != 4 || argv[2][1] || argv[3][1])
	{
		write(1, "\n", 1);
		return (0);
	}
	i = -1;
	while (argv[1][++i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
	}
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
