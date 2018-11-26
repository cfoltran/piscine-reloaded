/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:39:16 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/06 11:24:43 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	while (src[i])
		i++;
	if ((result = (char *)malloc(sizeof(*src) * (1 + i))) == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		result[j] = src[j];
		j++;
	}
	result[i] = '\0';
	return (result);
}
