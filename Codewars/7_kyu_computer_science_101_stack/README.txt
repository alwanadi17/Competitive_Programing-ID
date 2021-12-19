Computer Science 101 - #1 Stacks

NOTE: The major content of this Kata is contained within the
"Lesson" and "Task" headings. Furthermore, if you are already 
familiar with how a stack works, you may simply skip to the "Task"
heading which contains all the instructions you need to complete 
the Kata.
About this Kata Series

Learn fundamental computer science concepts that every CS student 
must know in depth such as algorithms, data structures and common 
data types through implementing them from first principles.
Translators' Note

Translations to this Kata in languages that either already have a 
built-in stack datatype (e.g. C++, C#, Java) or another datatype 
that can function as a stack (e.g. JavaScript, Python, Ruby) will 
be rejected without further reason.
Lesson

Stacks are everywhere - they can be found in programs involving
symbol balancing, depth first search and backtracking just to name 
a few. Hell, even recursion depends on stacks! In fact, they are
so common that any sane programming language would provide at
least one built-in datatype that can act as a stack. For example, 
C++ has std::stack, Java has java.util.Stack and C# has 
System.Collections.Generic.Stack. So, what are they?

A stack is a last in, first out (LIFO) data type that supports at
least these three operations:

    Push - Adds an item to the top of the stack
    Pop - Removes an item from the top of the stack. Most
    implementations return the item that was popped but those 
    that don't must implement another operation "peek" that 
    simply returns the top item of the stack.
    Is empty - Is the stack empty? This operation is crucial in 
    ensuring that the user of the stack doesn't accidentally pop 
    or peek at an empty stack (which doesn't make sense).

An analogy for understanding stacks could be a stack of documents
on your office desk. It is trivial to place a new document on top
of your existing stack and it also requires minimal effort to 
view the top document and/or remove it from the stack for 
processing; however, it is no easy job to try to search for a 
document located somewhere in the middle of the stack and is 
definitely even harder if you want to remove a document from the 
middle or slip a new document there.

Now you should know what a stack is but knowing how to implement 
it is something else entirely. Fortunately, it turns out that one 
of the simplest data structures in existence is perfectly suited 
for implementing stacks - enter the linked list. Such a simple 
data structure is rarely a good choice for implementing common 
data types due to its traversal restrictions which translates to 
inefficiency (see this Kumite which explains how an associative 
array based on linked lists is extremely inefficient) but a stack 
implemented using it can achieve constant O(1) time for all of 
its key operations (push, pop [, peek] and "is empty") mentioned 
above and never occupies more memory than it needs. It is up to 
you to figure out in this Kata how this can be achieved.

Before we end this lesson, here's something for you to think 
about: if we implement our stack as a linked list, each node 
stores not only an item in the stack but also a reference to the 
next node which means that a significant portion of the memory 
allocated to our stack goes to storing these references instead 
of storing the actual items. In contrast, a stack implemented 
using a dynamically sized array need only allocate memory for 
storing the items in the stack (perhaps including a trivial, 
constant amount of memory for storing the current size and 
capacity of the stack) while retaining the benefit of achieving 
constant time for all of its operations. So, in this sense, it 
would appear that implementing a stack as a dynamic array is one 
better than a linked list implementation since less memory is 
used. Is this actually true and why?
Task

In this Kata we will be implementing our stack (of integers) as a
linked list where a node of our linked list is defined as follows:

typedef struct node {
  int data;
  struct node *next;
} Node;

Our actual stack is then defined as a wrapper type around our
linked list:

typedef struct {
  Node *root;
} Stack;

By defining our stack as a wrapper type around the linked list 
instead of directly exposing the linked list to the user of the 
stack, we can 1) reserve NULL for specifying an invalid reference
to a Stack instead of an empty stack and 2) modify a stack by 
object reference instead of passing in the address of the 
variable holding the stack.

Implement the following key operations of the stack:

    void stack_push(Stack *stack, int data) - Pushes the data 
    onto the top of the stack, allocating memory to the stack if 
    necessary.
    int stack_pop(Stack *stack) - Pops the top item of the stack 
    and returns it. It should also ideally free memory previously
    allocated to the stack if possible to avoid memory leaks - 
    the tests will test for very large stacks so you may run out 
    of memory if you forget to do so.
    int stack_peek(const Stack *stack) - Returns the top item of 
    the stack. This operation should not modify the stack.
    bool stack_is_empty(const Stack *stack) - Checks whether the 
    stack is empty. This operation should not modify the stack.

All four of these key operations should operate in O(1) time. 
There will be performance tests in the Submit tests to enforce 
this.

Also take care to manage your memory properly - there aren't any 
assertions to enforce this but it is generally good practice to 
free memory that you no longer need and note that you may run 
out of memory in the performance tests if there is a serious 
memory leak.

You may assume that the peek and pop operations will never be 
called on an empty stack provided that you implement all key 
operations correctly. Apart from that, you should ensure that 
your solution does not cause any potential form of undefined 
behavior (such as dangling pointers); otherwise, there is no 
guarantee that the tests won't crash.


Link: https://www.codewars.com/kata/5b24bcecd74b5be066000054
