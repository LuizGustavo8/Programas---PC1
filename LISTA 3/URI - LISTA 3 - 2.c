#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main() {

double A, B, C, delta;

scanf("%lf %lf %lf", &A, &B, &C);

delta = (B*B)-4*A*C;

if (delta >= 0 && A!=0) {

printf("R1 = %.5lf\n", ((B*-1) + sqrt(delta)) / (2*A));

printf("R2 = %.5lf\n", ((B*-1) - sqrt(delta)) / (2*A));

} else {

printf("Impossivel calcular\n");

}

}
