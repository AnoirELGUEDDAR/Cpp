#include<iostream>
#include<cmath>
using namespace std;
    bool isSameAfterReversals(int num) {
        int reverse = 0, J,i,temp=num;
        int length1 = to_string(num).length();
        for (i = length1 - 1; i >= 0; i--) {
            J = temp % 10;
            reverse = reverse + J * pow(10, i);
            temp=temp/10;
        }
        int length2 = to_string(reverse).length();
        int Re_reverse=0;
        for (i = length2 - 1; i >= 0; i--) {
            J = reverse % 10;
            Re_reverse = Re_reverse + J * pow(10, i);
            reverse=reverse/10;
        }
        if (num == Re_reverse){
            return true;}
            else {return false;}
        }
        int main(){
        int num=0;
        cout<<isSameAfterReversals(num);
    }