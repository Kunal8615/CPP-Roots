typedef struct node
{
    int data;
    struct node *next;
} node;

struct node *head = NULL;

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("null\n");
}

struct node *create(struct node *head, int value){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    node *ptr;
   
    if (head == NULL)
    {   
        head = newNode;
        ptr=newNode;