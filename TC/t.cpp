#include <iostream>

using namespace std;

int negate(const int &val);
int main()
{
  inv v= 10;
    cout << v << " negate is " << negate(v) << endl;
    return 0;
}

int negate(const int& val)
{
  return -val;
}
