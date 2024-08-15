/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_number.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirac <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:27:40 by mirac             #+#    #+#             */
/*   Updated: 2024/08/15 21:39:08 by mirac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i >= 97 && i <= 122)
	{
		write(1, &i, 1);
		i--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
