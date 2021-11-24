/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:39:14 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 04:32:56 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# define ERROR -1

typedef struct s_formatData
{
	const char	*format;
	int			printed_len;
	int			format_i;
	va_list		ap;
}				t_formatData;

int		ft_printf(const char	*format, ...);
void	outputAndCount(t_formatData	*data);
int		convertAndCount(t_formatData	*data);

#endif
