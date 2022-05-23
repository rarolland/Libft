/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:25:56 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/06 16:44:22 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*dest;

	dest = ptr;
	while (n > 0)
	{
		*dest = x;
		dest++;
		n--;
	}
	return (ptr);
}
/*
int main(int argc, char **argv)
{
	void *i;
	if (argc != 2)
		return (0);
	i = argv[1];
	ft_memset(i, 98, 2);
	printf("%s\n", argv[1]);
	return (0);
}*/
