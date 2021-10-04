/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:10:18 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/04 02:15:42 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	x = 4;
	y = 1;
	rush00(x, y);
	rush01(x, y);
	rush02(x, y);
	rush03(x, y);
	return (0);
}
