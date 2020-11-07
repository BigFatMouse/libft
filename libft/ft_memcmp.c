/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 01:59:06 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/07 02:55:46 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	while ((i < n) && (str1[i] == str2[i]))
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
