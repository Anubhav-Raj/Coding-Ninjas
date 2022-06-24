class TwoStack
{

    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Constructer
    TwoStack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    // Push in stack1
    void push1(int data)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = data;
        }
    }
    // Push in stack2
    void push2(int data)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = data;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};