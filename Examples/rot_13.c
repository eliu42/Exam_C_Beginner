/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 12:28:49 by eliu              #+#    #+#             */
/*   Updated: 2017/04/21 12:36:50 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define R argv[1][i]

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i = 0;

	while (argc == 2 && argv[1][i])
	{
		if ((R >= 'a' && R <= 'm' ) || (R >= 'A' && R <= 'M'))
			ft_putchar(R + 13);
		else if ((R >= 'n' && R <= 'z') || (R >= 'N' && R <= 'Z'))
			ft_putchar(R - 13);
		else
			ft_putchar(R);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
