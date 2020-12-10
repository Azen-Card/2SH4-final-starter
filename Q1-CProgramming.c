/* Question 1
 [C Programming]
 [30 Marks]
In this question, you are required to implement a linked list in C
The question has four parts, answer all of them in this same file*/
 
/*(a) [5 Marks] write structure Node that holds an integer value as well as a pointer to the next node*/
//Answer:
typedef structure{ 
    int value;
    structure node * next;
} node;



/*(b) [5 Marks] Write structure SLL that represents the singly linked list and holds a pointer to the first node in the list.*/
//Answer:
typedef structure{ 
    node * head;
} SLL;




/*(c) [10 Marks] write function searchList, that takes as input two parameters: the head of a linked list "head" and the integer value to search for "target" and 
returns:
1 if the target was found in the list
0, otherwise*/
//Answer:
int searchList(node* head, int target) 
{
    node* temp = head; 
    int ans = 0; 
    while (temp != NULL) 
    {
        if (temp->value == target) 
        {
            ans = 1; 
        }
        temp = temp->next; 
    }
    return ans;
}

  
/*(d) [10 Marks] test your function in main by creating a list of 10 nodes and then call the searchList function to search for a certain value, make sure you check 
the correctness of the returned value from the function by comparing it against what you expect. */
//Answer:


int main(){
	 node * head = NULL; 
    head = (node *) malloc(sizeof(node));
    node * temp = head; 
    for (int i = 0; i < 10; i++) 
    {
        temp->value = i; 
        if (i != 9) 
        {
            temp->next = (node *) malloc(sizeof(node));
        }
        temp = temp->next; 
    }
    node * temp1 = head; 
    while(temp1 != NULL)
    {
        printf("%d, ", temp1->value); 
        temp1 = temp1->next;
    }
    printf("\n");
    int ans = searchList(head, 8);
    printf("\n");
    printf("searching for: %d, answer = %d\n", 8, ans); //check for 8
    ans = searchList(head, 0);
    printf("searching for: %d, answer = %d\n", 0, ans); //check for 0
    ans = searchList(head, 10);
    printf("searching for: %d, answer = %d\n", 10, ans); //check for 10    
    ans = searchList(head, 9);
    printf("searching for: %d, answer = %d\n", 9, ans); //check for 9
    return 0;
}
