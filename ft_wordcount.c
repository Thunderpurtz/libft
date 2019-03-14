/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:17:15 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 19:17:16 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *s, char c)
{
	int count;
	int charbool;

	count = 0;
	charbool = 1;
	while (*s)
	{
		if (*s == c)
			charbool = 1;
		else if (charbool == 1 && *s != c)
		{
			charbool = 0;
			count++;
		}
		s++;
	}
	return (count);
}

/*
** accepts a string and a char to search for
** and returns the number of words in the string
*/
