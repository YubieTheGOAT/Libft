/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yubie <yubie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:36:43 by aboudiba          #+#    #+#             */
/*   Updated: 2023/11/04 22:38:03 by yubie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*rslt;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	rslt = malloc((len + 1) * sizeof(char));
	if (!rslt)
		return (NULL);
	while (i < len)
	{
		rslt[i] = (*f)(i, s[i]);
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
