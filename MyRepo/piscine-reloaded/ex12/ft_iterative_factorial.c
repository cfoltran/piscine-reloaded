/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 13:42:36 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/06 11:20:33 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = nb;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i > 1)
	{
		res *= i;
		i--;
	}
	return (res);
}
