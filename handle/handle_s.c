/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:43 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 16:30:23 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

void	handle_s(t_formatData* data)
{
	char* str;

	str = va_arg(data->ap, char);
	ft_putstr_fd(str, STDOUT_FILENO);
	LEN_PRINTED += ft_strlen(str);
	return ;
}
