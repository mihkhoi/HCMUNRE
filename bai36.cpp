#include<iostream>
using namespace std;
int main()
{
       int a = 500000, b = 100000, c, d, e;
       cout << "Tinh tien thue phong" << endl;
       cout << "Don gia tuan: " <<  a << ". Don gia ngay: " << b << "." << endl;
       cout << "Nhap vao tong so ngay thue phong: ";
       cin >> c;
       d = c/7;
       e = c%(d*7);
       cout << "So tuan ma khach thue: " << d << ", so ngay khach thue: " <<  e << endl;
       cout << "tien phai tra: " << a*d + b*e;
       return 0;
}