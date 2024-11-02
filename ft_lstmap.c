
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *new;
    t_list  *node;
    void    *new_content;

    new = NULL; //lista inicializou vazia
    while (lst != NULL)
    {
        new_content = f(lst->content);
        node = ft_lstnew(new_content);
        if (node == NULL)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, node);
        lst = lst->next;
    }
    return (new);
}
