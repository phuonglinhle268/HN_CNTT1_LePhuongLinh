#include <stdio.h>
#include <stdlib.h>

typedef struct Question {
    int id;
    char content[100];
} Question;

typedef struct Stack {
    Question* questions;
    int top;
    int capacity;
} Stack;

typedef struct Queue {
    Question* questions;
    int front;
    int rear;
    int capacity;
} Queue;

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack -> capacity = capacity;
    stack -> top = -1;
    return stack;
}
Queue createQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue -> capacity = capacity;
    queue -> front = 0;
    queue -> rear = -1;
    return queue;
}
void push(Stack* stack, Question question) {
    if (stack -> top == stack -> capacity -1) {
        printf("Stack da day\n");
        return;
    }
    stack -> top++;
    stack -> questions[stack -> top] = question;
}
void enqueue(Queue* queue, Question question) {
    if (queue -> rear == queue -> capacity - 1) {
        printf("Queue da day\n");
        return;
    }
    queue -> rear++;
    queue -> questions[queue -> rear] = question;
}
void displayQueue(Queue* queue) {
    if (queue -> rear == queue -> capacity - 1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = 0; i <= queue -> rear; i++) {
        printf("%d ", queue -> questions[i].id);
        printf("%s ", queue -> questions[i].content);
    }
}
int main() {
    int choice;
    Stack* practiceStack = createStack();
    Stack* redoStack = createStack();
    Queue fullHistory = createQueue();
    do {
        printf("\n-----INTERVIEW MANAGER-----\n");
        printf("1. Practice\n");
        printf("2. Undo\n");
        printf("3. Redo\n");
        printf("4. History\n");
        printf("5. Exit\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                Question question;
                printf("Nhap ID cho cau hoi: ");
                scanf("%d", question.id);

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                printf("EXIT\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 5);
    return 0;
}

