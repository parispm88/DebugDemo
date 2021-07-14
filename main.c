#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void *one_second(void *arg) 
{
    for (int i = 0; i < 8; i++)
    {
        sleep(1);
        printf("1\n");
    }

    return NULL;
}

void two_second()
{
    for (int i = 0; i < 4; i++)
    {
        sleep(2);
        printf("2\n");
    }
}

int main(int argc, char *argv[]) 
{
    pthread_t new_thread;

    int int_1 = 0;
    float flt_1 = 0.0f;

    int int_2;
    float flt_2;

    int *int_ptr;
    float *flt_ptr = NULL;

    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int *arr2 = NULL;
    
    arr2 = calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        arr2[i] = i;
    }
    
    int_ptr = arr2[8];

    pthread_create(&new_thread, NULL, one_second, arr2);

    two_second();

    int_1 = int_ptr + 2;

    flt_1 = int_1 + 1;

    pthread_join(new_thread, NULL);
}