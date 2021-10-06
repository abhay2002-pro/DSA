#include<bits/stdc++.h>

using namespace std;

class MinHeap{
    int* harr;
    int capacity;
    int heap_size;

public:
    MinHeap(int a[],int size);
    void MaxHeapify(int i);
    int parent(int i) {
        return (i-1)/2;
    }
    int left(int i){
        return (2*i + 1);
    }
    int left(int i){
        return (2*i + 2);
    }

    int extractMax();
    int getMin(){
        return harr[0];
    }
};

