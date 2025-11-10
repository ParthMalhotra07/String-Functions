#include<bits/stdc++.h>
using namespace std;
// str.at(idx)
int main(){
    string str="Parth";
    // str.at(idx)
    // Extracting the character of 0th index
    cout << str.at(0) << endl;

    // substr(index,length)
    // substr(pos, len);
    // Extract two characters of s1 (starting
    // from index 3)
    string s="geeks";
    string sub = s.substr(3, 2);
    cout << sub; //gives ks

    // Find position of ':' using find()
    int pos = s.find(":");

    // Convert the substring into
    // integer number
    int x = stoi(sub);

    
    return 0;
}