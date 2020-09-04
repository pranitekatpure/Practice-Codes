#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

unsigned int lock  = 0;

void *commonfunction(void *para)
{
	printf("Thread %d trying \n\r", *(int*)para);
	while(lock);
	lock  = 1;
	printf("Thread %d started\n\r", *(int*)para);
	//sleep(10);
	printf("Thread %d finished\n\r", *(int*)para);
	lock = 0;
	
	return NULL;
}

int main()
{
	pthread_t tid1, tid2;
	int p1 = 1, p2 = 2;

	pthread_create(&tid1, NULL, &commonfunction, &p1);
       	pthread_create(&tid2, NULL, &commonfunction, &p2);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);
	return 0;
}	
