#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10];
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    
    int swapped=0;
    // bubble sort start
    
   for(int i=n-2;i>=0;i--){
       swapped=0;
       for(int j=0;j<=i;j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
               swapped=1;
           }
       }
       if(swapped==0){
           break;
       }
   }
    
    // bubble sort end 
    
     for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";}
    
}
