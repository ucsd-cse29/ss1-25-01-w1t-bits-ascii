#include <stdio.h>

int main() {
  char hello[] = "Hello!"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };

  puts(hello);   // puts is a function that takes a string (?) and prints it
  puts(hello2);  // Why is this line printing "Hello!" instead of some numbers
}
