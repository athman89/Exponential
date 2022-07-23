#include <iostream>
#include <cmath>

/*compute e^x using taylor series:
 *e^x = 1 + x + x^2/2! + x^3/3! + ....
 * also use function exp()
 * */
int main() {
    double z;
    double sum = 0.0;
    double term = 1.0;
    std::cout <<"Enter a number:" <<std::endl;
    std::cin >> z;
    for (int i = 1; sum != sum + term; i++) {
        sum += term;
        term = term * z/i;
        std::cout << z <<" " << term <<" " << sum <<std::endl;
    }
    std::cout << sum <<std::endl;
    std::cout << exp(z) <<std::endl;
    return 0;
}
