#include <iostream>
#include "queue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
    Q.count = 0;
}

bool isEmptyQueue(Queue Q) {
    return (Q.count == 0);
}

bool isFullQueue(Queue Q) {
    return (Q.count == MAX);
}

// ===============================
// ENQUEUE — Circular Queue
// ===============================
void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh!" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = Q.tail = 0;
    } 
    else {
        Q.tail = (Q.tail + 1) % MAX;
    }

    Q.info[Q.tail] = x;
    Q.count++;
}

// ===============================
// DEQUEUE — Circular Queue
// ===============================
infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }

    infotype x = Q.info[Q.head];

    if (Q.count == 1) {
        Q.head = Q.tail = -1;
    } 
    else {
        Q.head = (Q.head + 1) % MAX;
    }

    Q.count--;
    return x;
}

// ===============================
// PRINT — Tetap sama outputnya dengan Alternatif 1
// ===============================
void printInfo(Queue Q) {
    cout << Q.head << "   " << Q.tail << "   ";

    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
        return;
    }

    // mencetak sesuai urutan queue (head → tail)
    int i = Q.head;
    for (int c = 0; c < Q.count; c++) {
        cout << Q.info[i] << " ";
        i = (i + 1) % MAX;
    }
    cout << endl;
}
