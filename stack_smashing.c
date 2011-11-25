#include<stdio.h>
#include<string.h>
int check_pwd(char *pwd)
{
	int flag = 0;
	char buffer[10];
	strcpy(buffer,pwd);
	if(strcmp(buffer,"mypass")==0)
	{
			flag = 1;
	}
	if(strcmp(buffer,"yourpass")==0)
	{
		flag = 1;
	}
	return flag;
}

int main(int argc,char *argv[])
{
	if(argc >= 2)
	{
		if(check_pwd(argv[1]))
		{
			printf("Access Granted");
		}
		else
		{
			printf("Access denied");
		}
	}
	else
	{
		printf("please enter pwd");
	}
	return 0;
}
