#include <iostream>
#include <cmath>
    using namespace std;

        int main(){
           
           

            
            double a, b, c, d, e;
            a = 1000;
            b = 0.0001;
            
            // Рядок коду нижче, є індентичним виразу: (a-b)^2(a^2-2ab)/b^2
            
            c = pow((a+b),2);
            b = pow(a,2);
            d = 2*a*b;
            e = pow(b,2);

            cout << (c-(b-d))/e;



            return 0;
        }