/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimfronthelper.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:08:15 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 19:28:27 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strtrimfronthelper(char *s)
{
	int i;

	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		i++;
		s++;
	}
	if (*s == '\0')
		return (-1);
	return (i);
}
/*
** ft_trimfronthelper
** helper function that counts white spaces
** whitespaces = \n, \t, and ' ' according to docs
** returns a negative if it only finds spaces
*/
