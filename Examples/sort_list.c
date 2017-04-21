/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 13:34:52 by eliu              #+#    #+#             */
/*   Updated: 2016/12/04 13:46:45 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list		*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		num;
	t_list	*head;

	head = lst;
	while (lst->next)
	{
		if (!(cmp(lst->data, lst->next->data)))
		{
			num = lst->next->data;
			lst->next->data = lst->data;
			lst->data = num;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}
