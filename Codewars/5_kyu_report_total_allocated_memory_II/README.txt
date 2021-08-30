Preface: In order to successfully complete this kata, you might want to
be familiar with the basics of memory allocation on the heap, static
memory and linked lists.

Challenge: You are tasked with implementing three functions:
mem_alloc(size_t size)
mem_free(void*)
get_currently_allocated_size(void).

mem_alloc(size_t) and mem_free(void*) should imitate the behavior of the
standard library functions malloc and free respectively. If you like,
you can have these standard library functions do the job. The challenge,
however, is, when get_currently_allocated_size is called, it should
return the size (in bytes) of memory allocated at the point of the call.
(Unlike in the original Report total allocated memory kata, where you
had to return the total size (in bytes) of memory allocated since the
beginning of program execution)

Example:

void *buffer = mem_alloc(sizeof(char));
if (buffer) {
  unsigned long long total_alloc; 
  
  total_alloc = get_currently_allocated_size();
  (void)printf("%llu\n", total_alloc);
  // outputs a value equal to: sizeof(char)

  mem_free(buffer);
  total_alloc = get_currently_allocated_size();
  (void)printf("%llu\n", total_alloc);
  // outputs: 0
}

Addendum: While you could make an efficient implementation by using a
hash-table, in this kata you are not required to be extremely efficient.
A basic linked list structure will suffice. Not to say this is the only
approach you could take. ;)

You may assume that your implementation is guaranteed to receive valid
parameters. Operations that are to be performed on your implementation
are going to be valid as well, i.e. if n is the size of bytes to be
allocated, then mem_alloc(n) will be followed by mem_free(n) at some
point within the same scope.

While not required, please make sure mem_free(NULL) doesn't crash the
program. :)

Link: https://www.codewars.com/kata/580e09841d90366054000146
