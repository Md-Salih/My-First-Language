#include <iostream>
#include <vector>
#include <algorithm>

class PriorityQueue {
private:
    std::vector<std::pair<int, int>> heap; // pair of (priority, value)

    void heapifyUp(int index) {
        if (index == 0) return;
        int parentIndex = (index - 1) / 2;
        if (heap[parentIndex].first < heap[index].first) {
            std::swap(heap[parentIndex], heap[index]);
            heapifyUp(parentIndex);
        }
    }

    void heapifyDown(int index) {
        int leftChildIndex = 2 * index + 1;
        int rightChildIndex = 2 * index + 2;
        int largestIndex = index;
        if (leftChildIndex < heap.size() && heap[leftChildIndex].first > heap[largestIndex].first) {
            largestIndex = leftChildIndex;
        }
        if (rightChildIndex < heap.size() && heap[rightChildIndex].first > heap[largestIndex].first) {
            largestIndex = rightChildIndex;
        }
        if (largestIndex != index) {
            std::swap(heap[largestIndex], heap[index]);
            heapifyDown(largestIndex);
        }
    }
public:
    void enqueue(int priority, int value) {
        heap.push_back(std::make_pair(priority, value));
        heapifyUp(heap.size() - 1);
    }

    std::pair<int, int> dequeue() {
        if (heap.empty()) {
            std::cout << "Queue underflow!" << std::endl;
            return std::make_pair(-1, -1);
        }
        std::pair<int, int> top = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return top;
    }

    std::pair<int, int> getTop() {
        if (heap.empty()) {
            std::cout << "Queue is empty!" << std::endl;
            return std::make_pair(-1, -1);
        }
        return heap[0];
    }
};

int main() {
    PriorityQueue queue;
    queue.enqueue(3, 10);
    queue.enqueue(1, 20);
    queue.enqueue(2, 30);
    std::pair<int, int> top = queue.getTop();
    std::cout << "Top element: (" << top.first << ", " << top.second << ")" << std::endl;
    std::pair<int, int> dequeued = queue.dequeue();
    std::cout << "Dequeued element: (" << dequeued.first << ", " << dequeued.second << ")" << std::endl;
    return 0;
}
