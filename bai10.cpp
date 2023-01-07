#include<iostream>
using namespace std;
int uscln(int a, int b)
{
       if(b == 0 ) return a;
       return uscln(b, a%b);
}
int bscnn(int a, int b)
{
       return (a * b) / uscln(a,b);
}
int main()
{
       int a, b;
       cin >> a >> b;
       cout << "USCLN cua " << a << " va " << b << " la: " << uscln(a,b) << endl;
       cout << "BSCNN cua " << a << " va " << b << " la: " << bscnn(a,b);
       return 0;
}