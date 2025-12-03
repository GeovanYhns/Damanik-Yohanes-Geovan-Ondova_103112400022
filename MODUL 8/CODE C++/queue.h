#ifndef QUEUE_H // Jika QUEUE_H belum didefinisikan
#define QUEUE_H // Maka definisikan QUEUE_H untuk mencegah inklusi ganda

#define MAX_QUEUE 5
struct Queue {
    int info[MAX_QUEUE];
    int head;
    int tail;
    int count;
};

void createQueue(Queue &Q);
bool isEmpty(Queue Q);
bool isFull(Queue Q);
void enqueue(Queue &Q, int x);
int dequeue(Queue &Q);
void printInfo(Queue Q);

#endif 
