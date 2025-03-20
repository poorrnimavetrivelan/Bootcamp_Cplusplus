
#include <iostream>
using namespace std;

int main(){
    int ar1[5]={10,20,30,40,50};
    int len_ar1=sizeof(ar1)/sizeof(ar1[0]);
    for (int i=0 ; i<len_ar1 ; i++){
        std::cout << ar1[i] << std::endl;
    }
    return 0;
}
