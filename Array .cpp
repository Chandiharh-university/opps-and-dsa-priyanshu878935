//Array 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;  
    cout<<"Enter the size of the array";
    cin>>size;
    
    if(size<=0){
        cout<<"Array size must be positive "<<endl;
        return 1;
        
    }
    vector <int>arr(size);
    cout<<"Enter the elements of the array :";
    for(int i = 0;i<size; i++){
        cout<<"("<<i+3<<")"<<arr[i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;
    return 0;
    
}