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

static char	*is_edge(int n)
{
	char	*str;
	int		max;
	int 	min;

	max = 2147483647;
	min = -2147483648;
	if (n == max)
		str = x;
	if (n == min)
		str = x;
	if (n == 0)
		str = 0 + 48;
	return (str);
}

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

char	*ft_itoa(int n)
{
	char	*str;
	int		ft_counter;

	ft_counter = ft_count(n);
	str = malloc (sizeof(char) * (ft_counter + 1));
	if (str == NULL)
		return (NULL);
	str[ft_counter] = '\0';
	if (n < 0)
		str = is_negative(str, n, ft_counter);
	if (n > 0)
		str = is_positive(str, n, ft_counter);
	if (n == 0)
		str = is_edge(n);
	return (str);
}

int main()
{
	printf("[%s]\n", ft_itoa(0));
	return (0);
}