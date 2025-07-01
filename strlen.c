#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char hello[] = "Hello class!";
  char apple[] = "apple";
  char hello_0[] = "Hello\0class!"; // \0 is the 0 byte written in a string literal

  char has_a_0[] = "Let's count 0 12345";
  puts(has_a_0);

  char has_a_NUL[] = "Let's count \0 12345";
  puts(has_a_NUL);

  char writing_about_NUL[] = "To terminate a string, use \0 as null-terminator";
  puts(writing_about_NUL);

  char writing_about_NUL2[] = "To terminate a string, use \\0 as null-terminator";
  puts(writing_about_NUL2);

  printf("%ld\n", strlen(hello)); // %ld means "long decimal"
  printf("%ld\n", strlen(apple));

  printf("%s, length: %ld\n", hello_0, strlen(hello_0));  // %s means "print as string"

  hello[7] = 0;     // Changes hello so the contents is "Hello c\0ass!"
                    // Has the effect of changing where the string "ends"

  printf("%s, length: %ld\n", hello, strlen(hello));

  return 0;
}
