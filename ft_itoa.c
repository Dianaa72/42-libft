/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:16:39 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/20 22:06:35 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		c;
	char	*num;
	int		n_copy;

	n_copy = n;
	c = 0;
	while (n > 0)
	{
		n_copy = n_copy / 10;
		c++;
	}
	num = malloc(sizeof(char) * c + 1);
	if (!num)
		return (NULL);
	num[c] = '\0';

	while (n > 0) 
	{
		num[c - 1] = n % 10;
		n = n / 10;
		c--;
	}
	return (num);
}
//-58557411111