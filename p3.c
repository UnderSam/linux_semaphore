#include <stdio.h>
#include "awk_sem.h"

main() {
    int i = 0 ;
	int semid1 = get_sem(".",'1');
	int semid2 = get_sem(".",'2');
	int semid3 = get_sem(".",'3');
	int semid4 = get_sem(".",'4');
    do {
        // *** this is where you should place semaphore
	/*
	V(semid3);
	V(semid3);
	P(semid2);
	
	P(semid4);
	printf("P3333333 is here\n"); i++ ;
	V(semid4);
       // *** this is where you should place semaphore
	*/

	V(semid1);
	
	P(semid3);
	printf("P3333333 is here\n"); i++ ;
       
    }  while (i< 200);
}
