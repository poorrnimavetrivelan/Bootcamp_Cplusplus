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

class complex{
    private:
        int real;
        int imag;
    public:
        void print(){
            std::cout << real << "+" << imag <<"i" << std::endl;
        }
        complex(int r, int i){
            real = r;
            imag = i;
        }
};


int main(){
    complex c1(10,5);
    c1.print();
    return 0;
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
    
  std::cout << a << std::endl << &a << std::endl << *(&a) << std::endl;

  int *ptr = &a;
  std::cout << ptr << "\n" << *ptr << "\n" << &ptr << "\n" << a << "\n" << &a;

  complex c1(10,5);
    c1.print();
    complex *c2 = new complex(5,10);
    c2 -> print();
    return 0;
  
  return 0;
}
