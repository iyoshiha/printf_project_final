/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:39:14 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 15:44:21 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMP_H
# define TMP_H
#
# include <stdarg.h>
# include "hhhh/libft.h"
#
#define NOTEOS(chr)	((chr=='\0')==0)
# define FORMAT	data->format
# define INDEX	data->format_i
# define LEN_PRINTED	data->printed_len
# define CONVERSION_MATCHED(conv)	((data->format[data->format_i]) == ('conv')) handle_conv();
# define CONVERSION_MATCHED_X 		(data->format[data->format_i]) == ('X') handle_X()
# define NEXT
# define ADD



typedef struct	s_formatData
{
	const char* format;
	int			printed_len;
	int			format_i;
	va_list		ap;
}				t_formatData;



void	outputAndCount(t_formatData* data);



#endif
