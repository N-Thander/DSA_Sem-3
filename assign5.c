// Creation of linear linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int dt;
    struct node *lk;    
}ND;

int main(void)
{
    ND* h = NULL, *NW, *t;
    int x, ch;

    do
    {
        printf("Do you want to enter a list element \n1: yes\n0: no: ");
        scanf("%d", &ch);
        if (ch == 0)
        break;
        NW = (ND*)malloc(sizeof(ND));
        printf("Enter Data: ");
        scanf("%d", &x);
        NW -> dt = x;
        NW -> lk = NULL;
        if (h == NULL)
        {
            h = NW;
            t = h;
        }
        else
        {
            t -> lk = NW;
            t = t -> lk;
        }      
        
    } while (1);
    
    if (h == NULL)
    {
        printf("Empty List");
    }

    else
    {
        printf("Linked List: ");
        for (t = h; t != NULL; t = t -> lk)
        {
            printf("%d -> ", t->dt);
        }
        printf("\b\b. ");
    }
    printf("\n");

    return 0;
}
