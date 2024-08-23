#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<double> arr = { 88, 76, 95, 89, 77, 84, 91, 73, 87, 82};
        
    int mini=arr[0];
    for(auto it:arr){
        if(it<mini){
            mini=it;
        }
    }
    
    cout<<mini;
    
    return 0;
}