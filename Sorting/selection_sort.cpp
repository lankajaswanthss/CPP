#include<bits/stdc++.h>
using namespace std;
void selection(vector<int> &arr){
    int n = arr.size();
    for(int i =0;i<n;i++){
        int k=i;
        for(int j=i;j<n;j++){
            if(arr[k]>arr[j]) k=j;
        }
        swap(arr[k],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr);
    for(int i:arr) cout<<i<<" ";
    return 0;
    return 0;
}