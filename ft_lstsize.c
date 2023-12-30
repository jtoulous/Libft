/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:45:07 by jtoulous          #+#    #+#             */
/*   Updated: 2022/10/18 12:45:13 by jtoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	z;

	z = 0;
	while (lst)
	{
		z++;
		lst = lst->next;
	}
	return (z);
}