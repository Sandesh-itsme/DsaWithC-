#include<iostream>
using namespace std;
int main(){
   /*    // Decimal to binary
       int num,rem,sum=0,i=1;
       cout<<"Enter a decimal number : \n";
       cin>>num;
       while(num>0){
       rem=num%2;
        num=num/2;
       sum=sum+rem*i;
       i=i*10;
       }
       cout<<"The number in binary is : \n"<<sum;

       // Binary to decimal
       int num,rem,sum=0,i=0;
       cout<<"Enter a binary number : ";
       cin>>num;
       while(num>0){
        rem=num%10;
        sum=sum+rem*pow(2,i);
        num=num/10;
        i++;
       }
       cout<<"The number in decimal is : "<<sum;
     
        // Decimal to octal
        int num,rem,sum=0,i=1;
        cout<<"Enter a number in decimal : ";
        cin>>num;
        while(num>0){
            rem=num%8;
            sum=sum+rem*i;
            i=i*10;
            num=num/8;
        }
        cout<<"The number in octal is : "<<sum;
 */       
        // Octal to decimal
        int num,rem,sum=0,i=0;
        cout<<"Enter a number in octal : ";
        cin>>num;
       while(num>0){
        rem=num%10;
        sum=sum+rem*pow(8,i);
        num=num/10;
        i++;
       }
       cout<<"The number in decimal is : "<<sum;

       

    return 0;
}