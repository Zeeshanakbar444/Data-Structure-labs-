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

void insertElement(vector<int>& heap, int element) {
    heap.push_back(element);          
    heapifyUp(heap, heap.size() - 1); 
}

void displayHeap(const vector<int>& heap) {
    for (int i : heap) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> maxHeap = {50, 30, 20, 15, 10, 8, 16}; // Example max-heap

    cout << "Original Heap: ";
    displayHeap(maxHeap);

    int newElement;
    cout << "Enter the element to insert: ";
    cin >> newElement;

    insertElement(maxHeap, newElement);

    cout << "Updated Heap: ";
    displayHeap(maxHeap);

    return 0;
}
