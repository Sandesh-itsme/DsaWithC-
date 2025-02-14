#include<iostream>
using namespace std;
int main(){
  // 1. Minimum element of an array
  int arr[5];
  cout<<"Enter the elements : \n";
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
  cout<<"\nThe elements are : \n";
  for(int i=0;i<5;i++){
    cout<<arr[i]<<"\t";
  }
  int min=arr[0];
  for(int i=0;i<5;i++){
    if(arr[i]<min){
        min=arr[i];
    }
  }
  cout<<"\nThe minimum element is : "<<min<<endl;
  // 2. Maximum element of an array
  int max=arr[0];
  for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
  }
  cout<<"The maximum element is : "<<max<<endl;


  
    return 0;
}