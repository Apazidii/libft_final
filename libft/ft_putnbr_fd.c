#include <unistd.h>
#include "libft.h"

void	func(long int n, int fd)
{
	char	c;

	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		num = num * -1;
		write(fd, "-", 1);
	}
	func(num, fd);
}
