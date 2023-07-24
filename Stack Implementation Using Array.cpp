// Stack class.
class Stack {
public:
     int Top;
     int * arr;
     int size;
public:
    
    Stack(int capacity) {
      Top = -1;
      this->size=capacity;
      arr = new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if (Top != size - 1) {
          Top++;
          arr[Top] = num;
        }
    }

    int pop() {
        // Write your code here.
        if(Top==-1) return -1;
        int x = arr[Top];
        Top--;
        return x;

    }
    
    int top() {
        // Write your code here.
        if(Top != -1)
        return arr[Top];
        else return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(Top == -1)
        return 1;
        else
        return 0;

    }
    
    int isFull() {
        // Write your code here.
        if(Top == size - 1)
        return 1;
        else
        return 0;
    }
    
};
