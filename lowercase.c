#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void inspect(char s[]) {
  int index = 0;
  while(s[index] != 0) {
    printf("%c (%hhu) ", s[index], s[index]);
    index += 1;
  }
  printf("\n");
}

char lower(char c) {
//  if(c >= 65 && c <= 91) {
  if(c >= 'A' && c <= 'Z') {
    return c + 32;
  }
  else {
    return c;
  }
}

// Takes a C string and makes all the uppercase characters be lowercase
// Capital A = 65, lowercase a = 97
// Capital B = 66, lowercase b = 98
// Capital C = 67, lowercase c = 99
// ...
// Capital Z = 91, lowercase z = 123
void lowercase(char s[]) {
  int index = 0;

  while(s[index] != 0) {
    s[index] = lower(s[index]);
    index += 1;
  }
}

int main() {
  char abc[] = "ABC";
  lowercase(abc);
  inspect(abc);

  char mixed[] = "Hello A\0aron!";
  lowercase(mixed);
  inspect(mixed);






}
