#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define pb push_back

void bubbleSort()
{
    int n;
    cout << "How many elements do you want ? " << nl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements. " << nl;
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Let's Solve those elements using Bubble sort. " << nl;

    int loopCount = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            loopCount++;

            if (v[j] > v[j + 1])
            {

                for (int k = 0; k < n; k++)
                {
                    if (k == j)
                    {
                        cout << "(" << v[k] << ") (" << v[k + 1] << ") ";
                        k++;
                    }
                    else
                        cout << v[k] << " ";
                }
                cout << nl;
                swap(v[j], v[j + 1]);
            }
        }
    }

    cout << nl << "Finally Our Sorted Elements are : ";
    for (int i : v) cout << i << " ";
    cout << nl<<nl;

    cout << "Actual Time Complexity based on input in this code of Bubble Sort is : O(" << loopCount << ")" << nl<<nl;

    cout << "Time Complexity: O(n^2) in worst and average case.\nBecause it compares each pair multiple times." << nl<<nl;
}


void selectionSort()
{
    int n;
    cout << "How many elements do you want ? " << nl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements. " << nl;
    for (int i = 0; i < n; i++) cin >> v[i];

    int loopCount = 0;

    for (int i = 0; i < n; i++)
    {
        int selected = i;
        for (int j = i + 1; j < n; j++)
        {
            loopCount++;

            if (v[j] < v[selected]) selected = j;
        }

        for (int k = 0; k < n; k++)
        {
            if (k == i || k == selected) cout << "(" << v[k] << ") ";
            else cout << v[k] << " ";
        }
        swap(v[i], v[selected]);
        cout << nl;
    }

    cout << nl << "Finally Our Sorted Elements are : ";
    for (int i : v) cout << i << " ";
    cout << nl << nl;

    cout << "Actual Time Complexity based on input in this code of Selection Sort is : O(" << loopCount << ")" << nl << nl;

    cout << "Time Complexity: O(n^2) in worst and average case.\nBecause we always check all remaining unsorted elements." << nl << nl;
}

void insertionSort()
{
    int n;
    cout << "How many elements do you want ? " << nl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements. " << nl;
    for (int i = 0; i < n; i++) cin >> v[i];

    int loopCount = 0;

    for (int i = 1; i < n; i++)
    {
        int j = i;

        while (j > 0)
        {
            loopCount++;

            if (v[j] < v[j - 1])
            {
                for (int k = 0; k < n; k++)
                {
                    if (k == j || k == j - 1) cout << "(" << v[k] << ") ";
                    else cout << v[k] << " ";
                }
                swap(v[j], v[j - 1]);
                cout << nl;
                j--;
            }
            else
            {
                break;
            }
        }
    }

    cout << nl << "Finally Our Sorted Elements are : ";
    for (int i : v) cout << i << " ";
    cout << nl << nl;

    cout << "Actual Time Complexity based on input in this code of Insertion Sort is : O(" << loopCount << ")" << nl << nl;

    cout << "Time Complexity: O(n^2) in worst case.\nBecause in worst case each element needs to be compared with all previous ones." << nl << nl;
}



void linearSearch()
{
    int n, target;
    cout << "How many elements do you want ? " << nl;
    cin >> n;
    vector<int>v(n);
    cout << "Enter the elements. " << nl;
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Enter the element you want to search: ";
    cin >> target;

    int loopCount = 0;
    for (int i = 0; i < n; i++)
    {
        loopCount++;
        for (int j = 0; j < n; j++)
        {
            if (j == i) cout << "(" << v[j] << ") ";
            else cout << v[j] << " ";
        }
        cout << nl;

        if (v[i] == target)
        {
            cout << "Element found at index " << i << nl;
            cout << "Actual Time Complexity based on input: O(" << loopCount << ")" << nl;
            cout << "General Time Complexity: O(n) in worst case.\nBecause we might have to check all elements." << nl;
            return;
        }
    }

    cout << "Element not found." << nl;
    cout << "Actual Time Complexity based on input: O(" << loopCount << ")" << nl;
    cout << "General Time Complexity: O(n) in worst case.\nBecause we might have to check all elements." << nl;
}


