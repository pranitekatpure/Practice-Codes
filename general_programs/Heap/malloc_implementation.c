/* 
Malloc implementation
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct heap_s
{
	char *pHeapBegin;	/* Pointer to the first byte of the heap. */
	char *pHeap;		/* Walking pointer to the next allocatable byte. */
	char *pHeapEnd;		/* Pointer to the last byte in the heap. */
}heap_t;
	
char arr[100];

#define HEAP_INIT(start, end) 				\
{											\
	start,									\
	start,									\
	end										\
}										

heap_t heap_1 = HEAP_INIT(arr, arr + 100); 

#define HEAP_ID_1 (&heap_1)

typedef struct heap_s *heap_id_t;

/*------------------------------------------------------------*/
void *my_malloc(heap_id_t heap_id, int size)
{
	void *pMem = NULL;
	if(heap_id)
	{
		/* Lock: enter critical section */
		/* Determine if there is enough size on heap to allocate*/
		if(size <= heap_id->pHeapEnd - heap_id->pHeap)
		{
			pMem = heap_id->pHeap;
			heap_id->pHeap += size;
		}
		else
		{
			/* not enough memory */
			/* callback etc. */
			printf("Not enough memory on heap.\n");
		}
		/* Unlock: exit critical section */
	}
	return pMem;
}

/*------------------------------------------------------------*/

int main()
{
    char *ptr = (char*)malloc(100);
	
	heap_t heap_1 = HEAP_INIT(ptr, ptr + 100);
	
	char *ptr1 = (char*)my_malloc(HEAP_ID_1, 50);
	
	if(ptr1)
	{
		printf("Memory allocated successfully.\n");
	}
	else
	{
		printf("Failed to allocate memory.\n");
	}
	if(ptr1)
	{
		ptr1 = "My memory allocation...yeppee";
		printf("%s\n", ptr1);
	}
	
	ptr1 = my_malloc(HEAP_ID_1, 60);
    return 0;
}