#include <stdio.h>
#include <stdlib.h>

#define SIZE ((int) sizeof(array) / sizeof(array[0]))

void selection_sort(int n, int arr[]);

int main()
{
    int array[10], i;

    printf("Enter %d numbers to be sorted: ",SIZE);
    for(i = 0; i < SIZE; i++)
        scanf("%d",&array[i]);

    selection_sort(SIZE,array);

    for(i = 0; i < SIZE; i++)
        printf("%d ",array[i]);

    return 0;
}

void selection_sort(int n, int arr[]) {
    if(n > 1) {
        int i, el, highest_pos = 0, highest = arr[0];
        for(i = 0; i < n; i++) {
            if(highest < arr[i]) {
                highest = arr[i];
                highest_pos = i;
            }
        }
        el = arr[n - 1];
        arr[n - 1] = highest;
        arr[highest_pos] = el;
        selection_sort(n - 1,arr);
    }
}
