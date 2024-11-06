typedef struct LinkedList
{
    int value;
    LinkedList* next;
} LinkedList;

LinkedList* createLinkedNode(int value);
void addNode(LinkedList* head, int value);
void printList(LinkedList* head);
LinkedList* deleteNode(LinkedList* head);