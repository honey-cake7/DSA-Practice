#include<bits/stdc++.h>

using namespace std;

class heap{
    public:
    int arr[100];
    int idx;
    heap() {
        idx = 1;
    }
    void push(int x) {
        arr[idx] = x;
        int i = idx;
        idx++;
        while(i != 1) {
            int parent = i/2;
            if(arr[i] < arr[parent]) {
                swap(arr[i],arr[parent]);
            }
            else {
                break;
            }
            i = parent;
        }
    }
    void pop() {
        arr[1] = arr[idx-1];
        idx--;
        int i = 1;
        while(i < idx) {
            int left = 2*i;
            int right = 2*i + 1;
            int smallest = i;
            if(left < idx && arr[left] < arr[smallest]) {
                smallest = left;
            }
            if(right < idx && arr[right] < arr[smallest]) {
                smallest = right;
            }
            if(smallest != i) {
                swap(arr[i],arr[smallest]);
                i = smallest;
            }
            else {
                break;
            }
        }
    }
    int top() {
        return arr[1];
    }
    bool empty() {
        return idx == 1;
    }
};

int main() {
    heap h;
    h.push(5);
    h.push(3);
    h.push(8);
    cout << h.top() << endl; // 3
    h.pop();
    cout << h.top() << endl; // 5
    return 0;
}
