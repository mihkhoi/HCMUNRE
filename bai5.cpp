#include<iostream>
using namespace std;
int main()
{
       string t;
       int a, n;
       long long b, c, l;
       cout << "Nhap ten: ";
       getline(cin,t);
       cout << "Nhap nam sinh: ";
       cin >> a;
       cout << "Nhap luong co ban: ";
       cin >> b;
       cout << "Nhap he so luong: ";
       cin >> c;
       n= 2022-a;
       l= b*c;
       cout << "Ten: " << t << endl;
       cout << "Tuoi: " << n << endl;
       cout << "Luong: " << l;
       return 0;
}