void binarySearch()
{
    int n, target;
    cout << "How many elements do you want ? " << nl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements. " << nl;
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    cout<<"Our Sorted Array is : ";
    for(auto it : v)cout<<it<<" ";
    cout << nl << "Enter element to search: ";
    cin >> target;

    int low = 0, high = n - 1;
    int loopCount = 0;

    while (low <= high)
    {
        loopCount++;
        int mid = (low + high) / 2;
       cout << "Iteration " << loopCount << ": start->" << v[low] << " end->" << v[high] << " mid->" << v[mid] << nl;

if (v[mid] == target)
{
    cout << "Element found at index " << mid << nl << nl;
    cout << "Actual Time Complexity of this Binary Search execution: O(" << loopCount << ")" << nl;
    cout << "Theoretical Time Complexity: O(log n)" << nl;
    return;
}
else if (v[mid] < target)
{
    cout << "Searching in the right half now." << nl << nl;
    low = mid + 1;
}
else
{
    cout << "Searching in the left half now." << nl << nl;
    high = mid - 1;
}
}
cout << "Element not found." << nl << nl;
cout << "Actual Time Complexity of this Binary Search execution: O(" << loopCount << ")" << nl;
cout << "Theoretical Time Complexity: O(log n)" << nl;

}


void ternarySearch()
{
    int n, target;
    cout << "How many elements do you want ? " << nl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements. " << nl;
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    cout << "Sorted array for ternary search: ";
    for (int x : v) cout << x << " ";
    cout << nl;

    cout << "Enter the element to search: ";
    cin >> target;

    int low = 0, high = n - 1;
    int loopCount = 0;

    while (low <= high)
    {
        loopCount++;
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        cout << "Iteration " << loopCount << ": start->" << v[low] << " end->" << v[high]
             << " mid1->" << v[mid1] << " mid2->" << v[mid2] << nl;

        if (v[mid1] == target)
        {
            cout << "Element found at index " << mid1 << nl << nl;
            cout << "Actual Time Complexity of this Ternary Search execution: O(" << loopCount << ")" << nl;
            cout << "Theoretical Time Complexity: O(log₃ n)" << nl;
            return;
        }
        if (v[mid2] == target)
        {
            cout << "Element found at index " << mid2 << nl << nl;
            cout << "Actual Time Complexity of this Ternary Search execution: O(" << loopCount << ")" << nl;
            cout << "Theoretical Time Complexity: O(log₃ n)" << nl;
            return;
        }

        if (target < v[mid1])
        {
            high = mid1 - 1;
        }
        else if (target > v[mid2])
        {
            low = mid2 + 1;
        }
        else
        {
            low = mid1 + 1;
            high = mid2 - 1;
        }

        // Print new search space
        cout << "Now our search space is: ";
        for (int i = low; i <= high; i++) cout << v[i] << " ";
        cout << nl << nl;
    }

    cout << "Element not found." << nl << nl;
    cout << "Actual Time Complexity of this Ternary Search execution: O(" << loopCount << ")" << nl;
    cout << "Theoretical Time Complexity: O(log3 n)" << nl;
}


void imStack()
{
    stack<int> st;
    int choice, x;
    while (true)
    {
        cout << "1: Push\n2: Pop\n3: Display Stack (LIFO)\n4: Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value to push: ";
            cin >> x;
            st.push(x);
            cout << x << " pushed to stack." << nl << nl;
        }
        else if (choice == 2)
        {
            if (!st.empty())
            {
                // Show current stack before popping
                stack<int> temp = st;
                vector<int> visual;
                while (!temp.empty())
                {
                    visual.push_back(temp.top());
                    temp.pop();
                }

                cout << "Before pop, current stack is:" << nl;
                cout << "Top -> ";
                for (int i = 0; i < visual.size(); i++)
                    cout << visual[i] << " ";
                cout << "<- Bottom" << nl;

                cout << "Popped: " << st.top() << nl;
                st.pop();

                // Show current stack after pop
                if (!st.empty())
                {
                    temp = st;
                    visual.clear();
                    while (!temp.empty())
                    {
                        visual.push_back(temp.top());
                        temp.pop();
                    }

                    cout << "Now current stack is:" << nl;
                    cout << "Top -> ";
                    for (int i = 0; i < visual.size(); i++)
                        cout << visual[i] << " ";
                    cout << "<- Bottom" << nl << nl;
                }
                else
                    cout << "Now the stack is empty." << nl << nl;
            }
            else
                cout << "Stack is empty!" << nl << nl;
        }
        else if (choice == 3)
        {
            if (st.empty())
            {
                cout << "Stack is empty!" << nl << nl;
                continue;
            }

            stack<int> temp = st;
            vector<int> visual;
            while (!temp.empty())
            {
                visual.push_back(temp.top());
                temp.pop();
            }

            cout << "Visualizing LIFO (Last In First Out) using loop:" << nl;
            cout << "Top -> ";
            for (int i = 0; i < visual.size(); i++)
                cout << visual[i] << " ";
            cout << "<- Bottom" << nl << nl;
        }
        else break;
    }

    cout << "Time Complexity per operation:\nPush: O(1), Pop: O(1), Top: O(1)" << nl;
}



