// name: Nan Chen
// email: chen.nan2@northeastern.edu
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node_t;

typedef struct list{
    struct node* head;
}List;

/*-----creating the nodes----------*/
node_t* newNode(int num)
{
    node_t* p_newNode = malloc(sizeof(node_t));
    if (p_newNode == NULL) {
        printf("Memory is not allocated successfully.");
        return NULL;
    }
    p_newNode->data = num;
    p_newNode->next = NULL;
    return p_newNode;
}
/*---creating linked list----*/
List* init_LL(){
    List* p_list = malloc(sizeof(List));
    if (p_list == NULL) {
        printf("Memory is not allocated successfully.");
        return NULL;
    }
    p_list->head = NULL;
    return p_list;
}

/*---Insert the nodes at the begining of the list---*/
void insertFirst(List* l, int data){
    if (l == NULL) {
        return;
    }
    node_t* p_node = newNode(data);
    if (p_node == NULL) {
        return;
    }
    if (l->head == NULL) {
        l->head = p_node;
    }else{
        p_node->next = l->head;
        l->head = p_node;
    }
    return;
}

/*----display the output--------*/
void display(List* l)
{
    node_t *temp;
    temp=l->head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

/*-------reversing the linked list using recursion------*/
void reverse(List* l, node_t* ptr)
{
    if (l == NULL) {
        return;
    }
    if (ptr->next == NULL) {
        (l-> head)->next = NULL;
        l-> head = ptr;
        return;
    }
    node_t* temp = ptr->next;
    reverse(l, ptr->next);
    temp->next = ptr;
}

/*----Free the nodes-----*/
void freenode(List* l){
  node_t *temp;
    while(l->head)
    {
        temp=l->head->next;
        free(l->head);
        l->head=temp;
    }
    
}
/*-----Main program--------------*/
int main()
{
    List *list=init_LL();
    

    insertFirst(list,44);
    insertFirst(list,33);
    insertFirst(list,22);
    insertFirst(list,11);
    display(list);
    reverse(list,list->head);
    display(list);
    
    freenode(list);
    free(list);
    return 0;
}
