#include<iostream>
using namespace std;
int main(){
    /* 
 // 1. Printing right handed triangle
 for(int row=1;row<=5;row++){
    for(int col=1;col<=row;col++){
        cout<<"*"<<" ";
    }
    cout<<endl;
 }
 
 // 2. Ascending number print
 for(int row=1;row<=5;row++){
    for(int col=1;col<=row;col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }        

// 3. Number pattern(2)
for(int row=1;row<=5;row++){
    for(int col=1;col<=row;col++){
        cout<<row<<" ";
    }
    cout<<endl;
 }
 
// 4. Reverse number pattern
for(int row=1;row<=5;row++){
    for(int col=row;col>=1;col--){
        cout<<col<<" ";
    }
    cout<<endl;
 }
 
// 5. Alphabet pattern
for(int row=1;row<=5;row++){
    char name='a'+(row-1);
    for(int col=1;col<=row;col++){
        cout<<name<<" ";
    }
    cout<<endl;
 }

// 6. Star pattern
  for(int row=1;row<=5;row++){
    for(int col=5;col>=row;col--){
        cout<<"*"<<" ";
    }
    cout<<endl;
 }

// 7. Number pattern
for(int row=1;row<=5;row++){
    for(int col=1;col<=5-(row-1);col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }
*/
// 8. Number pattern(2)
for(int row=1;row<=5;row++){
    for(int col=5;col>=5-(row-1);col--){
        cout<<col<<" ";
    }
    cout<<endl;
 }

    return 0;
}