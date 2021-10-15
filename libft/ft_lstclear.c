#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*nextl;

	now = *lst;
	while (now->next != NULL)
	{
		del(now->content);
		nextl = now->next;
		free(now);
		now = nextl;
	}
	del(now->content);
	free(now);
}
