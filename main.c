#include <stdio.h>
#include <stdbool.h>
#include "functions/readBuffer.h"


int main(int argc, char const *argv[])
{	
	char choice;
	char *fname;
	while(true)
	{
		printf("What kind of action you need?\n\t1 - Print file content to console\n\t2 - Save file content into an other file\n\t3 - Broadcast file content via socket\n\t4 - Broadcast content via CAN-socket\n");
		printf("Press the right button!\n");
		scanf("%c", &choice);

		if((choice > 0) && (choice < 5)) break;
		else printf("\nPlease give a correct number between 1 and 4!\n");
	}
	printf("Please give me the name of the file! The file must be in the folder /home/atilla/Asztal/OwnProjects/CANSocket/testdata.\n");
	scanf("%s", fname);
	//switch(choice)
	//{
	//case 1:
	//	printToConsole();
	//}
	readFile();
	return 0;
}