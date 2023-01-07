#include<iostream>
using namespace std;
int main()
{
       float r, s, p;
       cout << "Nhap ban kinh hinh tron: ";
       cin >> r;
       p = (r*2)*3.14;
       s = r*r*3.14;
       cout << "Chu vi hinh tron = " << p << endl;
       cout << "Dien tich hinh tron = " << s;
       return 0;
}