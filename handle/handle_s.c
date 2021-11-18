/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:43 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 22:03:38 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../component/component.h"
#include "../tmp.h"

void	handle_s(t_formatData* data)
{
	char* str;

	str = va_arg(data->ap, char);
	ft_putstr_fd(str, STDOUT_FILENO);
	_PF_LEN_PRINTED += ft_strlen(str);
	return ;
}
