#include<iostream>
using namespace std;
int main()
{
       string n;
       long double a, b, c, d, e = 10/100;
       cout << "Nhap ten san pham: ";
       getline(cin,n);
       cout << "Nhap so luong: ";
       cin >> a;
       cout << "Nhap don gia: ";
       cin >> b;
       c = a*b;
       d = e * c;
       cout << "San pham: " << n << endl;
       cout << "Tien: " << c << endl;
       cout << "Thue gia tri gia tang: " << d;
       return 0;
}