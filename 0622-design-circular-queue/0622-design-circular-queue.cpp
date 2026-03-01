class MyCircularQueue {
    int n;
    int *a;
    int f;
    int r;
public:
    
    MyCircularQueue(int k) {
        n=k;
        a = new int[n];
        f=r=-1;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        else if(f==-1){
            f=r=0;
            a[r] = value;
            
        }
        else{
            r = (r+1)%n;
            a[r] = value;
            
        }
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        else if(f==r){
            f=r=-1;
        }
        else{
            f=(f+1)%n;
        }
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return a[f];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return a[r];
    }
    
    bool isEmpty() {
        return f==-1;
    }
    
    bool isFull() {
        return (r+1)%n==f;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */