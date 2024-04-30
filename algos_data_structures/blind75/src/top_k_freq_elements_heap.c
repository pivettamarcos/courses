typedef struct FreqElem {
    int freq;
    int elem;
} freq_elem;

typedef struct Heap {
    freq_elem* arr;
    int size;
    int capacity;
} heap;

// Defining maxHeapify_bottom_up function
void maxHeapify(heap* h, int index)
{
    // Store parent of element at index
    // in parent variable
    int parent = (index - 1) / 2;
 
    if (h->arr[parent].freq < h->arr[index].freq) {
        // Swapping when child is smaller
        // than parent element
        freq_elem temp = h->arr[parent];
        h->arr[parent] = h->arr[index];
        h->arr[index] = temp;
 
        // Recursively calling maxHeapify_bottom_up
        maxHeapify(h, parent);
    }
}

heap* createHeap(int capacity)
{
    // Allocating memory to heap h
    heap* h = (heap*)malloc(sizeof(heap));
    h->size = 0;
    h->capacity = capacity;
    h->arr = (freq_elem*)malloc(capacity * sizeof(freq_elem));
 
    return h;
}

void insertHeap(heap* h, freq_elem* data)
{
    if (h->size < h->capacity) {
        h->arr[h->size] = *data;
        maxHeapify(h, h->size);
        h->size++;
    }
}

void initHashTable(int* hashTable, int size){
  for (int i = 0; i < size; i++){
    hashTable[i] = 0;
    //printf("%d", hashTable[i]);
  }
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    size_t sizeTable = 999;
    int* hashTable = (int*) malloc(sizeTable * sizeof(int));
    initHashTable(hashTable, sizeTable);
    heap* hp = createHeap(numsSize);
    for(int i=0; i<numsSize; i++){
        hashTable[nums[i]]++;
        //printf("%d ", hashTable[nums[i]]);
    }

    for(int i=0; i<sizeTable; i++){
        if(hashTable[i]>0){
            freq_elem* new_heap_elem = (freq_elem*) malloc(sizeof(freq_elem));
            new_heap_elem->freq = hashTable[i];
            new_heap_elem->elem = i;
            insertHeap(hp, new_heap_elem);
            //printf("%d ", new_heap_elem->elem);
        }
    }

    returnSize = (int*) calloc(k, sizeof(int));
    for(int i = 0; i < k; i++){
        returnSize[i] = hp->arr[i].elem;
    }

    free(hashTable);
    free(hp);

    for(int i = 0; i < k; i++){
        printf("%d ", returnSize[i]);
    }

    return returnSize;
}

int main(void) {
  int* returnSize;
  int nums[] = {1,1,1,2,2,3};
  int numSize = 6;
  int k = 2;

  topKFrequent(nums,numSize,k,returnSize)

  free(returnSize);
  return 0;
}