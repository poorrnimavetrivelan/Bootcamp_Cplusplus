#include <iostream>
using namespace std;


void swap ( int &c, int &d){
  int temp = c;
  c=d;
  d=temp;
}
int main(){
    int a=10;
    int &b=a;
    
    std::cout << a <<std::endl;
    a=a+5;
    std::cout << b <<std::endl;
    b=b+5;
    std::cout << a <<std::endl;
  
    int c=10,d=20;
    std::cout << c << d <<std::endl;
    swap(c,d);
    std::cout << c << d <<std::endl;

   return 0;
    
}

