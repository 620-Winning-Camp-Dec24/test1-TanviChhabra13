#include <iostream>
using namespace std;

class Cir_Q{
    private:
    int *queue;
    int head;
    int tail;
    int capacity;
    int count;
    
    public:
    Cir_Q(int k){
        capacity=k;
        queue= new int[k];
        head=-1;
        tail=-1;
        count=-1;
    }
    
    ~Cir_Q(){
        delete[] queue;
    }
    
    bool enQueue(int value){
        if(isFull()){
            cout<<"Queue is full."<<value<<endl;
            return false;
        }
        if(isEmpty()){
            head=0;
        }
        tail=(tail+1)%capacity;
        queue[tail]= value;
        count++;
        return true;
    }
    
    bool deQueue(){
        if(isEmpty()){
            cout<<"Queue is empty."<<endl;
            return false;
        }
        if(head == tail){
            head=-1;
            tail=-1;
        }
        else{
            head=(head+1)%capacity;
        }    
        count--;
        return true;
    }
    
    int Front(){
        if(isEmpty()){
            return -1;
        }
        return queue[head];
    }
    
    int Rear(){
        if(isEmpty()){
            return -1;
        }
        return queue[tail];
    }
    
    bool isEmpty(){
        return count == 0;
    }
    
    bool isFull(){
        return count==capacity;
    }
};

int main() {
    int k;
    cout<<"Enter size of Circular Queue: ";
    cin>>k;
    
    Cir_Q cirular_q(k);
    
    while(true){
        cout << "\nChoose an operation:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Get Front\n";
        cout << "4. Get Rear\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "7. Exit\n";
        int choice;
        cin>>choice;
        
        switch(choice){
            case 1:
            {
                int value;
                cout << "Enter value to enqueue: ";
                cin >> value;
                if (cirular_q.enQueue(value)) {
                    cout <<"Enqueued "<< value <<" successfully.\n";
                }
                break;
            }
            case 2:
                if (cirular_q.deQueue()) {
                    cout << "Dequeued successfully.\n";
                }
                break;
            case 3:
                cout << "Front element: " << cirular_q.Front() << endl;
                break;
            case 4:
                cout << "Rear element: " << cirular_q.Rear() << endl;
                break;
            case 5:
                cout << (cirular_q.isEmpty() ? "Queue is empty.\n" : "Queue is not empty.\n");
                break;
            case 6:
                cout << (cirular_q.isFull() ? "Queue is full.\n" : "Queue is not full.\n");
                break;
            case 7:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
