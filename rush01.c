/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 22:15:27 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/04 01:53:38 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	char_check_write01(int x, int y, int maxX, int maxY)
{
	if (((x == 1) && (y == 1)) || ((x == maxX)
			&& (y == maxY) && (maxX != 1) && (maxY != 1)))
		ft_putchar('/');
	else if (((x == maxX) && (y == 1) && (maxX != 1))
		|| ((x == 1) && (y == maxY)))
		ft_putchar('\\');
	else if (((x < maxX) && (x > 1)) && (y < maxY) && (y > 1))
		ft_putchar(' ');
	else
		ft_putchar('*');
	if (x == maxX)
		ft_putchar('\n');
}

void	rush01(int maxX, int maxY)
{
	int	x;
	int	y;

	y = 1;
	while (y <= maxY)
	{
		x = 1;
		while (x <= maxX)
		{
			char_check_write01(x, y, maxX, maxY);
			x++;
		}
		y++;
	}
}
