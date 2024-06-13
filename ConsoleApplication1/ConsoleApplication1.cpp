/*
Реализуйте класс стека для работы с символами (символьный стек). 
Стек должен иметь фиксированный размер. 
Также реализуйте набор операций для работы со стеком:
внесение символа в стек(), удаление символа из стека, подсчет
количества символов в стеке, проверку, пуст ли стек(),
проверку, полный ли стек(), очистку стека, получение
без удаления верхнего символа в стеке.
*/
#include <iostream>
using namespace std;

class Stack {
    static const int MAX_SIZE = 100;  
    int top;                          
    char _Symbols[MAX_SIZE];          

public:
    Stack() : top(-1) {}

    bool IsEmpty() {
        return top == -1;
    }

    bool IsFull() {
        return top == MAX_SIZE - 1;
    }

    void Push(char c) {
        if (!IsFull()) {
            _Symbols[++top] = c; 
        }
        else {
            cout << "Stack is full." << endl;
        }
    }

    char Pop() {
        if (!IsEmpty()) {
            return _Symbols[top--]; 
        }
        else {
            cout << "Stack is empty." << endl;
            return 0; 
        }
    }

    char Peek() {
        if (!IsEmpty()) {
            return _Symbols[top]; 
        }
        else {
            cout << "Stack is empty." << endl;
            return 0;
        }
    }

    int Size() {
        return top + 1; 
    }

    void Clear() {
        top = -1; 
    }
};

int main() {
    Stack s;

    s.Push('a');
    s.Push('b');
    s.Push('c');

    cout << "Top element: " << s.Peek() << endl;  
    cout << "Stack size: " << s.Size() << endl;   

    s.Pop();
    cout << "Top element after pop: " << s.Peek() << endl;
    cout << "Stack size after pop: " << s.Size() << endl;

    s.Clear();
    cout << "Stack size after clear: " << s.Size() << endl;

    return 0;
}
