#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10];
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    
    
    // selection sort start
    
    int smallest;
    for(int i=0;i<n-1;i++){
        smallest=i;
        for(int j=i;j<n;j++){
            if(arr[smallest]>arr[j]){
                smallest=j;
            }
        }
        
        swap(arr[i],arr[smallest]);
        
    }
    
    // selection sort end 
    
     for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";}
    
}
