#include <stdio.h>
#include <float.h>

int x = 2;
int y = 2;
int addtwonum();
const int MAX_VALUE = 100;
int g = 20;

enum Day
{
    Mon = 1,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
    Sun
};

int main()
{
    printf("hello, world %d\n", MAX_VALUE);
    printf("int sizeof: %lu \n", sizeof(int));
    printf("double sizeof: %lu \n", sizeof(double));
    printf("char sizeof: %lu \n", sizeof(char));
    printf("float sizeof: %lu \n", sizeof(float));
    printf("float min: %E \n", FLT_MIN);
    printf("float max: %E \n", FLT_MAX);
    printf("float dig: %d \n", FLT_DIG);

    int result;
    result = addtwonum();
    printf("result is: %d \n", result);

    printf("address of MAX_VALUE : \n");
    // printf((char)&MAX_VALUE);
    int g = 33;
    printf("\ng: %d \n", g);

    double balance[] = {10, 9, 8, 7, 6, 11.0};
    printf("balance %lu", sizeof(balance) / sizeof(balance[0]));

    enum Day day = Wed;
    printf("enum Day : %d %d \n", day, (enum Day)5);

    return 0;
}