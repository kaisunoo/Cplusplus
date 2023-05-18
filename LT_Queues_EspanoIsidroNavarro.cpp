/*Learning Task - Queues
Espano, Kyla Caryl B.
Isidro, Mary Grace
Navarro, Maria Cleofe R.
*/
#include <iostream>

using namespace std;

class Queue {
    private:
        int myqueue[5], front, rear;

    public:
        Queue(){
            front = -1;
            rear = -1;
        }
    //Will return a boolean value.
    isFull(){
        if(front == 0 && rear == 5 - 1){
        return true;
        }
        return false;
        }

    isEmpty(){
        if(front == -1) return true;
        else return false;
        }
//Function to enqueue
void enQueue(int value){
    if(isFull()){
        cout << endl<< "Queue is full!!";
    }
    else {
        if(front == -1) front = 0;
    rear++;
    myqueue[rear] = value;
    cout << value << " ";
    }
}

//Function to dequeue
int deQueue(){
    int value;
    if(isEmpty()){
        cout << "Queue is empty!!\n" << endl;
        return(-1);
    }
    else {
        value = myqueue[front];
        if(front >= rear){   //only one element in queue
        front = -1;
        rear = -1;
        }
        else{
            front++;
            }
        cout << endl << "Deleted => " << value << " from myqueue";
        return(value);
        }
}

//Function for displaying elements inside Queue
void displayQueue(){
    int i;
    if(isEmpty()){
            cout << endl << "Queue is Empty!!" << endl;
    }
    else {
        cout << endl << "\nFront = " << front;
        cout << endl << "Queue elements : ";
        for(i=front; i<=rear; i++)
        cout << myqueue[i] << "\t";
        cout << endl << "Rear = " << rear << endl;
        }
    }
};

//main method
int main(){
    Queue myq;
    myq.deQueue();//dequeue
    cout<<"Queue created:"<<endl; //Initialized
    //concatination used to interconnect two expressions
    myq.enQueue(10);
    myq.enQueue(20);
    myq.enQueue(30);
    myq.enQueue(40);
    myq.enQueue(50);
    myq.enQueue(60);//enqueue 60 => queue is full
    myq.displayQueue();

    //dequeue => removes first value(10) inside index 0
    myq.deQueue();

    //queue after dequeue
    myq.displayQueue();

return 0;
}
