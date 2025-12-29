#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max = (a > b) ? 
                ((a > c) ? 
                    ((a > d) ? a : d) 
                    : ((c > d) ? c : d)) 
                : ((b > c) ? 
                    ((b > d) ? b : d) 
                    : ((c > d) ? c : d));

    int smax = (max == a) ? 
                    ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d)) :
               (max == b) ? 
                    ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) :
               (max == c) ? 
                    ((a > b) ? ((a > d) ? a : d) : ((b > d) ? b : d)) :
                    ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));

    printf("%d\n", smax);
    return 0;
}

