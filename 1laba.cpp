#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a = 5.54;
  double b = 3.93;
  double y = 1.45;
  double T1 = 288.0;
  double T2 = 675.0;
  
  double K = (y - 1) / y;
  
  double kpd1 = 1 - pow(1 / b, K);
  double kpd2 = (T2 - T1) / (T2 + (T2 - T1) / ((y - 1) * log(a)));
  double kpd3 = 1 - K * (log(b) / (pow(b, K) - 1));
  
  cout << kpd1 << endl 
       << kpd2 << endl 
       << kpd3 << endl;
  
  return 0;
}
