#include <time.h>
#include <stdio.h>
#include <stdlib.h>



int main()
{
	srand(time(NULL));
	int hashInt = 0;
	for(int i = 0; i<14; i=i+1)
	{
		hashInt = rand() % 9999999;
		if(i%2 == 0)
			printf("/give widrick minecraft:chest 1 0 {DataEntityTag:{Lock:Key_%d_%d},Display:{Name:\"Mailbox %d\"}}\n",i+1,hashInt,i+1);
		else
			printf("/give widrick minecraft:trapped_chest 1 0 {DataEntityTag:{Lock:Key_%d_%d},Display:{Name:\"Mailbox %d\"}}\n",i+1,hashInt,i+1);
			
		printf("/give widrick drawers:personal_key 1 0 {Display:{Name:\"Key_%d_%d\"}}\n\n",i+1,hashInt);
	}

}
