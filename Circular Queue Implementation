class CircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int size;

public:
    CircularQueue(int capacity) {
        this->capacity = capacity;
        this->front = 0;
        this->rear = -1;
        this->size = 0;
        this->arr = new int[capacity];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int element) {
        if (isFull()) {
            std::cout << "Queue overflow!" << std::endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = element;
        size++;
    }

int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue underflow!" << std::endl;
            return -1;
        }
        int temp = arr[front];
        front = (front + 1) % capacity;
        size--;
        return temp;
    }

    int getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    CircularQueue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << "Front element: " << queue.getFront() << std::endl;
    std::cout << "Dequeued element: " << queue.dequeue() << std::endl;
    return 0;
}

