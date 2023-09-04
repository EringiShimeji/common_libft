/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatsuo <smatsuo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:24:07 by smatsuo           #+#    #+#             */
/*   Updated: 2023/09/04 20:29:35 by smatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	if (dest == NULL || src == NULL)
		return (NULL);
	i = n;
	while (i > 0)
	{
		i--;
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}
