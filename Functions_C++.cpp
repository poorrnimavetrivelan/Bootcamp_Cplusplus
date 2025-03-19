#include <iostream>
using namespace std;

void printHello(){
    std::cout << "Hello World";
}

int add(int a,int b){
    std::cout << "Inside Function_Add"<<std::endl;
    return (a+b);
}

int max_local (int a, int b){
    if (a>b)
        return a;
    else 
        return b;
}

//Function Overloading
void Print(int i){
    std::cout << i <<endl;
}

void Print(string s){
    std::cout << s << endl;
}

int main(){

     printHello();
    
    int a,b;
    std::cout << "Enter A \n";
    std::cin >> a;
    std::cout << "Enter B \n";
    std::cin >> b;
    
    int res = add(a,b);
    std::cout << "Addition of " << a <<" and "<<b <<" is "<< res<< std::endl;
    
    int res = max_local(a,b);
    std::cout << "Maximum of " << a <<" and "<<b <<" is "<< res<< std::endl;

    //Function Overloading
    Print(10);
    Print("Hello World");
    return 0;
    
    return 0;
}
