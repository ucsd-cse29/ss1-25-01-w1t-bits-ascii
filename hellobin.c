#include <stdio.h>

int main() {
  char hello[] = "Hello!";
  char hellonum[] = { 72,        101,       108,       108,       111,       33,       0 };
  char hellobin[] = { 0b1001000, 0b1100101, 0b1101100, 0b1101100, 0b1101111, 0b100001, 0b0 };

  puts(hello);
  puts(hellonum);
  puts(hellobin);

  printf("%c %c %c\n", hello[0], hello[1], hello[2]);

  printf("%d %d %d\n", hello[0], hellonum[0], hellobin[0]);
  printf("%c %c %c\n", hello[0], hellonum[0], hellobin[0]);

  printf("%d=%c %d=%c %d=%c\n", hello[0], hello[0], hello[1], hello[1], hello[2], hello[2]);

  printf("Printing literal 72 as a char: %c\n", 72);
  printf("Printing literal 'H' as a decimal: %d\n", 'H');

  // "printf formatting characters" is a useful web search to see other options


  // What is the length of hello, hellonum, and hellobin?
  // EVERYONE give me an answer for participation here

  // Most common answer: 6, 7, 7


  // Two definitions:
  // - # of bytes used by hello, hellonum, hellobin
  //    All of them use 7 bytes (you can't see the 7th in hello's declaration)
  // - length of hello, hellonum, hellobin when interpreted as strings
  //    All of them are length 6 strings (6 characters of string data: Hello!)

  // Definition: C strings
  // A C string is an array of characters that is “null-terminated”, which is
  // a byte with exactly the value 0, or 0b00000000

  // Functions like puts print character data until reaching the null terminator
  // String constants like "Hello!" are always interpreted as having an extra 0
  // byte at the end

}
