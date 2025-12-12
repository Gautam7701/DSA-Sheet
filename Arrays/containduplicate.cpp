#include<iostream>
#include<unordered_set>
using namespace std;

bool containduplicate(int arr[], int n){
    unordered_set<int> s;
    for(int i =0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main(){
    int arr[6]={1,2,3,4,5,1};
    if(containduplicate(arr,6)){
        cout<<"Array contains duplicates"<<endl;;
    }
    else{
        cout<<"Array does not contain duplicates"<<endl;
    }
}