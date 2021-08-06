#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char username;
	int password;
	
		
	printf("Enter username\n");
	scanf("%s", &username);
	printf("Enter password\n");
	scanf("%d", &password);
	
	if(username == 'm' && password == 1 ){
		printf("you are logged in!\n");
		printf("Welcome to Homepage!");
	}
	else
	{
		printf("Username/Password does not matched! \n please enter correct unsername & password ");
	}
	return 0;
}
