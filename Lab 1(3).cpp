// 3) n-- > m++
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m, n;
    m = 20;
    n = 7;
    --n;
    ++m;

  if (n > m) {
    cout << "Значення виразу n > за значення виразу m " << (n > m) << endl;
     } else if (n < m) {
    cout << "Значення виразу n < за значення виразу m " << (n < m) << endl;
     } else if (n = m) {
    cout << "Значення виразу n = значенню виразу m " << (n == m) << endl;
  }





    return 0;
}