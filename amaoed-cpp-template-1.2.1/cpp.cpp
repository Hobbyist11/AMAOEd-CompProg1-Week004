#include <cstdio>
#include <deque>
#include <iostream>
#include <limits.h>
#include <stdlib.h>

using namespace std;
void printMainMenu() {
  cout << "Welcome to DS Runner. Please select a number for your desired "
          "data structure to run."
       << endl;
  cout << "1.Queues" << endl;
  cout << "2.Binary Trees" << endl;
  cout << "3.Exit the Program" << endl;
  cout << "Enter Number:";
}

void printQueueMenu() {
  cout << "Queue OPERATIONS USING ARRAY" << endl;
  cout << "----------------------------" << endl;
  cout << "1.Enqueue" << endl;
  cout << "2.Dequeue" << endl;
  cout << "3.Display" << endl;
  cout << "4.check front" << endl;
  cout << "5.check rear" << endl;
  cout << "6.EXIT" << endl;
  cout << "Enter the Choice:";
}

struct Queue {
  int front, rear, size;
  unsigned capacity;
  int *array;
};

struct Queue *createQueue(unsigned capacity) {
  struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
  queue->capacity = capacity;
  queue->front = queue->size = 0;
  queue->rear = capacity - 1;
  queue->array = (int *)malloc(queue->capacity * sizeof(int));
  return queue;
}

int isFull(struct Queue *queue) { return (queue->size == queue->capacity); }

int isEmpty(struct Queue *queue) { return (queue->size == 0); }

void enqueue(struct Queue *queue, int item) {
  if (isFull(queue))
    return;
  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->array[queue->rear] = item;
  queue->size = queue->size + 1;
  printf("%d enqueued to queue\n", item);
}

int dequeue(struct Queue *queue) {
  if (isEmpty(queue))
    return INT_MIN;
  int item = queue->array[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  queue->size = queue->size - 1;
  return item;
}

int getFront(struct Queue *queue) {
  if (isEmpty(queue))
    return INT_MIN;
  return queue->array[queue->front];
}

int getRear(struct Queue *queue) {
  if (isEmpty(queue))
    return INT_MIN;
  return queue->array[queue->rear];
}

void displayQueue(struct Queue *queue) {
  if (isEmpty(queue)) {
    cout << "Queue is empty" << endl;
    return;
  }

  cout << "Queue elements: ";
  int i = queue->front;
  while (i != queue->rear) {
    cout << queue->array[i] << " ";
    i = (i + 1) % queue->capacity;
  }
  cout << queue->array[i] << endl; // Print the last element
}

void printBinaryTreeMenu() {
  cout << "BINARY TREE OPTIONS :";
  cout << "1.Insert an element in the tree" << endl;
  cout << "2.Inorder Traversal" << endl;
  cout << "3.Preorder Traversal" << endl;
  cout << "4.Postorder Traversal" << endl;
  cout << "6.Exit" << endl;
  cout << "Enter your Choice:" << endl;
}

int main() {
  printMainMenu();

  // set variables
  int choicemain;
  int queuesize = 0;
  int choicequeue;
  int queueno;
  int dequeueno;
  int choicetree;
  int treelement;
  struct Queue *queue = nullptr;

  cin >> choicemain;
  while (choicemain != 6) {

    switch (choicemain) {
    case 1:
      if (queuesize == 0) {
        cout << endl;
        cout << "Enter the size of the Queue:";
        cin >> queuesize;
        queue = createQueue(queuesize);
        cout << endl;
      }
      printQueueMenu();
      cin >> choicequeue;

      switch (choicequeue) {
      case 1:
        cout << endl;
        cout << "Enter element to be enqueued :";
        cin >> queueno;
        enqueue(queue, queueno);
        cout << endl;
        cout << "Inserted -> " << queueno;
        cout << endl;
        cout << endl;
        break;
      case 2:
        cout << endl;
        cout << "Enter element to be dequeued:";
        cin >> dequeueno;
        dequeue(queue);
        cout << endl;
        cout << "Deleted: -> " << dequeueno;
        cout << endl;
        break;
      case 3:
        cout << endl;
        displayQueue(queue);
        break;

      case 4:
        printf("Front iteem is %d\n", getFront(queue));
        break;
      case 5:
        printf("Rear item is %d\n", getRear(queue));
        break;
      case 6:
        break;
      }

      break;

    case 2:
      printBinaryTreeMenu();
      cin >> choicetree;

      switch (choicetree) {
      case 1:
        cout << endl;
        cout << "Insert an element in the tree";
        cin >> treelement;
        // enqueue(queue, queueno);
        cout << endl;
        cout << "Inserted -> " << treelement;
        cout << endl;
        cout << endl;
        break;
      case 2:
        cout << endl;
            // Traverse the treee in order
                break;
      case 3:
        cout << endl;
            // Traverse the tree Preorder
        break;

      case 4:
            // Traverse the tree post order
        break;
      case 5:
        break;
      }

      break;

    case 3:
      return 0;
    }
    // return 0;
  }
}
