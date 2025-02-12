#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
       sum=sum+i; 
    } 
    return sum;
}
    int fact(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
    int prime(int n=6){
        for(int i=2;i<n;i++){
            if(n<2){
                return 0;
            }
            if(n%i==0){
             return 0;
            }
        }
        return 1;
    }
    void increase(int n){
        n++;
    }
    void increase(float &x){
        x++;
    }
    void swap(int x,int y){
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
    void swap(float &x,float &y){
        float temp;
        temp=x;
        x=y;
        y=temp;
    }
int main(){
      // 1. Sum of n numbers
  //    cout<<"The sum is : "<<sum(4)<<endl;

      // 2. Factorial of a number
   //   cout<<"The factorial is : "<<fact(7);

      // 3. Prime number or not
     // cout<<prime(16);

      // 4. Default parameter
    //   cout<<prime(); // It takes n as 6

       // 5. Pass by value and reference
    /*   int x=4;
       increase(x);
       cout<<x<<endl;
       float y=4.01;
       increase(y);
       cout<<y<<endl;

       // 6. Swapping (Pass by value)
       int x=6,y=7;
       cout<<"Before Swapping : \n"<<"x : "<<x<<" y : "<<y<<endl;
       swap(x,y);
       cout<<"After Swapping : \n"<<"x : "<<x<<" y : "<<y<<endl;
*/
       // 7.  Swapping (Pass by value)
       float x=6.02,y=7.03;
       cout<<"Before Swapping : \n"<<"x : "<<x<<" y : "<<y<<endl;
       swap(x,y);
       cout<<"After Swapping : \n"<<"x : "<<x<<" y : "<<y<<endl;


       
    return 0;
}