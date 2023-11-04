#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

#include <iomanip>
using std::setw;

enum Color
{
    Red,
    Green,
    Blue
};

const int COUNT = 3;
int count;
extern void write_extern();

int max(int x, int y);
void getSeconds(unsigned long *par);
void swap(int &x, int &y);

void iodemo(void);

struct Book
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(Book b);
void pirntBook(struct Boook *b);
void structdemo(void);

class Box
{
private:
    double length;
    int *ptr;

public:
    // double length;  // long
    static int objCount;
    double breadth; // width
    double height;  // hight
    double get(void);
    void set(double len, double bre, double hei);
    double getVolume(void)
    {
        return length * breadth * height;
    }
    void setValue(double len, double bre, double hei)
    {
        length = len;
        breadth = bre;
        height = hei;
        *ptr = (int)len;
    }
    void setLength(double len)
    {
        this->length = len;
        *ptr = (int)len;
    }
    double getLength()
    {
        return length;
    }
    void printLength() { cout << "Length: " << this->length << endl; }
    double getSize()
    {
        return *ptr;
    }
    friend void printLength(Box b);
    Box(double len, double bre, double hei)
    {
        cout << "Constructor(x,y,z) called" << endl;
        length = len;
        breadth = bre;
        height = hei;
        ptr = new int;
        *ptr = (int)len;
        objCount++;
    }
    Box(const Box &b)
    {
        objCount++;
        cout << "Constructor(&b) called:ptr" << endl;
        ptr = new int;
        *ptr = *b.ptr; // copy value
    }
    Box();
    ~Box()
    {
        cout << "Object is being deleted" << endl;
        delete ptr;
    }
};
Box ::Box(void)
{
    cout << "Constructor() called" << endl;
    ptr = new int;
    *ptr = length;
    objCount++;
}
double Box::get(void)
{
    return length * breadth * height;
}
void Box::set(double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
    *ptr = (int)len;
}
void printLength(Box b)
{
    cout << "Length of frind box: " << b.length << endl;
}
void display(Box b)
{
    cout << "box size: " << b.getSize() << endl;
}
void boxDemo();


