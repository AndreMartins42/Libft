
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;
    
    if (*lst == NULL)
    {
        *lst = new;
        new->next = NULL;
        return ;
    }
    tmp = *lst;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
    new->next = NULL;
}
