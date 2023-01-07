#include<iostream>
#include<math.h>
using namespace std;
float cv(float a, float b, float c)
{
       return a + b + c;
}

float dt(float a, float b, float c)
{
       float s, p = cv(a,b,c)/2.0;
       return s = sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{      
       float a, b, c;
       cin >> a >> b >> c;
       cout << dt(a,b,c);
       return 0;
}