#include<bits/stdc++.h>
using namespace std;
void insertion(vector<int> &arr){
    int n = arr.size();
    int j,x;
    for(int i=1; i<n; i++){
        j=i-1;
        x = arr[i];
        while(j>-1 && x<arr[j]){
            arr[j+1] = arr[j]; 
            j--;
        }
        arr[j+1] = x;

    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr);
    for(int i:arr) cout<<i<<" ";
    return 0;
    return 0;
}