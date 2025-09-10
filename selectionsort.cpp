#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"Enter n :";
    cin>>n;
    int mini ;
    int ip[n];
    //input the array 
    for(int i=0;i<n;i++){
        cin >>ip[i];
    }

    //sorting loop 
    for(int i=1;i<n;i++){
        mini = i;
        for(int j=i+1;j<n;j++){
            if(ip[j]<ip[mini]){
                mini =j;
            }
        }
    swap(ip[mini],ip[i]);
    }
    cout<<"Sorted array :";
    for(int i=0;i<n;i++){
        cout<<ip[i]<<" ";
    }
    
        
}