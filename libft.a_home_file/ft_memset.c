/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:09:55 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/18 12:10:04 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_memset(void *b, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}