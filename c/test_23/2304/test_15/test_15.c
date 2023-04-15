#include <stdio.h>
int main() {
    int *p1 = NULL;
    int *p2 = NULL;
    if (p1 == p2) {
        printf("p1 and p2 are equal\n");
    } else {
        printf("p1 and p2 are not equal\n");
    }
    return 0;
}