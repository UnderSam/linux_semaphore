#include <stdio.h>
#include "awk_sem.h"

main() {
    int i = 0 ;
    // *** please insert proper semaphore initialization here
	int semid1 = get_sem(".",'1');
	int semid2 = get_sem(".",'2');
	int semid3 = get_sem(".",'3');
	int semid4 = get_sem(".",'4');
    do {
        // *** this is where you should place semaphore 
	/*
	V(semid2);
	V(semid2);
	P(semid3);
	
	printf("P222222222 is here\n"); i++ ;
	V(semid4);
	*/
       // *** this is where you should place semaphore
   	
	//bs here
	P(semid2);
	printf("P222222222 is here\n"); i++ ;
	V(semid3);
	V(semid3);
	
	
    }  while (i < 100);
}
