#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*now;

	now = lst;
	while (now->next != NULL)
		now = now->next;
	return (now);
}
