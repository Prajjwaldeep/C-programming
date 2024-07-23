#include <stdio.h> 
#include <stdlib.h>

    struct Node
    {
        int data;
        struct Node* next;
    };

    void print(struct Node* n)
    {
        while(n!=NULL)
        {
            printf("%d ",n->data);
            n=n->next;
        }
    }

    int main(){
    
    struct Node* head=NULL;
    struct Node* middle=NULL;
    struct Node* last=NULL;

    head=(struct Node*)malloc(sizeof(struct Node*));
    middle=(struct Node*)malloc(sizeof(struct node*));
    last=(struct Node*)malloc(sizeof(struct Node*));

    head->data=1;
    head->next=middle;

    middle->data=2;
    middle->next=last;

    last->data=3;
    last->next=NULL;

    print(head);

return 0;
}