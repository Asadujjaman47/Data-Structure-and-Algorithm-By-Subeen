#include<stdio.h>

int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i + 1;
}
int parent(int i)
{
    return i/2;
}

int is_max_heap(int H[], int heap_size)
{
    int i, p;

    for(i=heap_size; i>1; i--){
        p = parent(i);

        if(H[p] < H[i]){
            return 0;
        }
    }
    return 1;
}

void max_heapify(int heap[], int heap_size, int i)
{
    int l, r, largest, t;

    l = left(i);
    r = right(i);

    if(l <= heap_size && heap[l] > heap[i]){
        largest = l;
    }
    else{
        largest = i;
    }

    if(r <= heap_size && heap[r] > heap[largest]){
        largest = r;
    }

    if(largest != i){
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;

        max_heapify(heap, heap_size, largest);
    }
}

void print_heap(int heap[], int heap_size)
{
    int i;

    for(i=1; i<=heap_size; i++){
        printf("%d ", heap[i]);
    }
    printf("\n\n");

}

void build_max_heap(int heap[], int heap_size)
{
    int i;

    for(i = heap_size/2; i>= 1; i--){
        max_heapify(heap, heap_size, i);
    }
}

//heap Sort
void heap_sort(int heap[], int heap_size)
{
    int i,t;

    for(i=heap_size; i>1; i--){
        t = heap[1];
        heap[1] = heap[i];
        heap[i] = t;

        heap_size -= 1;

        max_heapify(heap, heap_size, 1);
    }
}


///-----    Priority Queue      <<<--------------

int get_maximum(int heap[])
{
    return heap[1];
}

int extract_max(int heap[], int heap_size)
{
    int max_item = heap[1];

    heap[1] = heap[heap_size];

    heap_size -= 1;

    max_heapify(heap, heap_size, 1);

    return max_item;
}

int insert_node(int heap[], int heap_size, int node)
{
    int i, p, t;

    heap_size += 1;
    heap[heap_size] = node;

    while(i > 1 && heap[i] > heap[parent(i)]){
        p = parent(i);

        t = heap[p];
        heap[p] = heap[i];
        heap[i] = t;

        i = p;
        }
        return heap_size;
}

int main()
{
    int heap_size = 9;
    int heap[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 2};

    print_heap(heap, heap_size);

    //amx heap
    max_heapify(heap, heap_size, 3);

    print_heap(heap, heap_size);

    //build heap
    build_max_heap(heap, heap_size);

    print_heap(heap, heap_size);

    //heap sort
    heap_sort(heap, heap_size);

    print_heap(heap, heap_size);





    return 0;
}
