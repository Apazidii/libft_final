#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*now;

	now = lst;
	while (now->next != NULL)
	{
		f(now->content);
		now = now->next;
	}
}
