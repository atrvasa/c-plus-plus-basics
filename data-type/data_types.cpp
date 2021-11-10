#include <iostream>
using namespace std;

int main()
{
    cout << "Size of data types: " << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "short int: " << sizeof(short int) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << endl;

    enum UnitSystems
    {
        Traditional,
        Metric = 9,
        Natural
    } u;

    u = Metric;

    cout << u << endl;

    cout << Traditional << endl;
    cout << Natural << endl;

    return 0;
}
