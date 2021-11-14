/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:01:04 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 10:09:23 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"

int	ft_printf(const	char* format, ...)
{
	t_formatData*	data;

	data = malloc(sizeof(t_formatData));
	data->printed_len = 0;
	va_start(data->ap, data->format);
	outputAndCount(data);
	va_end(data->ap);
	return (data->printed_len);	// excluding the null byte ('\0') used to end output to strings.
						 	// negative number returned when error happened.
}
