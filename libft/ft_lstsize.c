#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*now;

	i = 1;
	now = lst;
	while (now->next != NULL)
	{
		i++;
		now = now->next;
	}
	return (i);
}
