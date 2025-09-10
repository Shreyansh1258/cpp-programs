#include <iostream>
using namespace std;
int main()
{
    int n,i;
    int sum =0;
    cout <<"Enter the number :";
    cin >>n;
    for(int i =2;i<=(n-1);i++){
        if(n%i==0){
            sum+=i;
        }
    }
    cout << sum;
}