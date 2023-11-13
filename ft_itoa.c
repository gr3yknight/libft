/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:51:34 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/13 02:51:42 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	ft_counter;

	ft_counter = 0;
	if (n < 0)
		ft_counter += 1;
	while (n != 0)
	{
		n /= 10;
		ft_counter++;
	}
	return (ft_counter);
}

static char	*ft_print(char *str, int n, int ft_counter)
{
	int	i;

	i = ft_counter - 1;
	while (i > 0)
	{
		if (n < 0)
		{
			str[0] = '-';
			n *= -1;
		}
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		ft_counter;

	ft_counter = ft_count(n);
	str = malloc (sizeof(char) * (ft_counter + 1));
	if (str == NULL)
		return (NULL);
	str[ft_counter] = '\0';
	str = ft_print(str, n, ft_counter);
	return (str);
}

int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}