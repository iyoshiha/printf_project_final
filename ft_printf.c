/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:01:04 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 21:43:05 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"

int	ft_printf(const	char* format, ...)
{
	t_formatData	entity;
	t_formatData*	data;

	data = &entity;
	_PF_FORMAT = format;
	_PF_LEN_PRINTED = 0;
	va_start(_PF_AP, format);
	outputAndCount(data);
	va_end(_PF_AP);
	return (data->printed_len);	// excluding the null byte ('\0') used to end output to strings.
						 	// negative number returned when error happened.
}
