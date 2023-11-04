#include <iostream>
#include <cstring>

using namespace std;

void CharConvert(char ch[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
    }
};

int main()
{
    char str[20];
    cout << "please input some charactor:" << endl;
    cin >> str;
    int len = strlen(str);
    CharConvert(str, len);
    cout << str << endl;
    return 0;
};