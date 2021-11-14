/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_%.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:46:09 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 15:59:12 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

void	handle_pct(t_formatData* data) // pct = percentage
{
	char chr;

	chr = '%';
	ft_putchar_fd(chr, STDOUT_FILENO);
	ADD LEN_PRINTED++;
	return ;
}
