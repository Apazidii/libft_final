#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*now;
	t_list	*nlst;
	t_list	*res;

	now = lst;
	nlst = ft_lstnew(f(now->content));
	res = nlst;
	nlst = nlst->next;
	now = now->next;
	while (now->next != NULL || now != NULL)
	{
		nlst = ft_lstnew(f(now->content));
		if (nlst == NULL)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&res, del);
			break ;
		}
		nlst = nlst->next;
		now = now->next;
	}
	return (res);
}
