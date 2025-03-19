#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int i,n;
    std::cout<<"Enter a positive number"<<std::endl;
    std::cin>>n;
  
    std::cout << "The Multiplication Table of " << n << "Using For Loop"<< std::endl;
     
    for (i=1;i<=10;i++){
      std::cout << i <<"*" << n <<"=" << i*n <<std::endl;
    }

    std::cout << "The Multiplication Table of " << n << "Using While Loop"<< std::endl;
  
    i=0; //Reinitialising i
    while(i<=10){
      std::cout << i <<"*" << n <<"=" << i*n <<std::endl;
      i++;
    }

    std::cout << "The Multiplication Table of " << n << "Using Do While Loop"<< std::endl;
  
    i=0; //Reinitialising i
    do{
      std::cout << i <<"*" << n <<"=" << i*n <<std::endl;
      i++;
    }while(i<=10);

  
    return 0;
}
