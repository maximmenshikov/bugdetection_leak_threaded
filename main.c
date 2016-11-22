#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int *n = NULL;

void *thread(void *arg)
{
    if (n == NULL)
        n = malloc(50);
    return NULL;
}

int main()
{
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, thread, NULL);
    pthread_create(&thread2, NULL, thread, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    free(n);
    return 0;
}
