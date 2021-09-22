#include <iostream>

using namespace std;

int main()
{
    string regexp, usertext;
   cout<<"Enter the regular expression-";
   cin>>regexp;

   if(regexp=="abc"){
       cout<<"Enter the use text-";
       cin>>usertext;

       if (usertext==regexp){
        cout<<"Pattern Matched";
       }
       else{
          cout<<"Pattern not Matched";
       }

   }
   else if(regexp=="abc*") {
       cout<<"Enter the use text-";
       cin>>usertext;

          if (usertext.size()<2){
            cout<<"Pattern not Matched";
       }
       else {
            if(usertext[0]!='a' || usertext[1]!='b') {
             cout<<"Pattern not Matched";
           }else{
              for(int i=2;i<=usertext.size();i++){
                 if(usertext[i]!='c'){
                    cout<<"Pattern  not Matched";
                     return 0;
                 }
              }
               cout<<"Pattern  Matched";
           }
       }

   } else if(regexp=="abc+") {
       cout<<"Enter the use text-";
       cin>>usertext;

          if (usertext.size()<3){
            cout<<"Pattern not Matched";
       }
       else {
            if(usertext[0]!='a' || usertext[1]!='b' || usertext[2]!='c') {
             cout<<"Pattern not Matched";
           }else{
              for(int i=3;i<=usertext.size();i++){
                 if(usertext[i]!='c'){
                    cout<<"Pattern  not Matched";
                     return 0;
                 }
              }
               cout<<"Pattern Matched";
           }
       }

    }else{
         cout<<"Regular expression not implement";
    }

    return 0;
}
