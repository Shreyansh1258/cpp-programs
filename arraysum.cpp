#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int A[4]= {5,10,15,20};
    for(int x:A){
        sum +=x;
    }
    cout <<sum ;
}