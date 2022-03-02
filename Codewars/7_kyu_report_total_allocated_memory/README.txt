 Preface: In order to successfully complete this
 kata, you might want to be familiar with the basics
 of the nature of the static memory and standard
 library.

Challenge: Implement mem_alloc and its companion
function report_total_allocated so that mem_alloc
allocates as much memory as requested by the caller
or returns a NULL if allocation failed, and
report_total_allocated reports the total amount of
memory successfully allocated by mem_alloc since the
beginning of the program execution.

Example:

void *buffer = mem_alloc(sizeof(char));
if (buffer) {
  unsigned long long total_alloc =
  report_total_allocated();
  (void)printf("%llu\n", total_alloc);
  // outputs a value equal to: sizeof(char)
  
  free(buffer);
}

,

// report_total_allocated should ignore de-allocations
// and instead accummulate all successful memory
allocations
// to report them when requested.

void *buffer = mem_alloc(sizeof(char));
free(buffer);

void *another_buffer = mem_alloc(sizeof(int));
free(another_buffer);

unsigned long long total_alloc =
report_total_allocated();
(void)printf("%llu\n", total_alloc);
// outputs a value equal to: sizeof(char) + sizeof
int)

Link:
https://www.codewars.com/kata/5809cbc9c47d322fbc0001ec