#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>


using namespace std;

int top = 0;
char stack[100];

void push(char);
void pop();
void find_top();

int main()
{

	char a[100];
	cout<<("Enter your expression\n");
	cin>>a;
	for (int i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
			top++;
		}
		else if (a[i] == ')')
		{
			top--;
		}

		if(top<0)
        {
            break;
        }
	}

	if(top==0)
    {
        cout<<"\nexpression is valid\n";
    }
    else
        cout<<"\nexpression is invalid\n";

}
