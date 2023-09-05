/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatsuo <smatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:28:03 by smatsuo           #+#    #+#             */
/*   Updated: 2023/09/05 22:48:11 by smatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa(long long num)
{
	char		digit[2];
	char		*rest;
	char		*tmp;

	digit[0] = num % 10 + '0';
	digit[1] = 0;
	if (num < 10)
		return (ft_strdup(digit));
	rest = ft_lltoa(num / 10);
	if (rest == NULL)
		return (NULL);
	tmp = rest;
	rest = ft_strjoin(rest, digit);
	free(tmp);
	return (rest);
}

char	*ft_itoa(int n)
{
	char	*s;
	char	*tmp;

	if (n < 0)
	{
		s = ft_lltoa((long long)n * -1);
		if (s == NULL)
			return (NULL);
		tmp = s;
		s = ft_strjoin("-", s);
		free(tmp);
		return (s);
	}
	return (ft_lltoa(n));
}
