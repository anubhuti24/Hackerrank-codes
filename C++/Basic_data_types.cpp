#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int integer;
    long int longint;
    char character;
    float decimal;
    double longfloat;
    scanf("%d %ld %c %f %lf",&integer,&longint,&character,&decimal,&longfloat);
    printf("%d",integer);
    printf("\n");
    printf("%ld",longint);
    printf("\n");
    printf("%c",character);
    printf("\n");
    printf("%.3f",decimal);
    printf("\n");
    printf("%.9lf",longfloat);
    printf("\n");
    return 0;
}
