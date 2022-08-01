#include<bits/stdc++.h>
using namespace std;
void printArray(int *arr,int n){

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mx = INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>mx){
        mx = arr[i];
    }
}
int counter[mx+1];

for(int i=0;i<=mx;i++){
    counter[i] = 0;
}
for(int i=0;i<n;i++){
    counter[arr[i]]++;
}

for(int i=1;i<=mx;i++){
    counter[i] += counter[i-1];
}
int finalArr[n];
for(int i=n-1;i>=0;i--){
    counter[arr[i]]--;
    int k = counter[arr[i]];
    finalArr[k] = arr[i];
}
printArray(finalArr,n);

return 0;
}
