#include <stdio.h>
#include <stdlib.h>

//B1: Xay dung cau truc du lieu can thiet
typedef struct Queue {
    int *arr;
    int capacity;
    int front;
    int rear;
}Queue;
//B2: Xay dung ham khoi tao
Queue *createQueue(int capacity) {
    Queue * queue = (Queue *)malloc(sizeof(Queue));
    queue->arr = (int *)malloc(capacity * sizeof(int));
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = -1;
    return queue;
}
//B3: Xay dung cac phuong thuc lam viec voi hang doi
//B3.1: Them vao ham doi
int isFull(Queue *queue) {
    if (queue->rear == queue->capacity - 1) {
        return 1;
    }
    return 0;
}
//Them vao ham doi
void enqueue(Queue *queue, int data) {
    if (isFull(queue)) {
        printf("Du lieu Full");
        return;
    }else {
        queue->rear++;
        queue->arr[queue->rear] = data;
    }
}

//B3.2: kiem tra ham doi FULL
int isEmpty(Queue *queue) {
    if (queue->front > queue->rear) {
        return 1;
    }
    return 0;
}
//Lay ra khoi hang doi
void dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Du lieu rong");
        return;
    }
        queue->rear++;
}
//B3.3:Kiem tra hang doi trong
//B3.4:Lay ra hang doi

int main(){

return 0;
}