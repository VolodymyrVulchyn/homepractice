// 1) m-++n

#include <iostream>
#include <cmath>
using namespace std;

int main(){

        int m, n;
        m = 6;
        n = 45;
//  m-++n = означає що ми від числа M віднімає число N збільшене на одиницю
            cout << "Знайчення виразу дорівнює: " << (m-(++n)); 



    return 0;
}