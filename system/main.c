/*  main.c  - main */

#include <xinu.h>

process	main(void)
{
	pid32	shpid;		/* Shell process ID */


	kprintf("About to call handler");
	asm("int $40");
	kprintf("Back in main.. Handler is done");


	return OK;
}
