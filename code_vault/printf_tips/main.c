#include <stdio.h>
#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include <string.h>
#include "get_string_length.h"
// Morty Hawk 2023-03-29 Wed 22:54

int main(int argc, char **argv) {
    int a = 255;
    printf("%15d\n", a);

    float f = 2.55;
    printf("%15.1f\n", f);

    unsigned int ui = 747;
    printf("%15u\n", ui);

    // 64bits long long int
    long long llvar = -12341234;
    printf("%15lld\n", llvar);


    long long unsigned int llui = 1234567890;
    printf("%15llu\n", llui);


    // remove trailing zeros    %.2f
    // read like: print only 2 digits after the dot (.)
    float f_var = 3.14159;
    printf("%15.5f\n", f_var);

    // when printing out sizeof ALWAYS use %lu
    // at least when I use c99 on arch linux x86_64
    // size_t is 8 bytes aka. 64 bits
    // %lu  long unsinged int is 64 bit, in c99 on arch64 
    size_t szof = sizeof(size_t); 
    printf("size of size_t = %lu\n", szof );

    // printf  addresses in memory:
    // NB! %p specifier expects a void pointer
    // so you can cast it with (void*)
    int asdf = 1234;
    printf("addr=%p\n", (void*)&asdf);

    // or you can make a void pointer and give it the 
    // address of asdf  (&asdf)
    void *ptr = &asdf;
    printf("addr=%p\n", ptr);

    return 0;
}

