/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlintill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:18:17 by rlintill          #+#    #+#             */
/*   Updated: 2019/09/04 17:42:14 by rlintill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dis.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char *filename)
{
	int		fd;
	char	buf;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return;
	}
	while (read(fd, &buf, 1))
		ft_putchar(buf);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "File name missing.\n", 20);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 21);
	else
		ft_display(argv[1]);
	return (0);
}
