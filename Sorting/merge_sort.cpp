#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int l, int m, int h){
    vector<int>b;
    int i=l;
    int j = m+1;
    while(i<=m && j<=h){
        if(arr[i]<arr[j]){
            b.push_back(arr[i]);
            i++;
        }
        else {
            b.push_back(arr[j]);
            j++;
        }
    }
     while (i <= m) { 
        b.push_back(arr[i]);
        i++;
    }

    
    while (j <= h) { 
        b.push_back(arr[j]);
        j++;
    }
    int k = l;
    for (int x : b) {
        arr[k] = x;
        k++;
    }
}

void merge_sort(vector<int> &arr,int l,int h){
    if(l<h){
        int mid = (l+h)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n);
    for(int i:arr) cout<<i<<" ";
    return 0;
}