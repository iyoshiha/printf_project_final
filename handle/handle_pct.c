/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_%.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:46:09 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 03:29:01 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printHexBase.h>
#include <ft_printf.h>
#include "../includes/printHexBase.h"
# include "../includes/ft_printf.h"

int		handle_pct(t_formatData* data) // pct = percentage
{
	int		printed_num;

	ft_putchar_fd(data->format[data->format_i], STDOUT_FILENO);
	return (printed_num = 1);
}
