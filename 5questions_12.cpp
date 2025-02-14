#include <iostream>
using namespace std;
void capital(char word)
{
    char txt;
    txt = word - 32;
    cout << txt;
}
void armstrong(int num)
{
    int count = 0, rem, sum = 0, n, cmpnum;
    n = num;
    cmpnum = num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << count << endl;
    cout << num << endl;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, count);
        n = n / 10;
    }
    if (sum == cmpnum)
    {
        cout << cmpnum << " is an armstrong number.";
    }
    else
    {
        cout << cmpnum << " is not an armstrong number.";
    }
}
void trailingZero(int num)
{
    int count = 0;
    while (num >= 5)
    {
        count = count + num / 5;
        num = num / 5;
        cout << "Total number of trailing zero are : " << count << endl;
    }
}
void rectangle(int a,int b,int c,int d){
    if(a==b&&c==d || a==c&&b==d || a==d&&b==c){
        cout<<"It is a rectangle.\n";
    }else{
        cout<<"It is not a rectangle.\n";
    }
}
void moves(int a,int b){
    int count=0;
    count=count+min(8-a,8-b);
    count=count+min(a-1,b-1);
    count=count+min(a-1,8-b);
    count=count+min(8-a,b-1);
    cout<<"Total moves are : "<<count<<endl;
}
void nimsGame(int num){
    if(num%4!=0){
        cout<<"You win.\n";
    }else{
        cout<<"Opponent win.\n";
    }
}

int main()
{
    // 1. Convert small letter to capital letter
    //  char word;
    // cout<<"Enter a word : ";
    // cin>>word;
    // capital(word);
    // 2. Armstrong number
    //    armstrong(153);
    // 3. Trailing zero
   // trailingZero(20);
    // 4. Check rectangle or not
    // rectangle(7,6,6,7);
     // 5. Moves of bishop
     // moves(3,4);
     // 6. Nim's game
     int num;
     cout<<"Enter the number : \n";
     cin>>num;
     nimsGame(num);


    return 0;
}