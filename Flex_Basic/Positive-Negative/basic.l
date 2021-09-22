/*. {printf("any character\n");} */

%%
[+]?[0-9]+	{printf("positive integer\n");}
[-][0-9]+	{printf("negative integer\n");}
[a-zA-Z]+	{return 0;}
%%

int yywrap()
{
	/* return 1; */
}

int main()
{
	printf("positive and negative integer recognition\n");
	yylex();
	return 0;
}