/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 22:15:27 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/04 00:00:52 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	char_check_write00(int x, int y, int maxX, int maxY)
{
	if ((x == 1 && y == 1) || (x == maxX && y == 1)
		|| (x == 1 && y == maxY) || (x == maxX && y == maxY))
	{
		ft_putchar('o');
		if (x == maxX)
			ft_putchar('\n');
	}
	else if (((x == 1) || (x == maxX)) && (y > 1) && (y < maxY))
	{
		ft_putchar('|');
		if (x == maxX)
			ft_putchar('\n');
	}
	else if ((x > 1) && (x < maxX) && ((y == 1) || (y == maxY)))
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush00(int maxX, int maxY)
{
	int	x;
	int	y;

	y = 1;
	while (y <= maxY)
	{
		x = 1;
		while (x <= maxX)
		{
			char_check_write00(x, y, maxX, maxY);
			x++;
		}
		y++;
	}
}
