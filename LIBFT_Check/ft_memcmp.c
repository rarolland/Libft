/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:56:00 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/10 16:09:15 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	const unsigned char			*a;
	const unsigned char			*b;
	int							i;

	a = s1;
	b = s2;
	i = 0;
	while (size > 0)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
		size--;
	}
	return (0);
}
/*int main()
{
	printf("%d\n", ft_memcmp("Salut", "salut", 10));
	return(0);
}*/
