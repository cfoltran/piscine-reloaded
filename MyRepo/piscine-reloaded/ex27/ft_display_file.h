/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:33:06 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/06 11:13:30 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H
# define BUFF_SIZE 4096
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		errors(int argc);
#endif
