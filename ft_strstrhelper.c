/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrhelper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 19:11:25 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:29:57 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstrhelper(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*needle != *haystack)
			return (0);
		needle++;
		haystack++;
	}
	return (1);
}

/*
** helper that is basically like strcmp
*/