#include<iostream>
using namespace std;
int main()
{
       int a, b, s, p;
       cout << "Nhap chieu dai va chieu rong cua hinh chu nhat: ";
       cin >> a >> b;
       p= 2*(a+b);
       s = a*b;
       cout << "Chu vi hinh chu nhat = " << p << endl;
       cout << "Dien tich hinh chu nhat = " << s;
       return 0;
}