
void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *tmp;

    if (lst == NULL)
        return ;
    tmp = lst;
    if (f != NULL)
    {
        while (tmp != NULL)
        {
            f(tmp->content);
            tmp = tmp->next;
        }
    }
}
