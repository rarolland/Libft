/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:29:07 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/17 11:30:31 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (count && ((count * size / count) != size))
		return (NULL);
	dest = malloc(count * size);
	if (!dest)
		return (NULL);
	ft_bzero((char *)dest, count * size);
	return ((char *)dest);
}
/*int main()
{
	printf("%p\n", ft_calloc(10, 4));
	return(0);
}*/
