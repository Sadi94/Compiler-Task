/*
[A-Za-z0-9]	{printf("alpha numeric\n");}
. {printf("Wrong Input\n");}
*/

/* Rules */
%%
"hello world"	{printf("GOODBYE\n");}
end	{return 0;}

%%

/* User defined function */
int yywrap()
{
	return 1;
}

/* Main */
int main()
{
	yylex();	
	return 0;
}