#include<iostream>
using namespace std;
int main()
{
       int n, s = 0;
       do
       {
              cin >> n;
              cout << n << endl;
              s = s + n;
       } while (n > 0);
       cout << s;
       return 0;
}