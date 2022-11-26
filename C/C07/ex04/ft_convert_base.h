/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:29:53 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/26 00:43:55 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_BASE_H
# define FT_CONVERT_BASE_H

int		id(char c, char *base);
int		is_sign(char c);
int		is_space(char c);
int		check_base(char *base);
int		len_nbr(int nbr_in, char *base_to);
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base_sp(int nbr_in, char *base, char *nbr_out);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

#endif
