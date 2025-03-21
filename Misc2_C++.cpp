#include <iostream>
using namespace std;

class number{
    private:
        int a;
    public:
        number(){
            a=0;
        };
        number(int num){
            a=num;
        };
      /*  number (number &obj){
            a=obj.a;
            std::cout << "Copy Constructor" << std::endl;
        }*/
        void display(){
            std::cout << "The number is "<< a << std::endl;
        };
};


int main(){
    number n1, n2(1);
    n1.display();
    n2.display();
    number n3(n2);
    n3.display();
    return 0;
}
