#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "xoa buffer du lieu luu vao bo nho dem" << endl;
    cout << " khong xoa buffer \n ";
    cout << "enter your birthday\n";
    // int day(0), month(0), year(0) ;
    // cin >>day >> month >> year ;
    // cout <<setw(5)<<left<<"your birthday: "<<day<<month<<year;
    int h(0);
    cin >> hex >> h;
    cout << "decimal: " << dec << h << endl;
    system("pause");
    return 0;
}