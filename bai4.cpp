#include<iostream>
using namespace std;
int main()
{
       int a, b, c, d, p, s;
       cout << "Nhap canh day nho: ";
       cin >> a;
       cout << "Nhap canh day lon: ";
       cin >> b;
       cout << "Nhap canh vuong: ";
       cin >> c;
       cout << "Nhap canh cheo: ";
       cin >> d;
       p= a+b+c+d;
       s = (a+b)/2*c;
       cout << "Chu vi hinh  thang = " << p << endl;
       cout << "Dien tich hinh thang = " << s;
       return 0;
}