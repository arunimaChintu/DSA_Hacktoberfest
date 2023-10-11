#include<iostream>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
 public:
    CircularQueue(int n){
        size = n;
        arr = new int [size];
        front = rear = -1;
    }
    bool enqueue(int value){
        if((front==0 && rear== size-1) || (rear==(front-1)%(size-1))){
           cout<<"queue is full";
           return false;
        }
        else if(front == -1){
            //first element to push
            front = rear = 0;
            arr[rear] = value;
        }
        else if(rear==size-1 && front != 0){
          rear = 0;
          arr[rear] = value;
        }
        else{
            rear++;
            arr[rear] = value;
        }
        return true;
    }
    int deque(){
        if(front == -1){
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size -1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
         
};
int main(){
    CircularQueue c(10);
    c.enqueue(1);
    c.enqueue(2);
    c.enqueue(3);

}