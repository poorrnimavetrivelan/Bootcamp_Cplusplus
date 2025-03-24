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

#include <iostream>
using namespace std;

struct point{
    int a, b;
};
int main(){
    point p;
    p.a=5;
    p.b=10;
    std::cout<<p.a;
    return 0;
}

#include <iostream>
using namespace std;

typedef struct point{
    int a, b;
}P;
int main(){
    P p;
    p.a=5;
    p.b=10;
    std::cout<<p.a;
    return 0;
}

#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            std::cout << "Enter ID"<< std::endl;
            std::cin >> id;
            count++;
        }
        void getData(void){
            std:cout <<"Emplyee ID " <<id << "Total Count " << count<<std::endl;
            
        }
};
//count is status data member of Class
int Employee::count; //Default is 0


int main(){
    Employee John, Peter;
    John.setData();
    John.getData();
    Peter.setData();
    Peter.getData();
    
    return 0;
}

#include <iostream>
using namespace std;

class Employee;

class Printer{
    public:
        void printEmp(const Employee &e);
};

class Employee{
    private:
        int id;
        string name;
    public:
        friend void Printer :: printEmp(const Employee &e);
        Employee(int i, string n):id(i),name(n){}
};

void Printer :: printEmp(const Employee &e){
  std::cout << e.id<< " " << e.name << std::endl;  
};

int main(){
    Printer p;
    Employee e(101,"Abc");
    p.printEmp(e);
    return 0;
}
