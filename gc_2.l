%{
	#include "y.tab.h"
%}
%%
[0-9]"++"	{printf("%s",yytext);}
[0-9]"--"	{printf("%s",yytext);}
.	;
%%
int main()
{
	yylex();
	return 0;
}
yywrap()
{
	return 0;
}
