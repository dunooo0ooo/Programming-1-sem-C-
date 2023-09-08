#include <stdio.h>


int main() {
    int a;
    char s[100];

    printf("Введите целое число = ");
    scanf("%d",&a);

    printf("Введите строку = ");
    scanf("%s",&s);

    printf("Целое число = %d\n",a);
    printf("Строка = %s",s);

    return 0;
}


