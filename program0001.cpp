//stack first video
//stack implementation using array

#include <bits/stdc++.h>
using namespace std;
#define max 9999

class Stack
{
    int arr[max];
    int top;

public:
    void intiatilizeStack()
    {
        top = -1;
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack is Full\n";
            return;
        }
        top=top+1;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        int x = arr[top];
        top--;
        return x;
    }
    bool isFull()
    {
        if (top == max - 1)
            return true;

        return false;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;

        return false;
    }
    int Peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    void displayStack()
    {
        int i = 0;
        if (isEmpty())
        {
            cout << "Stack is Empty Nothing To show\n";
            return;
        }
        cout<<"\nOur Stack is -\n\t\t";
        for (i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
        cout << "Top of Stack is " << arr[top];
    }
};

int main()
{
    Stack st;
    st.intiatilizeStack();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.displayStack();
    cout<<"\nthe size of stack is "<<st.size()<<endl;
    st.pop();
    st.pop();
     st.displayStack();
    cout<<"\nthe size of stack is "<<st.size()<<endl;

    cout<<"\nTop of stack is "<<st.Peek()<<endl;

}
