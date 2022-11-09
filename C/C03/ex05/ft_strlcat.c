/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:05:38 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/09 21:54:04 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	ldst;
    unsigned int	left;

    ldst = 0;
    left = size;
    while (dest[ldst] && left--)
        ldst++;
    
    // The algo revolves arround how much size left
    // 
}