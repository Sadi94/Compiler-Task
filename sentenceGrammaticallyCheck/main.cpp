#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    cout <<"Enter Sentences : " << endl;
    getline(cin,ch);
    int n = ch.size();

    if((ch[0]>='a'&&ch[0]<='z')||ch[0]==' '||ch[0]=='.')
        cout<<"Grammatically not correct "<<endl;
        else if(ch[n-1]!='.')
             cout<<"Grammatically not correct "<<endl;
    else
    {
        int sentence=0;
        for(int i=0;i<ch.size()-1;i++)
        {
            if((ch[i]>='A'&&ch[i]<='Z')&&(ch[i+1]>='A'&&ch[i+1]<='Z'))
            {
                sentence=1;
                break;
            }
            if(ch[i]==' '&&ch[i+1]==' ')
            {
                sentence=1;
                break;
            }
            if((ch[i]>='a'&&ch[i]<='z')&&ch[i+1]>='A'&&ch[i+1]<='Z')
            {
                sentence=1;
                break;
            }
            if(ch[i]==' ' && ch[i+1]=='.')
            {
                sentence=1;
                break;
            }
        }
        if(sentence)
            cout<<"Grammatically not correct "<<endl;
        else
            cout<<"Grammatically correct "<<endl;
    }
}
