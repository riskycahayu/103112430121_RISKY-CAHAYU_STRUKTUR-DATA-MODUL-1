#ifndef QUEUE_H
#define QUEUE_H

#define MAX 5
typedef int infotype;

struct Queue {
    infotype info[MAX];
    int head, tail;
    int count;     // tambahan untuk circular queue
};

void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif
