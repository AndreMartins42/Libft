
int ft_lstsize(t_list *lst)
{
    int count;
    t_list  *tmp;

    count = 0;
    tmp = lst;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return (count);
}
