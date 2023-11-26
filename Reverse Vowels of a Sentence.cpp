#include<iostream>
using namespace std;
string reverseVowels(string s) {
    int i;
    int nvwls=0;
    for(i=0;i<s.length();i++){
        if(tolower(s[i])=='a'|| tolower(s[i])=='e'||tolower(s[i])=='o'||tolower(s[i])=='u'||tolower(s[i])=='i'){
            nvwls++;
        }
    }
    int *vowindice=new int [nvwls];
    int j=1;
    for(i=0;i<s.length();i++){
        if(tolower(s[i])=='a'|| tolower(s[i])=='e'||tolower(s[i])=='o'||tolower(s[i])=='u'||tolower(s[i])=='i'){
            vowindice[nvwls-j]=i;
            j++;
        }
    };
    int k=0;
    string NewString;
    for(i=0;i<s.length();i++){
        if(tolower(s[i])=='a'|| tolower(s[i])=='e'||tolower(s[i])=='o'||tolower(s[i])=='u'||tolower(s[i])=='i'){
            NewString+=s[vowindice[k]];
            k++;
        }
        else{
            NewString+=s[i];
        }
    }
    return NewString;}
int main(){
    string c="BELLY GOAL!!!";
    cout<<reverseVowels(c);
}