#include <iostream>
using namespace std;

void removeSmiles(string& s){
    int i = 0, j = 0;
    while(j < s.size()){
        if(s[j] == ':' and j < s.size() - 2 and s[j+1] == '-' and (s[j+2] == ')' or s[j+2] == '(')) {
            char k = s[j+2];
            j += 3;
            while(s[j] == k) j++;
        } else {
            s[i++] = s[j++];
        }
    }
    s.erase(i);
}

int main() {

    string s1 = "Aaaaa :-) kljlj",
            s2 = "",
            s3 = ":-)))a))",
            s4 = ":-)",
            s5 = ":-",
            s6 = ":-) :-( :-(((f:-(k:-l:-(;:-";

    removeSmiles(s1);
    removeSmiles(s2);
    removeSmiles(s3);
    removeSmiles(s4);
    removeSmiles(s5);
    removeSmiles(s6);
    removeSmiles(s1);

    cout << s1 << endl
         << s2 << endl
         << s3 << endl
         << s4 << endl
         << s5 << endl
         << s6 << endl;
}