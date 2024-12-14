#include <iostream>
#include <vector>
using namespace std;

void heapifyUp(vector<int>& heap, int index) {
    while (index > 0) {
        int parent = (index - 1) / 2; 

        if (heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent; 
        } else {
            break; 
        }
    }
}

void heapifyDown(vector<int>& heap, int index) {
    int size = heap.size();
    while (index < size) {
        int leftChild = 2 * index + 1; 
        int rightChild = 2 * index + 2; 
        int largest = index; 

        if (leftChild < size && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }

        // Compare with the right child
        if (rightChild < size && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }

        if (largest != index) {
            swap(heap[index], heap[largest]);
            index = largest; 
        } else {
            break; 
        }
    }
}



void deleteRoot(vector<int>& heap) {
    if (heap.empty()) {
        cout << "Heap is empty. Nothing to delete." << endl;
        return;
    }

    cout << "Deleting root element: " << heap[0] << endl;
    heap[0] = heap.back();
    heap.pop_back();       
    heapifyDown(heap, 0);  
}

void displayHeap(const vector<int>& heap) {
    for (int i : heap) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> maxHeap = {50, 30, 20, 15, 10, 8, 16}; 

    cout << "Original Heap: ";
    displayHeap(maxHeap);

    int newElement;


    cout << "Updated Heap: ";
    displayHeap(maxHeap);

    deleteRoot(maxHeap);

    cout << "Heap after deleting root: ";
    displayHeap(maxHeap);

    return 0;
}
