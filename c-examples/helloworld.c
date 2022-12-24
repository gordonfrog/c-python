#include <stdio.h>

int main(void) {
   int foo = 22;
   int *fooAddress = &foo;
   printf("foo: %u\n", foo);
   printf("*fooAddress: %u\n", *fooAddress);
   printf("fooAddress: %p\n", fooAddress);
   printf("Hello, World!\n"); //printf instead of pintf
   return 0;
}
