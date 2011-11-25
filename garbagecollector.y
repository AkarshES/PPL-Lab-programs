%{
	#include<stdio.h>
	int variables[10]={0};
%}
%token N I D
%%
S:N I	{	printf("Matched");
		variables[$1]++;
		return 0;
		}
|N D	{
			if(variables[$1] == 0)
				printf("Dangling Reference");
			else if (variables[$1] == 1)
			{
				variables[$1] = 0;
				printf("Removing variable %d",$1);
			}
			else
				variables[$1]--;
			return 0;
		}
;
%%
main()
{
	char c = 'y';
	do{
		printf("next op\n");
		yyparse();
		printf("Continue?(y/n)");
		scanf("%c",&c);
	}while(c != 'n');
	return 0;
}
yyerror()
{
	printf("Invalid Operation");
}

yywrap()
{
	return 1;
}
