#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	l = ft_lstlast(*lst);
	l->next = new;
}
