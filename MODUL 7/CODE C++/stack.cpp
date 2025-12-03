#include "stack.h"

void createStack(Stack &S) {
    S.top = -1; 
}

bool isEmpty(Stack S) {
    return (S.top == -1);
}

bool isFull(Stack S) {
    return (S.top == nMax - 1);
}

void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack Penuh!" << endl;
    }
}

infotype pop(Stack &S) {
    infotype x;
    if (!isEmpty(S)) {
        x = S.info[S.top];
        S.top--;
        return x;
    } else {
        cout << "Stack Kosong!" << endl;
        return -1; 
    }
}

void printInfo(Stack S) {
    if (!isEmpty(S)) {
        cout << "[TOP] ";
        for (int i = S.top; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    } else {
        cout << "[Stack Kosong]" << endl;
    }
}

void balikStack(Stack &S) {
    if (!isEmpty(S)) {
        int temp[nMax];
        int count = 0;
        while (!isEmpty(S)) {
            temp[count] = pop(S);
            count++;
        }

        for (int i = 0; i < count; i++) {
            push(S, temp[i]);
        }
    }
}

void pushAscending(Stack &S, infotype x) {
    if (isEmpty(S) || x >= S.info[S.top]) {
        push(S, x);
    } else {
        infotype temp = pop(S);
        pushAscending(S, x);
        push(S, temp);
    }
}

void getInputStream(Stack &S) {
    char input;
    while (cin.get(input) && input != '\n') {
        if (input >= '0' && input <= '9') {
            int val = input - '0';
            push(S, val);
        }
    }
}