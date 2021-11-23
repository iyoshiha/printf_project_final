/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:43 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/21 15:31:57 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printHexBase.h"
#include "../includes/ft_printf.h"

int		handle_s(t_formatData* data)
{
	char* str;
	int				printed_num;

	str = va_arg(data->ap, char*);
	ft_putstr_fd(str, STDOUT_FILENO);
	printed_num = ft_strlen(str);
	return (printed_num);
}
