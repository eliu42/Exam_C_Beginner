/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunduru <hkunduru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 11:12:30 by exam              #+#    #+#             */
/*   Updated: 2016/10/18 08:20:15 by hkunduru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*ptr;
	char	*str;
	int		i;
	int		loop;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	str = argv[1];
	ptr = (char *)malloc(sizeof(ptr) * 2048);
	while (i < 2048)
		ptr[i++] = 0;
	i = 0;
	while (*str)
	{
		if (*str == '>')
			i++;
		else if (*str == '<')
			i--;
		else if (*str == '+')
			ptr[i]++;
		else if (*str == '-')
			ptr[i]--;
		else if (*str == '.')
			write(1, &ptr[i], 1);
		else if(*str == '[' && ptr[i] == 0)
		{
			loop = 1;
			while (loop)
			{
				str++;
				if (*str == '[')
					loop++;
				else if (*str == ']')
					loop--;
			}
		}
		else if (*str == ']' && ptr[i] != 0)
		{
			loop = 1;
			while (loop)
			{
				str--;
				if (*str == ']')
					loop++;
				else if (*str == '[')
					loop--;
			}
		}
		str++;
	}
	return (0);
}
