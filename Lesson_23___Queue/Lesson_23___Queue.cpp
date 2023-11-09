
#include "Queue.h"
#include <iostream>

int main()
{
    Queue<int> q1;

    q1.enqueue(10);
    q1.enqueue(8);
    q1.enqueue(5);
    q1.enqueue(7);
    q1.enqueue(3);
    q1.enqueue(2);

    q1.print();
    cout << q1.get_length() << endl;

    if (q1.get_length() > 6)
        q1.dequeue();

    while (true)
    {
        int x = 0;
        cin >> x;
        q1.enqueue(x);

        if (q1.get_length() > 6) {
            q1.dequeue();
            q1.print();
        }
     
        else if (x == 0)
            break;
    }


}

