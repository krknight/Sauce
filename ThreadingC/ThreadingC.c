/*
 ============================================================================
 Name        : ThreadingC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello Threading in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define MIN(A,B)(A<B?A:B)

void * print_thread_message(void * ptr);
void * critical_section(void * arg);

sem_t mutex;

int main(void) {
	puts("!!!Hello Threading!!!");

	// Macro
	printf("The minimum is %d\n", MIN(7,5));

	int * tptr;
	int value = 0x02;
	tptr = &value;
	printf("The value is %d\n", *tptr);

	for (int i = 10; i >= 0; i--) {
		printf(" %d", i);
	}
	printf("\n");

	pthread_t thread1;
	pthread_t thread2;
	pthread_t * thread;
	thread = &thread2;
	char * message1 = "Thread 1";
	char * message2 = "Thread 2";
	int iret1, iret2;

	sem_init(&mutex,0,1);

//	iret1 = pthread_create(&thread1, NULL, print_thread_message, (void *)message1);
//	iret2 = pthread_create(thread, NULL, print_thread_message, (void *)message2);

	iret1 = pthread_create(&thread1, NULL, critical_section, (void *)message1);
	sleep(1);
	iret2 = pthread_create(thread, NULL, critical_section, (void *)message2);

	pthread_join(thread1, NULL);
	pthread_join(*thread, NULL);


	printf("Thread1 returns %d\n", iret1);
	printf("Thread2 returns %d\n", iret2);

	sem_destroy(&mutex);

	return EXIT_SUCCESS;
}

void * print_thread_message(void * ptr) {
	char * message = ptr;
	printf("%s\n", message);
	return ptr;
}

void * critical_section(void * arg) {
	// wait
	sem_wait(&mutex); // wait to take
	printf("\nEntered Critical Section...\n");
	print_thread_message(arg);
	sleep(5);
	printf("\nExiting Critical Section...\n");
	sem_post(&mutex); // give it back
	return arg;
}
