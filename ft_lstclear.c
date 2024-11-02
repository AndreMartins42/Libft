
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (*lst == NULL)
        return;
    while (*lst != NULL)
    {
        ft_lstdelone(*lst, del); // nó atual
        *lst = (*lst)->next; //dereferencia (*lst)tem precedencia mais alta que (->)
    }
    *lst = NULL;
}