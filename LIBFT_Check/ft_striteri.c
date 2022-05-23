/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:18:53 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/09 10:05:29 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*void my_function(unsigned int i, char *str)
{
	printf("je suis: index = %d et la chaine de caractere est %s\n", i, str);
}
int main ()
{
	char str[] = "ton peRE";
	printf("Le resultat est %s\n", str);
	ft_striteri(str, my_function);
	printf("le resultat est %s\n", str);
	return(0);
}*/
