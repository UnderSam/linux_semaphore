#include <stdio.h>
#include "awk_sem.h"

main() {
    int i = 0 ;
	int semid1 = create_sem(".",'1',0);
	int semid2 = create_sem(".",'2',0);
	int semid3 = create_sem(".",'3',0);
	int semid4 = create_sem(".",'4',0);
    // *** Please insert proper semaphore initialization here
    do {
        // *** this is where you should place semaphore   
	/*
	P(semid2);
	P(semid3);
	printf("P1111111111 is here\n"); i++;
	*/
	
	P(semid1);
	printf("P1111111111 is here\n"); i++;
	V(semid2);
	P(semid1);
  
       // *** this is where you should place semaphore
   
    }  while (i < 100 );
}
