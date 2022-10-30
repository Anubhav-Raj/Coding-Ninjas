#include <bits/stdc++.h>
using namespace std;

class PriorityQueue1
{
    vector<int> pq;

public:
    bool isEmpty()
    {
        return pq.size() == 0;
    }
    // Retuen  the  size of priorityQueue - no of element  present
    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
        if (isEmpty())
        {
            cout << "Priority Queue is Empty" << endl;
            return 0;
        }
        return pq[0];
    }
    int getMax()
    {
        if (isEmpty())
        {
            cout << "Priority Queue is Empty" << endl;
            return 0;
        }
        return pq[pq.size() - 1];
    }
    void insert(int data)
    {
        pq.push_back(data);

        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex])
            {
                swap(pq[childIndex], pq[parentIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }

    int remove()
    {
        if (pq.size() == 0)
        { //  if priority Queue  is empty
            return -1;
        }
        int minVal = pq[0];
        swap(pq[0], pq[getSize() - 1]);
        pq.pop_back();

        // down heapify
        int parentIndex = 0;
        int minIndex = 0;
        int LCI = (2 * parentIndex) + 1;
        int RCI = (2 * parentIndex) + 2;
        while (LCI < pq.size())
        {

            if (pq[parentIndex] > pq[LCI])
            {
                minIndex = LCI;
            }
            if (pq[parentIndex] < pq.size() && pq[RCI] < pq[minIndex])
            {
                minIndex = RCI;
            }
            if (minIndex == parentIndex)
            {
                break;
            }

            swap(pq[minIndex], pq[parentIndex]);

            parentIndex = minIndex;
            LCI = (2 * parentIndex) + 1;
            RCI = (2 * parentIndex) + 2;
        }
        return minVal;
    }
};