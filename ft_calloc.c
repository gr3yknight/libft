/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:15:06 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 17:17:32 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = (char *) malloc (nmemb * size);
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
