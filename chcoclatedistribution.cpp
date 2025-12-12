#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int chocolatedistribution(int arr[],int m, int n){
    sort(arr,arr+n);
    int i =0;
    int j =m-1;
    int ans = INT_MAX;
    while(j<n){
        ans=min(ans,arr[j]-arr[i]);
        i++;
        j++;
    }
    return ans;
}
int main(){
    int arr[]={3,4, 1, 9, 56, 7, 9, 12};
    int m =5;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<chocolatedistribution(arr,m,n);
}