#include <iostream>
using namespace std;
class pile_entier{
private:
    int sommet;
    int taille;
    int * tableau;
public:
    pile_entier(int n=20){
        taille=n;
        tableau=new int [n];
        sommet=-1; //pile vide initialement
    }
    pile_entier(const pile_entier &A){
        taille=A.taille;
        sommet=A.sommet;
        for(int i=0;i<=sommet;i++){
            tableau[i]=A.tableau[i];
        }
    }
    ~pile_entier(){delete []tableau;}
    void empile(int p){
        if (!plein()){
            sommet++;
            tableau[sommet]=p;
        }
        else {cout<<"You need Space"<<endl;}
        }
        int depile(){
        if(vide()){
cout<<"EMPTY"<<endl;}
        else {
           return sommet--;}}
        int plein()const{
        if(sommet==taille-1)return 1;else return 0;
    }
    int vide()const{
        if(sommet==-1)return 1;else return 0;
    }
    void affichage(){
        for(int i=0;i<=sommet;i++){
            cout<<tableau[i]<<endl;
        }
    }
};
int main(){
    pile_entier A;
    A.empile(1);
    A.empile(2);
    A.empile(3);
    A.affichage();
}
