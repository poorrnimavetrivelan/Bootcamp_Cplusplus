#include<iostream>

using namespace std;
#include<math.h>

int main(){
    double x=100;
    //double pi=22/7;
    //double deg = x * (pi)/180;
    double base = 25, power = 2;
    double a=6.51;
    std::cout << "Tan of " << x << " is "<< tan(x) <<std::endl;
    std::cout << "Power of (" << base <<  "," <<power << ") is "<< pow(base,power) <<std::endl;
    std::cout << "Square root of (" << base << ") is "<< sqrt(base) <<std::endl;
    //Log
    //floor, ceil
    std::cout << "Floor value of (" << a << ") is "<< floor(a) <<std::endl;
    std::cout << "Ceil value of (" << a << ") is "<< ceil(a) <<std::endl;
    return 0;
}
