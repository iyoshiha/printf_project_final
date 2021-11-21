/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   component.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 06:11:45 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/21 13:48:35 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PHEX_CAPITAL 1
#define PHEX_LOWERCASE 0
# define PHEX_LEN_OF_0X	2

int		printAddress(void* ptr);
int		printHexBase(long long unsigned int decimal, char flag);
int		replace_ten2a(int num);
int		replace_ten2a_capital(int num);
int		print0(void);
int		print_unsigned_int_hex(unsigned int decimal);
int		printDecimalBase(int n, int fd);
int		printUnsignedDecimal(unsigned int n, int fd);
