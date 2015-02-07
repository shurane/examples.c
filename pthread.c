#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS	5

// based off of
// https://computing.llnl.gov/tutorials/pthreads/samples/hello.c
// TODO start threads randomly

void *thread_code(void *threadid){
    printf("Thread started: #%ld!\n", (long) threadid);
    pthread_exit(NULL);
}

int main(int argc, char **argv){
    long t;
    int rc;
    pthread_t threads[NUM_THREADS];
    for(t=0;t<NUM_THREADS;t++){
        printf("In main: creating thread #%ld\n", t);
        rc = pthread_create(&threads[t], NULL, thread_code, (void *) t);
        if (rc){
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
