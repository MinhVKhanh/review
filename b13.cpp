#include <iostream>
using namespace std;

int main()
{
    int num = 255, i;
    for (i = 0; i <= 3; i++)
    {
        cout << "Dich sang phai " << i << " bits: " << (num >> i) << "\n";
    }

    cout << "\n";

    for (i = 0; i <= 2; i++)
    {
        cout << "Dich sang trai " << i << " bits: " << (num << i) << "\n";
    }
    char b =255;
    cout << "Dich sang phai 3 bits: " << (b >> 3) << "\n";
    system("pause");
    return 0;
}