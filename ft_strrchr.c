/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 01:33:39 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/05/29 15:45:53 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		count;

	count = ft_strlen(str);
	while (count >= 0)
	{
		if (str[count] == (char)c)
			return ((char *)&str[count]);
		count--;
	}
	return (NULL);
}
