#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    int nb;

    nb = n;
    if (nb == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        ft_putnbr_fd(147483648, fd);
    }
    else if (nb < 0)   
    {
        nb *= -1;
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(nb, fd);
    }
    else if (nb > 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
        ft_putchar_fd(nb + '0', fd);
}