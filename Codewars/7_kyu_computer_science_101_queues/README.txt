Computer Science 101 - #2 Queues

NOTE: The major content of this Kata is contained
within the "Lesson" and "Task" headings. Furthermore,
if you are already familiar with how a queue works,
you may simply skip to the "Task" heading which
contains all the instructions you need to complete
the Kata.
About this Kata Series

Learn fundamental computer science concepts that
every CS student must know in depth such as
algorithms, data structures and common data types
through implementing them from first principles.
Translators' Note

Translations to this Kata in languages that either
already have (a) built-in queue datatype(s) (e.g.
C++, C#, Java) or another datatype that can function
as a queue (e.g. JavaScript, Python, Ruby) will be
rejected without further reason.
Regarding Duplication

The author believes that this Kata does not
constitute a duplicate of Implementing a Queue -
Performance Version for the following reasons:

    It is harder to implement an efficient queue in C
    than in JavaScript due to the lack of built-ins
    and the need for manual memory management.
    It is impossible to translate that Kata into C
    without spoiling at least one possible
    implementation of an efficient queue.
    On the other hand, it is also impossible to
    translate that Kata into C without restricting
    the implementation of the queue to a particular
    approach, violating the statement "As long as the
    specifications are followed, any implementation
    is acceptable.".

If you disagree with the author regarding this issue,
please kindly leave a comment in the Discourse
explaining your view.
Lesson

Queues are a common data type with a variety of
applications such as breadth first search and process
queues. They are also typically provided as built-in
features or in standard libraries of many programming
languages for convenience (see std::queue, interface
java.util.Queue and System.Collections.Generic.Queue).

Queues are a first in, first out (FIFO) data type
that typically implement the following operations:

    enqueue - Adds an item to the end of the queue
    dequeue (not to be confused with deque) - Removes
    an item from the front of the queue. Again, most
    implementations return the item dequeued as well
    but those that don't are required to implement
    another operation "front" which simply returns
    the item at the front of the queue.
    is empty - Is the queue empty? This operation can
    be performed to prevent invalid operations such
    as dequeueing or inspecting the front item of an
    empty queues.

Queues have a very simple real-life analogy - just
think of how people queue in a straight line to buy
stuff in a grocery store! Of course, in real life
queues aren't perfect - for example someone may
attempt to cut a queue ;)

Some queue implementations define additional
operations as well such as "back" (obtaining the
most recently added item) and "size". Certain queue
implementations using a "circular" array of fixed
size may also define a utility method "is full"
indicating whether all entries in the underlying
array are already occupied. Furthermore, generalized
stack/queue implementations called double-ended
queues (aka deques) are also common which allows the
user to add and/or remove items from either end.

Like stacks, queues can also be implemented
efficiently using (singly) linked lists. One might
think that it would cause one of the enqueue/dequeue
operations to become inefficient as going in one
direction requires traversing the entire linked list
which is O(n) in time. However, by using the simple
trick of storing both the first and last node of our
linked list, traversal of the list is no longer
required for any of the key operations mentioned
above.

Task

In this Kata we will implement our queue (of
integers) as a (singly) linked list. A node of our
list is defined as follows:

typedef struct node {
  int data;
  struct node *next;
} Node;

And our queue is defined as a wrapper around our
list:

typedef struct {
  Node *front, *back;
} Queue;

Implement the following key operations:

    void queue_enqueue(Queue *queue, int data) -
    Queues data to the back of the queue
    int queue_dequeue(Queue *queue) - Removes an
    item from the front of the queue and returns its
    value
    int queue_front(const Queue *queue) - Returns
    the front item of the queue. This operation
    should not modify the queue.
    bool queue_is_empty(const Queue *queue) - Checks
    whether the queue is empty. This operation
    should not modify the queue.

All of these operations should execute in O(1) time
- there will be performance tests in the Submit
tests to enforce this.

Also take care to manage your memory properly -
there aren't any assertions to enforce this but it
is generally good practice to free memory that you 
no longer need and note that you may run out of 
memory in the performance tests if there is a 
serious memory leak.

You may assume that the "front" and "dequeue" 
operations will not be called on an empty queue 
provided that you implement all 4 key operations 
correctly. Apart from that, you should ensure that 
your solution does not cause any potential form of 
undefined behavior (such as dangling pointers); 
otherwise, there is no guarantee that the tests 
won't crash.

Link:
https://www.codewars.com/kata/5b26360bd74b5b2ea5000026