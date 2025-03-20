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

//Function Pointer
#include <iostream>
using namespace std;

int add (int a, int b){
    return (a+b);
}

int main(){
    int result;
    int (*ptr)(int, int)=&add;
    result = ptr (20,30);
    std::cout << "Result is " << result << std::endl;
    return 0;
}

//Dynamic Pointer
#include <iostream>
using namespace std;

int main(){
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int avg;
    
    ptr1=new int;
    ptr2=new int;
    ptr3=new int;
    
    std::cout << "Enter First number: " << std::endl;
    cin >> *ptr1;
    std::cout << "Enter Second number: " << std::endl;
    cin >> *ptr2;
    std::cout << "Enter Third number: " << std::endl;
    cin >> *ptr3;
    
    avg = (*ptr1 + *ptr2 + *ptr3)/3;
    
    std::cout << "Average " << avg << std::endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;
}

