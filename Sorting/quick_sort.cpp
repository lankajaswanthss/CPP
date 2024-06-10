#include<bits/stdc++.h>
using namespace std;
int quick(vector<int> &arr, int l,int h){
    int pivot = arr[l];
    int i = l+1;
    int j = h-1;
    while(j>i){
        while (pivot>=arr[i]) i++;
        while (pivot<arr[j]) j--;
        if(j>i)
        swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[l]);
    return j;
}
void quick_sort(vector<int> &arr, int l,int h){
    int j;
    if(l<h){
        j = quick(arr,l,h);
        quick_sort(arr,l,j);
        quick_sort(arr,j+2,h);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n);
    for(int i:arr) cout<<i<<" ";
    return 0;
}