int main()
{
    cout << "Hello, C++!" << endl;

    cout << "type: \t\t"
         << "************size**************" << endl;
    cout << "bool: \t\t"
         << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t"
         << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t"
         << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t"
         << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t"
         << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t"
         << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t"
         << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t"
         << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t"
         << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t"
         << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t"
         << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t"
         << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t"
         << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t"
         << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t"
         << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t"
         << "************size**************" << endl;

    enum Color c = Blue;

    int i = 10;
    int j = 0;
    float f = static_cast<float>(i);
    cout << "output:" << i << f << endl;

    string greeting = "hello, runoob";
    cout << greeting;
    cout << "\n";
    cout << "const COUNT:" << COUNT << endl;

    count = 11;
    write_extern();

    int x = 10;
    int y = 4;
    int r = max(x, y);
    cout << "Max is " << r << endl;

    short s = 10;
    i = 1000;
    long l = 10000000;
    f = 230.2;
    double d = 20984.4566;
    cout << "short  s is :" << s << endl;
    cout << "int    i is :" << i << endl;
    cout << "long   l is :" << l << endl;
    cout << "float  f is :" << f << endl;
    cout << "double d is :" << d << endl
         << endl;

    d = 100.100;
    cout << "d        is:" << d << endl;
    cout << "cos(d)   is:" << cos(d) << endl;
    cout << "sin(d)   is:" << sin(d) << endl;
    cout << "tan(d)   is:" << tan(d) << endl;
    cout << "log(d)   is:" << log(d) << endl;
    cout << "pow(d,2) is:" << pow(d, 2) << endl;
    cout << "hypot(3,4) is:" << hypot(3, 4) << endl;
    cout << "sqrt(d)  is:" << sqrt(d) << endl;
    cout << "abs(-d)   is:" << abs(-d) << endl;
    cout << "fabs(-d)  is:" << fabs(-d) << endl;
    cout << "floor(-d) is:" << floor(-d) << endl
         << endl;

    srand((unsigned)time(NULL));
    for (i = 0; i < 10; i++)
    {
        j = rand();
        cout << "rand num: " << j << endl;
    }

    long double balance[] = {13.4, 19.2, 50.90, 20.8, 90.4};
    cout << "Element 3 is: " << balance[3] << " change to 22.11" << endl;
    balance[3] = 22.11;
    cout << "Element" << setw(13) << "Value" << endl;
    for (i = 0; i < 6; i++)
    {
        cout << setw(7) << i << setw(13) << balance[i] << endl;
    }

    char site1[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    char site2[] = "RUNOOB";
    cout << "site1:" << site1 << " site2:" << site2 << " site1 length is:" << strlen(site1) << endl;
    string str1 = "hello";
    string str2 = ", ";
    string str3 = "c++";
    string str4 = str1 + str2 + str3;
    cout << "site3:" << str4 << " site3 size is:" << str4.size() << endl;

    cout << "x's address:" << &x << "x value: " << *&x << endl;
    cout << "y's address:" << &y << "y value: " << *&y << endl;
    int *ptr = NULL;
    cout << "ptr value is: " << ptr << endl;

    int var[COUNT] = {10, 100, 200};
    ptr = var;
    i = 0;
    while (ptr <= &var[COUNT - 1])
    {
        cout << "var[" << i << "] adress: " << ptr;
        cout << " value: " << *ptr << endl;

        ptr++;
        i++;
    }

    int **pptr;
    ptr = &count;
    pptr = &ptr;
    cout << "count is:" << count;
    cout << "*ptr is:" << *ptr;
    cout << "**pptr is:" << **pptr << endl
         << endl;

    unsigned long sec;
    getSeconds(&sec);
    cout << "seconds: " << sec << endl;

    // reference
    int &ri = x;
    double &rd = d;
    cout << "i is: " << x << " ri is: " << ri << endl;
    cout << "d is: " << d << " rd is: " << rd << endl;
    x = 101;
    d = 10.10;
    ri = 11;
    rd = 11.22;
    cout << "i is: " << x << " ri is: " << ri << endl;
    cout << "d is: " << d << " rd is: " << rd << endl;

    cout << "(x,y) is: " << x << "," << y << endl;
    swap(x, y);
    cout << "(x,y) is: " << x << "," << y << endl
         << endl;

    // date and time
    time_t now = time(0);
    char *dt = ctime(&now);
    tm *ltm = localtime(&now);
    cout << "local datetime: " << dt << endl;
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC datetime: " << dt << endl;
    cout << "seconds from 1970: " << now << endl;
    cout << "year: " << 1900 + ltm->tm_year << endl;
    cout << "month:" << 1 + ltm->tm_mon << endl;
    cout << "day:" << ltm->tm_mday << endl;
    cout << "time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl
         << endl;

    // io
    // iodemo();

    // struct
    structdemo();

    cout << endl
         << "box demo" << endl;
    boxDemo();

    // TODO: operator overload

    return 0;
}

void printBook(Book b)
{
    cout << "title:" << b.title << endl;
    cout << "author:" << b.author << endl;
    cout << "subject:" << b.subject << endl;
    cout << "id:" << b.book_id << endl;
};
void printBook(struct Book *b)
{
    cout << "title:" << b->title << endl;
    cout << "author:" << b->author << endl;
    cout << "subject:" << b->subject << endl;
    cout << "id:" << b->book_id << endl;
};

void structdemo()
{
    Book b1;
    Book b2;
    strcpy(b1.title, "C++");
    strcpy(b1.author, "Runoob");
    strcpy(b1.subject, "Programming language");
    b1.book_id = 101;

    strcpy(b2.title, "CSS");
    strcpy(b2.author, "Runoob");
    strcpy(b2.subject, "font-end tech");
    b2.book_id = 202;

    printBook(b1);
    // printBook(b2);

    struct Book *bp;
    bp = &b1;
    // printBook(bp);
    printBook(&b2);
}

int Box::objCount = 0;
void boxDemo()
{
    cout << "Total objects: " << Box::objCount << endl;
    Box b1;
    Box b2;
    Box b3;
    Box b4(3.0, 4.0, 5.0);
    Box b5 = b4;

    double volume = 0.0;

    b1.height = 5.0;
    b1.setLength(6.0);
    b1.breadth = 7.0;

    b2.set(6.0, 5.0, 4.0);
    b3.setValue(7.0, 8.0, 9.0);

    volume = b1.breadth * b1.getLength() * b1.breadth;
    cout << "Box1 volume: " << volume << endl;
    volume = b2.get();
    cout << "Box2 volume: " << volume << endl;
    volume = b3.getVolume();
    cout << "Box3 volume: " << volume << endl;
    volume = b4.getVolume();
    cout << "Box4 volume: " << volume << endl;
    display(b1);
    display(b2);
    display(b3);
    display(b4);
    display(b5);

    b5.setLength(111);
    printLength(b5);
    b5.printLength();

    cout << "Total objects: " << Box::objCount << endl;

    Box *ptrBox;
    ptrBox = &b4;
    cout << "Total objects: " << Box::objCount << endl;

    cout << "Volume b6 is b4: " << ptrBox->getVolume() << endl;
    ptrBox = &b2;
    cout << "Volume b6 is b2: " << ptrBox->getVolume() << endl;

    cout << "Total objects: " << Box::objCount << endl;
}

void iodemo()
{
    char name[50];
    cout << "please input your name: ";
    cin >> name;
    cout << "your name is: " << name << endl;

    char str[] = "Unable to read...";
    cerr << "Error message: " << str << endl;
    clog << "Info message: " << str << endl;
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return;
}

void getSeconds(unsigned long *par)
{
    *par = time(NULL);
    return;
}

int max(int x, int y)
{
    int r;
    if (x > y)
    {
        r = x;
    }
    else
    {
        r = y;
    }
    return r;
}

class Base
{
};
class Derived : public Base
{
};
Base *ptr_base = new Derived;
// Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base);
