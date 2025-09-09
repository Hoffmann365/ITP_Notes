#include <stdio.h>
#include <math.h>

double* calcBhaskara(double a, double b, double c){
    double delta, r1, r2;
    delta = b * b - 4 * a * c;

    if(delta < 0 || a == 0){
        return NULL;
    }
    
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

    static double raizes[2];
    raizes[0] = r1;
    raizes[1] = r2;

    return raizes;
}

int main(){
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double *result = calcBhaskara(a, b, c);
    if (result != NULL)
    {
        printf("R1 = %.5f\n", result[0]);
        printf("R2 = %.5f\n", result[1]);
    }else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}