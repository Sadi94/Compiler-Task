#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    cout <<"Enter expression : " << endl;
    cin>>ch;

    if(ch[0]=='*'||ch[0]=='/'||ch[0]=='%')
    {
        cout<<"Invalid expression"<<endl;
    }
    else
    {
        int r=0;
        for(int i=0;i<ch.size()-1;i++)
        {
             if((ch[i]==' '||ch[i]=='/'||ch[i]=='*'||ch[i]=='+'||ch[i]=='-'||ch[i]=='%')&&
                 (ch[i+1]==' '||ch[i+1]=='/'||ch[i+1]=='*'||ch[i+1]=='+'||ch[i+1]=='-'||ch[i+1]=='%'))
                  {
                    r=1;
                    break;
                  }
        }
        int m=ch.size()-1;
        if(r==0&&(ch[m-1]!='*'||ch[m-1]!='/'||ch[m-1]!='+'||ch[m-1]!='-'||ch[m-1]!='%'))
            cout<<"Valid expression"<<endl;
        else
        {
            cout<<"Not valid expression"<<endl;
        }
    }
}
