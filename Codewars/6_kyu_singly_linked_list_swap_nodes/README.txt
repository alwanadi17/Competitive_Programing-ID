The LinkedList elements you'll be using are simply a pointer to a 
Node element defined below or NULL if empty (you shouldn't need 
any list overhead in this kata)

typedef struct Node {
    int          value;
    struct Node  *next;
} Node, *LinkedList;

Task

In this kata, you'll need to write a function

int swapNodes(LinkedList *listPointer1, unsigned int index1, 
LinkedList *listPointer2, unsigned int index2)

that swaps the index1th Node of list1 and the index2th Node of 
list2 (0 based).
With list1 the LinkedList pointed to by listPointer1 and list2 
pointed to by listPointer2.

The function evaluates to true (1) when the swap was made and 
false (0) when an index is out of range.
Notes

listPointer1 and listPointer2 are pointers to LinkedList, so a 
pointer to a pointer to a Node (that's necessary so you can swap 
the first node).
As mentionned above, you can swap the first node of a list 
because they're passed by reference, but you can't swap the 
terminating NULL node as it would cause unexpected behaviour and 
a potential memory leak.

    **/!\** This is a kata about handling pointers! Therefore you 
    can only modify the next property of the nodes! (Do not 
    modify their value) **/!\**

Pseudo-code Examples

list1 = linked_list(1 -> 2 -> 3 -> 4)
list2 = linked_list(5 -> 6 -> 7 -> 8)

swap_node(&list1, 2, &list2, 0)
>> true

print(list1)
>> linked_list(1 -> 2 -> 5 -> 4)
print(list2)
>> linked_list(3 -> 6 -> 7 -> 8)

list1 = linked_list(1 -> 2 -> 3)
list2 = linked_list(4 -> 5 -> 6)

swap_node(&list1, 1, &list2, 3)
>> false  // (index 3 of list2 does not exist)

print(list1)
>> linked_list(1 -> 2 -> 3)
print(list2)
>> linked_list(4 -> 5 -> 6)

If that may help, you have a preloaded function char* 
listToString(LinkedList list), to help you visualise the linked 
lists.

Link: https://www.codewars.com/kata/58d91d5f024c724b50000300
