#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,1,4,3,2,6,9,7,8,11};
        for(int i=0;i<arr.size()-1;i++){
            int mini=i;
            for(int j=i+1;j<arr.size()-1;j++){
                if(arr[j]<arr[mini]){
                    mini=j;
                }
            }
            swap(arr[mini],arr[i]);
        }
        
        for(auto it:arr){
            cout<<it<<" ";
        }
    
    return 0;
}