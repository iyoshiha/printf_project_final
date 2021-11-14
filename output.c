/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:22:12 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 11:14:31 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"

void	outputAndCount(t_formatData*	data)
{
	data->format_i = 0;
	while (NOTEOA((data->format[data->format_i])))
	{
		if (data->format[data->format_i] == '%')
			conv();
		else
		{
			ft_putchar_fd(data->format, STDOUT_FILENO);
			data->printed_len++;
		}
		i++;
	}
	return (0);
}
