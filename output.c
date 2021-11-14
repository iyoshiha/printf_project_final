/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:22:12 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 15:03:05 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"

void	outputAndCount(t_formatData*	data)
{
	INDEX = 0;
	while (NOTEOS((FORMAT[INDEX])))
	{
		if (FORMAT[INDEX] == '%')
		{
			INDEX++;
			convertAndCount(data);
		}
		else
		{
			ft_putchar_fd(FORMAT, STDOUT_FILENO);
			LEN++;
		}
		INDEX++;
	}
	return (0);
}
