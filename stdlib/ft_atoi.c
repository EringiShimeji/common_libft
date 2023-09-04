/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatsuo <smatsuo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:39:35 by smatsuo           #+#    #+#             */
/*   Updated: 2023/09/05 03:47:15 by smatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	return (ft_strtol(str, NULL, 10));
}

//#include <stdlib.h>
//#include <stdio.h>
//void    test(char *s1)
//{
//    printf("ft_atoi(\"%s\") = ", s1);
//    printf("%d\n", ft_atoi(s1));
//    printf("atoi(\"%s\") = ", s1);
//    printf("%d\n", atoi(s1));
//}

//int main(){
//	test("+42lyon");
//}
