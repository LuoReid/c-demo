#include <stdio.h>
#include <float.h>
#include <stdlib.h>

int x = 200;
int y = 22;
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

int max(int x, int y) { return x > y ? x : y; }

void pop_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}
int getNextRandomValue(void)
{
    return rand();
}

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

    printf("address of MAX_VALUE : %p \n", &MAX_VALUE);
    int g = 33;
    printf("\ng: %d \n", g);

    // TODO: detail of Array;
    double balance[] = {10, 9, 8, 7, 6, 11.0};
    printf("balance %lu", sizeof(balance) / sizeof(balance[0]));

    enum Day day = Wed;
    printf("enum Day : %d %d \n", day, (enum Day)5);

    // TODO: detail of pointer;
    int *p;
    p = &g;
    printf("g value address: %p \n", &g);
    printf("p address: %p \n", p);
    printf("p value : %d \n", *p);

    // function pointer
    int (*pf)(int, int) = &max;
    int d = pf(pf(x, y), g);
    printf("x: %d, y: %d, g: %d, max: %d \n", x, y, g, d);

    // callback pointer
    int myarray[10];
    pop_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    printf("site: %s \n", site);

    struct Book
    {
        char title[50];
        char author[50];
        char subject[100];
        int id;
    };
    struct Book book1 = {"C lang", "Runoob", "program lang", 1};
    printf("{title:%s,author:%s,subject:%s,id:%d} sizeof: %zu\n",
           book1.title, book1.author, book1.subject, book1.id,
           sizeof(book1));

    return 0;
}