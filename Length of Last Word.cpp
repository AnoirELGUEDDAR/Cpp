#include<iostream>
#include<cmath>
using namespace std;
int lengthOfLastWord(string s) {
    int i;
    int count=0,l=s.length();
   while(s[l-1]==' '){
               s=s.substr(0,l-1);
       l--;
   }
for(i=l-1;i>=0;i--){
    if(s[i]==' '){break;}
    else
       count++;
    }
    return count;
}
int main(){
    string S="HELLO MY BROTHER   ";
    cout<<lengthOfLastWord(S);
}
