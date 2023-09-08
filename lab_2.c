#include "stdio.h"
#include "math.h"

int main(){
    double a,b,z_1,z_2;


    printf("Введите кол-во градусов угла альфа:");
    scanf("%lf",&a);

    printf("Введите кол-во градусов угла бетта:");
    scanf("%lf",&b);


    z_1 = ((sin(a)+cos(2*b-a))/(cos(a)-sin(2*b-a)));
    z_2 = (1+sin(2*b))/(cos(2*b));

    printf("Значение первой функции: %lf",z_1);
    printf("Значение второй функции: %lf",z_2);

    return 0;
}

