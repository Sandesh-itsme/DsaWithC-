#include<iostream>
using namespace std;
int main(){
    /*
      // 1. left star pattern
      for(int row=1;row<=5;row++){
       for(int space=1;space<=5-row;space++){
        cout<<"  ";
       }
       for(int col=1;col<=row;col++){
        cout<<"* ";
       }
       cout<<endl;
      }
// 2. Number pattern
   for(int row=1;row<=5;row++){
    for(int space=1;space<=5-row;space++){
      cout<<"  ";
    }
    for(int col=1;col<=row;col++){
        cout<<row<<" ";
    }
    cout<<endl;
   } 

   // 3. Number pattern
   for(int row=1;row<=5;row++){
    for(int space=1;space<=5-row;space++){
      cout<<"  ";
    }
    for(int col=1;col<=row;col++){
      cout<<col<<" ";
    }
    cout<<endl;
   }
    
   // 4. Alphabet pattern
   for(int row=1;row<=5;row++){
    for(int space=1;space<=5-row;space++){
      cout<<"  ";
    }
    for(int col=1;col<=row;col++){
      char name='A'+(col-1);
      cout<<name<<" ";
    }
    cout<<endl;
   }

// 5. Number pattern
   for(int row=1;row<=5;row++){
    for(int space=1;space<=5-row;space++){
      cout<<"  ";
    }
    for(int col=row;col>=1;col--){
      cout<<col<<" ";
    }
    cout<<endl;
   }
*/
   // 6. Pyramid pattern
   for(int row=1;row<=5;row++){
    for(int space=1;space<=5-row;space++){
      cout<<"  ";
    }
    for(int col1=1;col1<=row;col1++){
      cout<<"* ";
    }
    for(int col2=1;col2<row;col2++){
      cout<<"* ";
    }
    cout<<endl;
   }



    return 0;
}