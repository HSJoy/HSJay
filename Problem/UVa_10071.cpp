
#include <stdio.h>

int main() {
    int v, t;

    while (scanf("%d %d", &v, &t) == 2) {
        int displacement;
        if (t == 0) {
            displacement = 0; 
        } else {
            displacement = 2 * v * t; 
        }
        printf("%d\n", displacement);
    }

    return 0;
}
