#include "../libft.h"

t_list  *ft_lstnew(void *content)
{
        t_list  *new_node;

        new_node = malloc(sizeof(t_list));
        if (!new_node)
                return (NULL);
        new_node->content = content;
        new_node->next = NULL;
        return (new_node);
}

/*
int   main(void)
{
        t_list  *head = NULL;
        t_list  *current = NULL;
        char    content_1 = 'A';
        char    content_2 = 'B';
        char    content_3 = 'C';

        head = ft_lstnew(&content_1);
        current = head;
        current->next = ft_lstnew(&content_2);
        current = current->next;
        current->next = ft_lstnew(&content_3);
        current = head;
        printf("List:\n");
        while (current)
        {
                printf("'%c' -> ", *(int *)current->content);
                current = current->next;
        }
        printf("NULL\n");
        while (head != NULL)
        {
                current = head;
                head = head->next;
                free(current);
        }
        return (0);
}
*/