/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albegar2 <albegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:11:54 by albegar2          #+#    #+#             */
/*   Updated: 2025/06/14 17:58:27 by albegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*lista;
	t_list	*nuevo;
	int		content2;

	lista = NULL;
	content2 = 10;
	nuevo = ft_lstnew(&content2);
	ft_lstadd_front(&lista, nuevo);
	while (lista != NULL)
	{
		printf("Valor: %d\n", *(int *)(lista->content));
		lista = lista->next;
	}
	return (0);
}
	*/