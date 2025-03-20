// Break
//Continue
//Goto 

#include <iostream>
using namespace std;

//Call by Value - Local Variable / Global Variable
void swap1(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    std::cout << "Inside Loop : A " << a << " B " << b << std::endl;
}

//Call by Reference
void swappointer(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    std::cout << "Inside Loop : A " << *a << " B " << *b << std::endl;
    // * gives value at particular address
}

int main(){
  int a=4, b=6;
  
  std::cout << "A " << a << " B " << b << std::endl;
  swap1(a,b);
  std::cout << "A " << a << " B " << b << std::endl;

  swappointer(&a,&b);
  std::cout << "A " << a << " B " << b << std::endl;

  //Without using 3rd variable
  a = a + b;
  b = a - b;
  a = a - b;
  std::cout << "A " << a << " B " << b << std::endl;
  
  return 0;
}
