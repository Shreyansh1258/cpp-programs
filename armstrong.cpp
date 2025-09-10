#include <iostream>
using namespace std;
int main()
{
    int n,i,m;
    cin >>n;
    m =n;
    int sum =0;
    while(n>0){
        i = n%10;
        n/=10;
        sum += i*i*i;
    }
    if(sum == m){
        cout <<"armstrong no";
    }
    else{
        cout << "not armstrong no";
    }
}
