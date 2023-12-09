#include <iostream>
#include <cmath>
using namespace std;
class complexe{
private:
    int r;
    int im;
public:
    complexe(int a=0,int b=1){
        r=a;
        im=b;
    }
    complexe(const complexe &Z){
        r=Z.r;
        im=Z.im;
    }
    void affichage(){
        cout<<r<<" + i"<<im<<endl;
    }
    complexe addition(complexe &Z){
        complexe S;
        S.r=Z.r+r;
        S.im=Z.im+im;
        return S;
    }
    complexe multiply(complexe &Z){
        complexe result;
        result.r=(Z.r)*r-(Z.im)*im;
        result.im=(Z.r)*im+(Z.im)*r;
        return result;
    }
    double module(){
        return sqrt(pow(r,2)+pow(im,2));
    }
};
int main(){
    complexe Z1(1,2);
    complexe Z2(2,3);
    Z1.affichage();
    Z2.affichage();
    cout<<"Addition:"<<endl;
    Z1.addition(Z2).affichage();
    cout<<"multiplication:"<<endl;
    Z1.multiply(Z2).affichage();
    cout<<Z1.module()<<endl;
    cout<<Z2.module()<<endl;
}
