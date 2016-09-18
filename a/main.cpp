#include <iostream>

using namespace std;

int main()
{
    int a(12),b(12);

    cout << a << endl;
    a = a++;
    a = a*5;
    b=b++*5;
    cout << a << endl;
    cout << b << endl;
    a=12;
    b=12;
    a=++a;
    a=a*5;
    b=++b*5;
    cout << a << endl;
    cout << b << endl;
    return 0;
}
