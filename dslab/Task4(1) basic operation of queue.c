#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100


struct Queue {
	int front, rear, capacity;
	int* queue;
	Queue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int;
	}


	// function to insert an element
	// at the rear of the queue
	int queueEnqueue()
	{
		int data;
		// check queue is full or not
		if (capacity == rear) {
			printf("\nQueue is full\n");
			return 0;
		}

		// insert element at the rear
		else {
			  printf ("\nEnter element to be enqueued: ");
            scanf ("%d", &data);
			queue[rear] = data;
			rear++;
		}
		return 0;
	}

	// function to delete an element
	// from the front of the queue
	int queueDequeue()
	{
		int num;
		
		if (front == -1) {
			printf("\nQueue is empty\n");
			
		}

		// shift all the elements from index 2 till rear
		// to the left by one
		else {
		 num = queue[front];
			printf("Dequeued Element : %d \n",num);
			front++;
		 
                                                       
		}                                                                
		return 0;
	}

	// print queue elements
	void queueDisplay()
	{
		int i;
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}

		// traverse front to rear and print elements
		for (i = front; i < rear; i++) {
			printf(" %d <-- ", queue[i]);
		}
		return;
	}

	// print front of queue
	void queueFront()
	{
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}
		printf("\nFront Element is: %d", queue[front]);
		return;
	}
};

// Driver code
int main()
{
	 int ch;
      
Queue q(5);
      printf ("\t Queue OPERATIONS\n");
      printf("----------------------------\n");
      printf("      1. Enqueue\n");
      printf("      2. Dequeue\n");
      printf("      3. Display\n");
      printf("      4. Front\n");
      printf("      5. Exit\n");
      //printf("----------------------------\n");
      while(1)
      {
            printf("\nChoose operation : ");
            scanf("%d", &ch);
            switch (ch)
            {
                  case 1:
                        q.queueEnqueue();
                  break;
                  case 2:
                        q.queueDequeue();
                  break;
                  case 3:
                        q.queueDisplay();
                  break;
                  case 4:
                        q.queueFront();
                  break;
                  case 5:
                        exit(0);
                  default:
                        printf("Invalid operation \n");
         
		 return 0;   }
      }
      return 0;
}

