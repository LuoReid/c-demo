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

enum Color {Red,Green,Blue};

const int COUNT = 101;
int count;
extern void write_extern();

int max(int x, int y);

int main(){
    cout << "Hello, C++!" << endl;

    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl; 

    enum Color c = Blue;

    int i = 10; int j = 0;
    float f = static_cast<float> (i);
    cout << "output:"<< i << f << endl;

    string greeting ="hello, runoob";
    cout<<greeting; 
    cout<<"\n";
    cout << "const COUNT:" << COUNT << endl;

    count = 11;
    write_extern();

    int x = 10; int y = 4;
    int r = max(x,y);
    cout << "Max is " << r << endl;

    short s = 10;
     i = 1000;
    long l = 10000000;
     f = 230.2;
    long double d = 20984.4566;
    cout << "short  s is :" << s << endl;
    cout << "int    i is :" << i << endl;
    cout << "long   l is :" << l << endl;
    cout << "float  f is :" << f << endl;
    cout << "double d is :" << d << endl << endl;

    d = 100.100;
    cout << "d        is:" << d << endl;
    cout << "cos(d)   is:" << cos(d) << endl;
    cout << "sin(d)   is:" << sin(d) << endl;
    cout << "tan(d)   is:" << tan(d) << endl;
    cout << "log(d)   is:" << log(d) << endl;
    cout << "pow(d,2) is:" << pow(d,2) << endl;
    cout << "hypot(3,4) is:" << hypot(3,4) << endl;
    cout << "sqrt(d)  is:" << sqrt(d) << endl;
    cout << "abs(-d)   is:" << abs(-d) << endl;
    cout << "fabs(-d)  is:" << fabs(-d) << endl;
    cout << "floor(-d) is:" << floor(-d) << endl << endl;
    
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++){
        j = rand();
        cout << "rand num: "<< j << endl;
    }

    long double balance[] = {13.4,19.2,50.90,20.8,90.4};
    cout << "Element 3 is: "<< balance[3] << " change to 22.11"<< endl;
     balance[3] = 22.11;
    cout << "Element" << setw(13) << "Value"<<endl;
    for(i=0;i<10;i++){
        cout<<setw(7)<<i<<setw(13)<<balance[i]<<endl;
    }

    char site1[7]={'R','U','N','O','O','B','\0'};
    char site2[]="RUNOOB";
    cout << "site1:"<< site1<<" site2:" << site2 << " site1 length is:"<<strlen(site1) << endl;
    string str1 = "hello"; string str2=", "; string str3 ="c++";
    string str4 = str1+str2+str3;
    cout << "site3:" << str4 << " site3 size is:"<<str4.size()<<endl;

    return 0;
}

int max(int x, int y){
    int r;
    if(x > y){
        r = x;
    }else{
        r = y;
    }
    return r;
}

    class Base{};
    class Derived:public Base{};
    Base* ptr_base = new Derived;
    // Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base);
    