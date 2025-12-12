#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void maxsubarray(int arr[],int n){
    int currsum =0;
    int maxsum = INT_MIN;
    for(int i =0;i<n;i++){
        currsum+=arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum;
}
int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n =9;
    maxsubarray(arr,n);
}
