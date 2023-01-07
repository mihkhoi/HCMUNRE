#include<iostream>
#include<math.h>
using namespace std;
int main()
{
       int a, b;
       double s, p, dc;
       cin >> a >> b;
       s = a * b;
       p = 2*(a+b);
       dc = sqrt(a*a+b*b);
       cout << "Dien tich: " << s << endl;
       cout << "Chu vi: " << p << endl;
       cout << "Duong cheo: " << dc;
       return 0;
}