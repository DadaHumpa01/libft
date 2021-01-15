/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 17:25:11 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 17:25:12 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *heystack, const char *needle, size_t len)
{
    size_t i;
    size_t x;

    x = 0;
    i = 0;
    if (needle[x] == 0)
      return ((char *)heystack);
    while (i <= len)
    {
        x = 0;
        while ((heystack[i + x] == needle[x] || !needle[x]) && (i + x) < len + 1)
        {
          if (x == ft_strlen(needle))
            return ((char *)heystack + i);
          x++;
        }
        i++;
    }
    return (NULL);
}
