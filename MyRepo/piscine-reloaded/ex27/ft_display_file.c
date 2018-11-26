/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:34:00 by clfoltra          #+#    #+#             */
/*   Updated: 2018/11/06 11:09:33 by clfoltra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int		main(int argc, char **argv)
{
	char	buf[BUFF_SIZE + 1];
	int		fd;
	int		ret;

	if (errors(argc) == 1)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			return (1);
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if ((close(fd)) == -1)
			return (1);
	}
	return (0);
}