void imQueue()
{
    queue<int> q;
    int choice, x;

    while (true)
    {
        cout << "1: Enqueue\n2: Dequeue\n3: Display Queue (FIFO)\n4: Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value to enqueue: ";
            cin >> x;
            q.push(x);
            cout << x << " enqueued to queue." << nl << nl;
        }
        else if (choice == 2)
        {
            if (!q.empty())
            {
                // Show current queue before dequeue
                queue<int> temp = q;
                vector<int> visual;
                while (!temp.empty())
                {
                    visual.push_back(temp.front());
                    temp.pop();
                }

                cout << "Before dequeue, current queue is:" << nl;
                cout << "Front -> ";
                for (int i = 0; i < visual.size(); i++)
                    cout << visual[i] << " ";
                cout << "<- Rear" << nl;

                cout << "Dequeued: " << q.front() << nl;
                q.pop();

                // Show current queue after dequeue
                if (!q.empty())
                {
                    temp = q;
                    visual.clear();
                    while (!temp.empty())
                    {
                        visual.push_back(temp.front());
                        temp.pop();
                    }

                    cout << "Now current queue is:" << nl;
                    cout << "Front -> ";
                    for (int i = 0; i < visual.size(); i++)
                        cout << visual[i] << " ";
                    cout << "<- Rear" << nl << nl;
                }
                else
                    cout << "Now the queue is empty." << nl << nl;
            }
            else
                cout << "Queue is empty!" << nl << nl;
        }
        else if (choice == 3)
        {
            if (q.empty())
            {
                cout << "Queue is empty!" << nl << nl;
                continue;
            }

            queue<int> temp = q;
            vector<int> visual;
            while (!temp.empty())
            {
                visual.push_back(temp.front());
                temp.pop();
            }

            cout << "Visualizing FIFO (First In First Out) using loop:" << nl;
            cout << "Front -> ";
            for (int i = 0; i < visual.size(); i++)
                cout << visual[i] << " ";
            cout << "<- Rear" << nl << nl;
        }
        else break;
    }

    cout << "Time Complexity per operation:\nEnqueue: O(1), Dequeue: O(1), Front: O(1)" << nl;
}


int main()
{
    cout << "Welcome To Our Project. You will see the beauty of algorithms." << nl;
    int choice;
    while(true)
    {
        cout << "\nChoose an option (1 - 9):\n";
        cout << "1: Bubble Sort\n2: Selection Sort\n3: Insertion Sort\n4: Linear Search\n5: Binary Search\n6: Ternary Search\n7: Stack (LIFO)\n8: Queue (FIFO)\n9: Exit\n";
        cin >> choice;
        if(choice == 1) bubbleSort();
        else if(choice == 2) selectionSort();
        else if(choice == 3) insertionSort();
        else if(choice == 4) linearSearch();
        else if(choice == 5) binarySearch();
        else if(choice == 6) ternarySearch();
        else if(choice == 7) imStack();
        else if(choice == 8) imQueue();
        else if(choice == 9) break;
        else cout << "Invalid choice!" << nl;

        cout << "\nDo you want to continue? (1: Yes / 0: No): ";
        int cont;
        cin >> cont;
        if(!cont) break;
    }
    cout << "Thank you for using the program!" << nl;
}
