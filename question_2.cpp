#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int arr[n]={19,12,23,8,16};
    // vector<int>v(n,0);
    int x=0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = 0;
        for(int j=0;j<n;j++){
            if(arr[j]<=0) continue;
            else 
            if(min>arr[j]){
                min=arr[j];
                mindx=j;
            }
        }
        arr[mindx]=-x;
        x++;
    }
    //print array
    for(int i=0;i<n;i++){
        arr[i]=-arr[i];
        cout<<arr[i]<<" ";
    }
    
}