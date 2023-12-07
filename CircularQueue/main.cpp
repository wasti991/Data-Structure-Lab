#include <iostream>

class Queue {
private:
    int rear, front;
    int size;
    int *arr;

public:
    Queue(int s) : front(-1), rear(-1), size(s), arr(new int[s]) {}

    void enQueue(int value);
    int deQueue();
    void displayQueue();
};

void Queue::enQueue(int value) {
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
        std::cout << "\nQueue is Full" << std::endl;
        return;
    } else if (front == -1) {
        front = rear = 0;
        arr[rear] = value;
    } else if (rear == size - 1 && front != 0) {
        rear = 0;
        arr[rear] = value;
    } else {
        rear++;
        arr[rear] = value;
    }
}

int Queue::deQueue() {
    if (front == -1) {
        std::cout << "\nQueue is Empty" << std::endl;
        return INT_MIN;
    }

    int data = arr[front];
    arr[front] = -1;
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == size - 1) {
        front = 0;
    } else {
        front++;
    }

    return data;
}

void Queue::displayQueue() {
    if (front == -1) {
        std::cout << "\nQueue is Empty" << std::endl;
        return;
    }

    std::cout << "\nElements in Circular Queue are: ";
    if (rear >= front) {
        for (int i = front; i <= rear; i++)
            std::cout << arr[i] << " ";
    } else {
        for (int i = front; i < size; i++)
            std::cout << arr[i] << " ";

        for (int i = 0; i <= rear; i++)
            std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int main() {
    Queue q(5);

    q.enQueue(14);
    q.enQueue(5);
    q.enQueue(-2);
    q.enQueue(10);

    q.displayQueue();

    std::cout << "Deleted value = " << q.deQueue() << std::endl;
    std::cout << "Deleted value = " << q.deQueue() << std::endl;

    q.displayQueue();

    q.enQueue(7);
    q.enQueue(17);
    q.enQueue(2);

    q.displayQueue();

    q.enQueue(11);

    return 0;
}
