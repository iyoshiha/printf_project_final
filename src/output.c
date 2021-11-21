/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:22:12 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/21 15:11:20 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
# include "../includes/libft.h"

void	outputAndCount(t_formatData*	data)
{
	data->format_i = 0;
	while (data->format[data->format_i] != '\0')
	{
		if (data->format[data->format_i] == '%')
		{
			_NEXT data->format_i++;
			data->printed_len += convertAndCount(data);
		}
		else
		{
			ft_putchar_fd(data->format[data->format_i], STDOUT_FILENO);
			_ADD data->printed_len++;
		}
		_NEXT data->format_i++;
	}
}
