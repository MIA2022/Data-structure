/*Nan Chen*/
/* chen.nan2@northeastern.edu*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node
{
    char name[20];
    int age;
    char address[100];
    int reg;
    int priority;
    struct node *next;
}node_t;

/* Inserting patients in the queue based on priority*/
node_t *insert(struct node *front)
{

node_t *p,*temp;
//char name[20],address[100];
temp=(node_t*)malloc(sizeof(node_t));
printf("Enter patient Name:");
scanf("%s", temp->name);
printf("Enter the patient's age:");
scanf("%d",&(temp->age));
printf("Enter the address:");
scanf("%s",temp->address);
printf("Enter the reg no:");
scanf("%d",&(temp->reg));
printf("Enter the priority:");
scanf("%d",&(temp->priority));
int pri=temp->priority;

    if (front == NULL) {
        return temp;
    }
    if (front != NULL && front->priority < pri) {
        temp->next = front;
        return temp;
    }
    p = front;
    while (front != NULL && front->priority > pri) {
        
        front = front->next;
    }
    temp->next = front->next;
    front->next = temp;
    return p;
}

/* Delete the patient who is at the front*/
node_t *delete(struct node *front)
{
    if (front == NULL) {
        printf("No patient in the queue.");
        return NULL;
    }
    return front->next;
}

/* To display the patients records */
void display(node_t *front)
{
node_t *temp=front;
if(front==NULL)
    printf("\nTHERE IS NO PATIENT");
else
{
printf("\nPatients waiting in the queue are:\n");
while(temp!=NULL)
{
printf("The name of patient is:%s\n",temp->name);
printf("The age of patient is:%d\n",temp->age);
printf("The address of patient is : %s\n",temp->address);
printf("---------------------------------------------------\n");
temp=temp->next;
}
}
return;
}
/*---Deallocate all nodes------------*/
void freenode(node_t *temp)
{
if(temp!=NULL){
freenode(temp->next);
free(temp);
}
}
        /*-----------------Main program---------------------------*/
        int main()
        {
        node_t *front=NULL;
        int option;
            do{

            printf("\t\t\t Hospital emergency room system\n");
            printf("\t\t\t1.ADD A PATIENT\n");
            printf("\t\t\t2.DELETE A RECORD\n");
            printf("\t\t\t3.PATIENTS WAITING IN THE QUEUE\n");
            printf("\t\t\tEnter your choice:");
            scanf("%d",&option);
            switch(option)
            {
            /*Select 1 to insert elements in the priority queue*/
            case 1:
            front= insert(front);
            break;
             /* Select 2 to delete the elements at the front of priority queue*/
            case 2:
            front= delete(front);
            break;
            /* Select 3 To display the elements present in the priority queue*/
            case 3:
            display(front);
            break;

            }
            }
            while(option!=3);
            freenode(front);
            return 0;

            }
