#include<iostream>
using namespace std;
string reverseWords(string s) {
    int i, j;
    unsigned int l = s.length();
    int nword = 1;
    for (i = 0; i < l; i++) {
        if (s[i] == ' ' && s[i+1]==' ') {
            continue;
        }
        else if(s[i] == ' ' && s[i+1]!=' '){nword++;}
    }
    string tab[nword];
    int wrdindice = 0;
    for (i = 0; i < l; i++) {
        if ((s[i] == ' ' && s[i+1] == ' ' )) {
            continue;
        }
        else if (s[i] == ' ' && s[i+1] != ' ') {
            wrdindice++;
        }
        else {
            tab[wrdindice] += s[i];
        }
    }
    string reversString;
    for (i = nword - 1; i >= 0; i--) {
        reversString += tab[i];
        if (i > 0) {
            reversString += ' ';
        }
    }
    int newlen=reversString.length();
    if (reversString[newlen-1]==' ') {
        reversString = reversString.substr(0, newlen-1);
    };
    if (reversString[0]==' ') {
            reversString = reversString.substr(1);
        };
   return reversString;
}
int main() {
    string c;
    cout<<"ENTER YOUR SENTENCE PLZ"<<endl;
    getline(cin,c);  //TO READ THE WHOLE SENTENCE,WITHOUT IT HE WILL STOP AT THE FIRST SPACE.
    cout << reverseWords(c);
    return 0;
}