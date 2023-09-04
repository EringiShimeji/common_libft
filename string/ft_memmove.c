/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatsuo <smatsuo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:24:07 by smatsuo           #+#    #+#             */
/*   Updated: 2023/09/05 00:46:32 by smatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	if (dst == NULL || src == NULL)
		return (NULL);
	while (len > 0)
	{
		len--;
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}
