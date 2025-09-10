#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cout<<"Enter query : ";
    cin >>q;

    while(q--){
        char ch;
        cout <<"Enter the charectar :";
        cin>>ch;
        cout <<hash[ch-'a']<<endl;
    }

    return 0;
}