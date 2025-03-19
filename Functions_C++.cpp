#include <iostream>
using namespace std;

int add(int a,int b){
    std::cout << "Inside Function_Add"<<std::endl;
    return (a+b);
}

int main(){
    int a,b;
    std::cout << "Enter A \n";
    std::cin >> a;
    std::cout << "Enter B \n";
    std::cin >> b;
    int res =add(a,b);
    std::cout << "Addition of " << a <<" and "<<b <<" is "<< res<< std::endl;
    return 0;
}
