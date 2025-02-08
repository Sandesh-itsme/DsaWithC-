#include <iostream>
using namespace std;
int main()
{
  /*
    // 1. Pattern 1 : rectangular star
   for(int row=0;row<=4;row++){
    for(int col=0;col<=4;col++){
       cout<<"* ";
    }
    cout<<endl;
   }

 // 2 . Pattern number
        for(int row=1;row<=5;row++){
          for(int col=1;col<=5;col++){
             cout<<row<<" ";
          }
          cout<<endl;
        }

 // 3 . Pattern number
         for(int row=1;row<=5;row++){
          for(int col=1;col<=5;col++){
            cout<<col<<" ";
          }
          cout<<endl;
         }

 // 4 . Descending number pattern
       for(int row=1;row<=5;row++){
             for(int col=5;col>=1;col--){
             cout<<col<<" ";
            }
            cout<<endl;
       }
 
  // 5 . Alphabet pattern
  for(int row=1;row<=5;row++){
    char name='a'+(row-1);
      for(int col=1;col<=5;col++){
        cout<<name<<" ";
      }
      cout<<endl;
  }
  
// 6 . Ascending alphabet pattern
   for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
      char name='a'+(col-1);
      cout<<name<<" ";
    }
    cout<<endl;
   } 

   // or
   for(int row=1;row<=5;row++){
    for(char col='a';col<='e';col++){
      cout<<col<<" ";
    }
    cout<<endl;
   }

   // 7 . Number pattern
   int count=1;
   for(int row=1;row<=5;row++){
    for(int col =1;col<=5;col++){
      cout<<count<<" ";
      count=count+1;
    }
    cout<<endl;
   }
*/
// 8 . Ascending square pattern 
   for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
      cout<<col*col<<" ";
    }
    cout<<endl;
   }
  return 0;
}