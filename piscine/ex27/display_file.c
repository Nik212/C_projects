/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:22:36 by slupe             #+#    #+#             */
/*   Updated: 2019/09/04 18:27:03 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dis.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char *filename)
{
	int		res;
	char	kek;

	res = open(filename, O_RDONLY);
	if (res == -1)
	{
		return ;
	}
	while (read(res, &kek, 1))
		ft_putchar(kek);
	close(res);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "File name missing.\n", 20);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 21);
	else
		ft_display(argv[1]);
	return (0);
}
