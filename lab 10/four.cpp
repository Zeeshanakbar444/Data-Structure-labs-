#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void printHeap(priority_queue<int> heap) {
    cout << "Heap elements (top to bottom): ";
    while (!heap.empty()) {
        cout << heap.top() << " "; 
        heap.pop();                
    }
    cout << endl;
}

int main() {
    priority_queue<int> maxHeap; 

    vector<int> elements = {10, 20, 5, 7, 30, 15};

    cout << "Inserting elements: ";
    for (int el : elements) {
        cout << el << " ";
        maxHeap.push(el);
    }
    cout << endl;

    cout << "Heap after inserting elements:" << endl;
    printHeap(maxHeap);

    return 0;
}
