#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void    *content;
    struct s_list  *next;
}              t_list;


t_list *ft_lstnew(void *content)
{
    t_list *node;
    node = malloc (sizeof(t_list));
    if (!node) 
        return NULL;
    node->content  = content;
    return node;   
}


void *get_content(t_list *node)
{
    if (!node)
        return NULL;
    return node->content;
}

int main()
{
    int a = 43;
    t_list *node =ft_lstnew(&a);
    printf("%d\n",(*(int *)get_content(node)));
    (*(int *)get_content(node)) = 42;
        printf("%d\n",(*(int *)get_content(node)));
}