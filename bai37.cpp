#include<iostream>
using namespace std;
int main()
{
       int a = 200.000, b = 20.000, c, d, e, f;
       cout << "Nhap so gio thue san: " << endl;
       cout << "Gio vao: ";
       cin >> c;
       cout << "Gio ra: ";
       cin >> d;
       cout << "Nhap vao so binh nuoc da uong trong khi thue: ";
       cin >> e;
       f = d - c;
       cout << "Tong so tien: " << f*200.000 + e*20.000;
       return 0;
}