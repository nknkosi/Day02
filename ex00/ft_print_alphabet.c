
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 16:10:40 by nknkosi           #+#    #+#             */
/*   Updated: 2020/06/21 16:10:40 by nknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_alphabet(void)
{
	int i;

	i='a';
	while(i<= 'z')
	{
		ft_putchar(i);
		i++;
	}
}
