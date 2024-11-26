#include <stdio.h>

#include "../lib1/lib1.hpp"
#include "../lib2/lib2.hpp"

int main(int argc, char *argv[]) {
    banner();

    printf("libfunc1(%d) call: %d\n", 2, libfunc1(2));
    printf("libfunc2(%d) call: %d\n", 2, libfunc2(2));
}
