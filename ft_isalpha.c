/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:41:53 by jtoulous          #+#    #+#             */
/*   Updated: 2022/09/28 14:10:32 by jtoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int z)
{
	if ((z >= 'A' && z <= 'Z') || (z >= 'a' && z <= 'z'))
		return (1);
	return (0);
}