/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:41:40 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/03 18:54:20 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;

	dest = s;
	while (n > 0)
	{
		*dest = 0;
		dest++;
		n--;
	}
}
/*int main(int argc, char **argv)
{
	void  *i;
	if (argc != 2)
		return(0);
	i = argv[1];
	ft_bzero(i, 5);
	printf("%s\n", argv[1]);
	return(0);
}*/
