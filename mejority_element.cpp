#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n] = {1,2,2,1,1,2,2};
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr[n/2];
}