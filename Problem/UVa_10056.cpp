#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int S;
    scanf("%d", &S);

    while (S--) {
        int N, I;
        double p;
        scanf("%d %lf %d", &N, &p, &I);

        double result;
        if (p == 0.0) {
            result = 0.0;
        }
        else if (p == 1.0) {
            if (I == 1)
                result = 1.0;
            else
                result = 0.0;
        }
        else {
            double fail = 1.0 - p;
            double numerator = pow(fail, I - 1) * p;
            double denominator = 1.0 - pow(fail, N);
            result = numerator / denominator;
        }

        printf("%.4lf\n", result);
    }

    return 0;
}
