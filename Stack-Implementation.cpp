// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "STACK OVERFLOW: Stack is full" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack." << endl;
    }

    int pop() {
        if (top == -1) {
            cout << "STACK UNDERFLOW: Stack is empty" << endl;
            return -9999; // error code
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "STACK UNDERFLOW: Stack is empty" << endl;
            return -9999; // error code
        }
        return arr[top];
    }

    void display() {
        if (top == -1) {
            cout << "STACK UNDERFLOW: Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    cout << "=== STACK IMPLEMENTATION USING ARRAY ===" << endl;

    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                value = s.pop();
                if (value != -9999)
                    cout << "Popped: " << value << endl;
                break;
            case 3:
                value = s.peek();
                if (value != -9999)
                    cout << "Top element: " << value << endl;
                break;
            case 4:
                s.display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

/*
SAMPLE OUTPUT ::

=== STACK IMPLEMENTATION USING ARRAY ===

1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter value to push: 10
10 pushed into stack.

Enter your choice: 1
Enter value to push: 20
20 pushed into stack.

Enter your choice: 4
Stack elements: 10 20

Enter your choice: 3
Top element: 20

Enter your choice: 2
Popped: 20

Enter your choice: 4
Stack elements: 10

Enter your choice: 5
Exiting...
*/
