#include <stdio.h>
#include "../lib1/lib1.hpp"

int main(int argc, char *argv[]) {
    printf("Prog 1 commit test\n");
    printf("libfunc1(%d) call: %d\n", 2, libfunc1(2));
}
