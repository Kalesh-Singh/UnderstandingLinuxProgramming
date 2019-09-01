#include <stdio.h>

/* copy form stdin to stdout */
int main() {
    int c;
    while((c = getchar()) != EOF) {
        putchar(c);
    }
    /* not reachable */ 
    return 0; 
}
