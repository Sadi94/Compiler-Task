%{ 
int lines = 0;
int words = 0;
int num =0;
%} 


%% 
\n ++lines; 
("int"|"float"|"double"|"this"|"while"|"if"|"else") {printf("%s - keyword\n",yytext);}
[0-9]+ {++num,printf("%s - numbers\n",yytext);}
[a-zA-Z0-9]+ {++words,printf("%s - identifier/word\n",yytext);}
("+"|"-"|"/"|"*"|","|";"|"="|" "|"()"|"{}"|"[]")  {printf("%s - operator\n",yytext);}
%% 
  
int yywrap()
{
} 


int main(int argc, char **argv) 
{ 
FILE *fp;
char filename[50];
printf("Enter the filename: \n");
scanf("%s",filename);
fp = fopen(filename,"r");
yyin = fp;
yylex();
printf("The number of identifier/word = %d\n",words ); 
printf("The number of lines = %d\n",lines );
printf("The total number = %d\n",num );
return 0;
}