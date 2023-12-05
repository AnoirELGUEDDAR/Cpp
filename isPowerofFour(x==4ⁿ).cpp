#include <iostream>
using namespace std;
bool isPowerOfFour(int n) {
    int op=0;
    while(n>1){
        if(n%4==0){
            n=(n/4);
        }
        else return false;
    }
    if(n==1) return true;
    else return false;
}
int main(){
    int n=0;
    cout<<isPowerOfFour(n);
}





