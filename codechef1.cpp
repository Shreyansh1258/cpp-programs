#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >>n;
    switch(n){
        case 0:
            cout<<n;
            break;
        case 1:
            cout<<n-1;
            break;
        case 2:
            cout<<n+1;
            break;
    }
}
