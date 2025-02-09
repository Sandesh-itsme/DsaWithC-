#include<iostream>
using namespace std;
int main(){
   /*
      // 1. Print pattern
      for(int row=1;row<=5;row++){
        for(int space=1;space<=5-row;space++){
            cout<<"  ";
        }
        for(int col=1;col<row;col++){
            cout<<col<<" ";
        }
        for(int col=row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
         }
        
         // 2. Print downward pyramid
         for(int row=1;row<=5;row++){
            for(int space=1;space<=row;space++){
                cout<<"  ";
            }
            for(int col=5;col>=row;col--){
                cout<<"* ";
            }
            for(int col=5;col>row;col--){
                cout<<"* ";
            }
            cout<<endl;
         }
            
         // Another process
         for(int row=4;row>=1;row--){
            for(int space=1;space<=4-row;space++){
                cout<<"  ";
            }
            for(int col=1;col<=2*row-1;col++){
                cout<<"* ";
            }
            cout<<endl;
         }
            
           // 3. Print pattern
           for(int row=4;row>=1;row--){
             for(int col=1;col<=row;col++){
                cout<<"* ";
            }
            for(int space=1;space<=8-2*row;space++){
                cout<<"  ";
            }
            for(int col=1;col<=row;col++){
                cout<<"* ";
            }
            cout<<endl;
           }
            // 2nd part
            for(int row=1;row<=4;row++){
            for(int col=1;col<=row;col++){
               cout<<"* ";
           }
           for(int space=1;space<=8-2*row;space++){
               cout<<"  ";
           }
           for(int col=1;col<=row;col++){
               cout<<"* ";
           }
           cout<<endl;
          }
           
           // 4. Print pattern
           for(int row=1;row<=4;row++){
            for(int col=1;col<=row;col++){
                cout<<"* ";
            }
            for(int space=1;space<=8-2*row;space++){
                cout<<"  ";
            }
            for(int col=1;col<=row;col++){
                cout<<"* ";
            }
            cout<<endl;
           }
             // 2nd part
           for(int row=3;row>=1;row--){
            for(int col=1;col<=row;col++){
                cout<<"* ";
            }
            for(int space=1;space<=8-2*row;space++){
                cout<<"  ";
            }
            for(int col=1;col<=row;col++){
                cout<<"* ";
            }
            cout<<endl;
           }
            */
           // 5. Print pattern
           for(int row=1;row<=4;row++){
           for(int space=1;space<=4-row;space++){
            cout<<" ";
           }
           for(int col=1;col<=row;col++){
            cout<<"* ";
           }
           for(int space=1;space<=4-row;space++){
            cout<<" ";
           }
           cout<<endl;
           }
           // 2nd part
           for(int row=3;row>=1;row--){
            for(int space=1;space<=4-row;space++){
             cout<<" ";
            }
            for(int col=1;col<=row;col++){
             cout<<"* ";
            }
            for(int space=1;space<=4-row;space++){
             cout<<" ";
            }
            cout<<endl;
            }





    return 0;
}