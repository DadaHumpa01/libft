/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:03:44 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 17:42:12 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char* str)
{
    int     res;
    int     i;
    int     sing;

    sing = 1;
    res = 0;
    i = 0;
    while (str[i] ==  ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        sing = sing * (-1);
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sing);
}