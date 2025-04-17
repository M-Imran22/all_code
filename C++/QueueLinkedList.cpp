#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5
/*
malloc() is a library function that allows C to allocate memory dynamically from the heap. The heap is an area of memory where something is stored.

malloc() is part of stdlib.h and to be able to use it you need to use #include <stdlib.h>.

*/
// Structure to create a node with data and the next pointer
struct node {
    int data;
    struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

int getQueueSize(){
	int queue_size = 0;
	if(front == NULL){
		return queue_size;
	}
	
	struct node * temp;
	temp = front;
	while(temp != NULL){
		queue_size++;
		temp = temp->next;
	}
	
	return queue_size;	
}

// Enqueue() operation on a queue
void enqueue(int value) {
	int current_size = getQueueSize();
	if(current_size >= MAX_QUEUE_SIZE){
		
		printf("Queue is Full.\n\n");
	
	}else{
	    struct node * ptr;
	    ptr = (struct node * ) malloc(sizeof(struct node));
	    ptr->data = value;
	    ptr->next = NULL;
	    if ((front == NULL) && (rear == NULL)) {
	        front = rear = ptr;
	    } else {
	        rear->next = ptr;
	        rear = ptr;
	    }
	    printf("Node is Inserted\n\n");
	}
}

// Dequeue() operation on a queue
int dequeue() {
    if (front == NULL) {
        printf("\nQueue is empty\n");
        return -1;
    } else {
        struct node * temp = front;
        int temp_data = front->data;
        front = front->next;
        free(temp);
        return temp_data;
    }
}

// Display all elements of the queue
void display() {
    struct node * temp;
    if ((front == NULL) && (rear == NULL)) {
        printf("\nQueue is Empty\n");
    } else {
        printf("The queue is \n");
        temp = front;
        while (temp) {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n\n");
    }
}


int main() {
    int choice, value, size;
    printf("\nImplementation of Queue using Linked List\n");
    while (choice != 5) {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Size\n5.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", & choice);
        switch (choice) {
            case 1:
                printf("\nEnter the value to insert: ");
                scanf("%d", & value);
                enqueue(value);
                break;
            case 2:
                printf("Popped element is :%d\n", dequeue());
                break;
            case 3:
                display();
                break;
            case 4:
            	size = getQueueSize();
                printf("Queue Size : %d\n", size);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\nWrong Choice\n");
        }
    }
    return 0;
}
