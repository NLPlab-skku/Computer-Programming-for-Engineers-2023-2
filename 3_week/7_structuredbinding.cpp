#include <iostream>

using namespace std;

int main()
{
  int a[2] = {1,2};
  auto [x,y] = a;
  auto& [xr, yr] = a;
  cout << x << "," << y << endl;

  xr = 3;
  yr = 4;

  // what will be the result?
  cout << x << "," << y << endl;
  cout << a[0] << "," << a[1] << endl;
  cout << xr << "," << yr << endl;

  struct {
    int i=1;
    double d=2;
  } f;
  auto [i,d] = f;
  cout << i << " " << d << endl;

  return 0;
}