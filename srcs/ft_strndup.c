/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealonso <jealonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:57:22 by jealonso          #+#    #+#             */
/*   Updated: 2015/11/26 15:16:23 by jealonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int count)
{
	char	*s2;

	s2 = NULL;
	if ((s2 = (char *)malloc(sizeof(char) * ++count)))
		while (s1 && *s1 && --count)
		{
			*s2 = *s1;
			++s2;
			++s1;
		}
		*s2 = '\0';
	return (s2);
}
