#include <iostream>
using namespace std;
int main()
{
    /*       // 1. Sum of given elements
           int num,rem,sum=0;
           cout<<"Enter the number : ";
           cin>>num;
           while(num>0){
            rem=num%10;
            sum=sum+rem;
            num=num/10;
           }
           cout<<"The sum is : "<<sum;

            // 2. Leap year or not
            int year;
            cout<<"Enter the year : ";
            cin>>year;
            if(year%400==0){
                cout<<"The year "<<year<<" is leap year.";
            }else if(year%4==0&&year%100!=0){
                cout<<"The year "<<year<<" is leap year.";
            }else{
                cout<<"The year "<<year<<" is not leap year.";
            }

            // 3. Reverse a number and check overflow
            int num,rem,sum=0;
            cout<<"Enter a number : ";
            cin>>num;
            while(num>0){
                rem=num%10;
                if(sum>INT_MAX/10 || sum<INT_MIN/10){
                    cout<<"Overflow";
                }
                sum=sum*10+rem;
                num=num/10;
            }
            cout<<"The number is : "<<sum;
    */
    // 4. Power of 2
    int num, org, rem, sum = 0, i = 1;
    cout << "Enter a number : ";
    cin >> num;
    org = num;
    while (num > 0)
    {
        rem = num % 2;
        sum = sum + rem * i;
        num = num / 2;
        i = i * 10;
    }
    while (sum != 1)
    {
        if (sum % 10 == 1)
        {
            cout << org << " is not power of 2.";
        }
        sum = sum / 10;
    }
      cout << org << " is power of 2.";

    return 0;
}
