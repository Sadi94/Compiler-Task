#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//removeComments
string rC(string programme)
{
    int n = programme.length();
    string result;
    bool s = false;
    bool m = false;
    for (int i=0; i<n; i++)
    {
         if (programme[i] == '/' && programme[i+1] == '/')
            {
                s = true;
                 i++;
            }
        else if (programme[i] == '/' && programme[i+1] == '*')
           {

            m = true;
              i++;
           }
        else if (s == true && programme[i] == '\n')
            s = false;
        else if  (m == true && programme[i] == '*' && programme[i+1] == '/')
            m = false,  i++;
        else if (s || m)
            continue;
        else  result += programme[i];
    }
    return result;
}

int main()
{
    string programme = " #include<stdio.h>"
                  "   int main()  \n"
                  "   {           \n"

                  "      printf(hello world!);//this is first line   \n"
                  "                   return 0 ; \n"
                  "      /* This is a test  \n"
                  "          multiline     \n"
                  "          comment for   \n"
                  "          testing */      \n"

                  "   }           \n";
    cout << "Given Program \n";
    cout << programme << endl;
    cout << " Modified Program ";
    cout << rC(programme);
    return 0;
}
