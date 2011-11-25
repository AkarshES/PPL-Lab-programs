%{
	#include "y.tab.h"
%}
%%
[0-9] {yylval = atoi(yytext);return N;}
\+\+ {return I;}
\-\-	{return D;}
.	{printf("%s",yytext);}
%%
