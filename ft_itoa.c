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

static char	*is_negative(char *str, int n, int ft_counter)
{
	int	i;

	i = ft_counter - 1;
	n *= -1;
	while (i > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	str[i] = '-';
	return (str);
}

static char	*is_positive(char *str, int n, int ft_counter)
{
	int	i;

	i = ft_counter - 1;
	while (i >= 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (str);
}

static char	*is_edge(char *str, int n, int ft_counter)
{
	int		max;
	int 	min;
	int		i;

	i = 0;
	max = 2147483647;
	min = -2147483648;
	if (n == max)
	{
		n = 147483647;
		str = is_positive(str, n, ft_counter);
		str[i] = '2';
	}
	else if (n == min)
		{
			i = 2;
			n *= -1;
			n = 147483648;
			str += i;
			str = is_positive(str, n, ft_counter); 
			str[--i] = '2';
			str[--i] = '-';
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
	if (n == 0)
		*str = 0 + '0';
	if (n < 0)
		str = is_negative(str, n, ft_counter);
	if (n > 0)
		str = is_positive(str, n, ft_counter);
	if (n == 2147483647 || n == -2147483648)
		str = is_edge(str, n, ft_counter);
	return (str);
}
