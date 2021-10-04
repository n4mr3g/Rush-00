/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 22:15:27 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/04 02:14:56 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	char_check_write03(int x, int y, int maxX, int maxY)
{
	if ((x == 1) && ((y == 1) || (y == maxY)))
		ft_putchar('A');
	else if ((x == maxX) && ((y == maxY) || (y == 1)))
		ft_putchar('C');
	else if (((x < maxX) && (x > 1)) && (y < maxY) && (y > 1))
		ft_putchar(' ');
	else
		ft_putchar('B');
	if (x == maxX)
		ft_putchar('\n');
}

void	rush03(int maxX, int maxY)
{
	int	x;
	int	y;

	y = 1;
	while (y <= maxY)
	{
		x = 1;
		while (x <= maxX)
		{
			char_check_write03(x, y, maxX, maxY);
			x++;
		}
		y++;
	}
}
