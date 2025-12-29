#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    float A, B, C, D, E;

    a = 1; b = 1; c = 5; d = 1;
    A = 3 * (float)a / 5 + 1.0 / b;
    B = (3 * a + 5 * b) / (2.0 + c);
    C = (2.0 / 7) * (pow(4, 3 * c) - 5 * d);
    D = (a != 0) ? sqrt((2 + 8 * b) / (float)a) : -1;
    E = cbrt(b * b) - 4 * d;
    (D != -1) ? printf("%f %f %f %f %f\n", A, B, C, D, E)
              : printf("%f %f %f error %f\n", A, B, C, E, E);

    a = 9; b = 2; c = 0; d = 1;
    A = 3 * (float)a / 5 + 1.0 / b;
    B = (3 * a + 5 * b) / (2.0 + c);
    C = (2.0 / 7) * (pow(4, 3 * c) - 5 * d);
    D = (a != 0) ? sqrt((2 + 8 * b) / (float)a) : -1;
    E = cbrt(b * b) - 4 * d;
    (D != -1) ? printf("%f %f %f %f %f\n", A, B, C, D, E)
              : printf("%f %f %f error %f\n", A, B, C, E, E);

    a = 0; b = 3; c = 3; d = 3;
    A = 3 * (float)a / 5 + 1.0 / b;
    B = (3 * a + 5 * b) / (2.0 + c);
    C = (2.0 / 7) * (pow(4, 3 * c) - 5 * d);
    D = (a != 0) ? sqrt((2 + 8 * b) / (float)a) : -1;
    E = cbrt(b * b) - 4 * d;
    (D != -1) ? printf("%f %f %f %f %f\n", A, B, C, D, E)
              : printf("%f %f %f error %f\n", A, B, C, E, E);

    return 0;
}



