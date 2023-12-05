#include <iostream>
#include<vector>
using namespace std;
bool arrayStringsAreEqual(vector<string> &word1, vector<string>& word2) {
    string mot1,mot2;
    for(int i=0;i<word1.size();i++){
        mot1+=word1[i];
    }
    for(int i=0;i<word2.size();i++){
        mot2+=word2[i];
    }
    if(mot1==mot2) return true;
    else return false;
};
int main() {
    vector <string>A = {"Anoir", "A", "E", "G"};
    vector<string> B = {"An", "oir", "AE", "G"};
    cout << arrayStringsAreEqual(A,B);
};