#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Returns 'true' if the character is a DELIMITER.
bool isDelimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch == ':'
        || ch == '&' || ch == '#' || ch == '%' || ch == '!')
        return (true);
    return (false);
}

// Returns 'true' if the character is an OPERATOR.
bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '>' || ch == '<' || ch == '=' || ch == '%')
        return (true);
        return (false);
}

// Returns 'true' if the string is a VALID IDENTIFIER.
bool validIdentifier(char* str)
{
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' || str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' || str[0] == '9' || isDelimiter(str[0]) == true)
        return (false);
        return (true);
}

// Returns 'true' if the string is a KEYWORD.
bool isKeyword(char* str)
{
    if (!strcmp(str, "auto") || !strcmp(str, "break") || !strcmp(str, "case") || !strcmp(str, "char") || !strcmp(str, "do")
        || !strcmp(str, "continue") || !strcmp(str, "default") || !strcmp(str, "const") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "enum") || !strcmp(str, "case") || !strcmp(str, "if")
        || !strcmp(str, "sizeof") || !strcmp(str, "long") || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned") || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto")|| !strcmp(str, "double") || !strcmp(str, "else")
        || !strcmp(str, "extern") || !strcmp(str, "for") || !strcmp(str, "int") || !strcmp(str, "register")
        || !strcmp(str, "signed") || !strcmp(str, "sort") || !strcmp(str, "union") || !strcmp(str, "while")
        || !strcmp(str, "volatile") || !strcmp(str, "final") || !strcmp(str, "override") || !strcmp(str, "import")
        || !strcmp(str, "module") || !strcmp(str, "public") || !strcmp(str, "protected") || !strcmp(str, "private")
        || !strcmp(str, "true") || !strcmp(str, "try") || !strcmp(str, "export") || !strcmp(str, "explicit")
        || !strcmp(str, "false") || !strcmp(str, "catch") || !strcmp(str, "bool"))

        return (true);
        return (false);
}

// Returns 'true' if the string is an INTEGER.
bool isInteger(char* str)
{
    int i, len = strlen(str);
    bool hasDecimal = false;

    if (len == 0)
        return (false);
    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' || (str[i] == '-' && i > 0)) //&& str[i] != '.'
            return (false);

            if (str[i] == '.')
            hasDecimal = true;
    }
    return (true);
    return (hasDecimal);
}

// Returns 'true' if the string is a REAL NUMBER.
bool isRealNumber(char* str)
{
    int i, len = strlen(str);
    bool hasDecimal = false;

    if (len == 0)
        return (false);
    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != '.' || (str[i] == '-' && i > 0))
            return (false);
        if (str[i] == '.')
            hasDecimal = true;
    }
    return (hasDecimal);
}

// Extraction of SUBSTRING.
char* subString(char* str, int left, int right)
{
    int i;
    char* subStr = (char*)malloc(
                                 sizeof(char) * (right - left + 2));

    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}

// Parsing the input STRING.
void parse(char* str)
{
    int left = 0, right = 0;
    int len = strlen(str);

    while (right <= len && left <= right) {
        if (isDelimiter(str[right]) == false)
            right++;

        if (isDelimiter(str[right]) == true && left == right)
            {
            if (isOperator(str[right]) == true)
                cout << str[right] << " is an operator\n";
            right++;
            left = right;
            }
        else if (isDelimiter(str[right]) == true && left != right || (right == len && left != right))
            {
                char* subStr = subString(str, left, right - 1);
        if (isKeyword(subStr) == true)
                cout <<subStr<< " is a keyword\n";

            else if (isInteger(subStr) == true)
                cout << subStr <<" is an integer\n";

             else if (isRealNumber(subStr) == true)
                cout << subStr << " is a real number\n";

            else if (validIdentifier(subStr) == true && isDelimiter(str[right - 1]) == false)
                cout << subStr <<" is a valid identifier\n" ;

            else if (validIdentifier(subStr) == false && isDelimiter(str[right - 1]) == false)
                cout << subStr <<" invalid identifier\n";
            left = right;
        }
    }
    return;
}
int main()
{
    string line;
   ofstream file;
    file.open("Task1.txt");
    cout<<"Enter tokens "<<endl;
    getline(cin,line);
    file<<line<<endl;
    file.close();

    string newline,res;


     ifstream file1("Task1.txt");

     while(getline(file1,newline))
          {
             res+=newline;
          }
      char ch[500];
      for(int i=0;i<res.size();i++)
        ch[i]=res[i];
   parse(ch);

     file.close();
}
