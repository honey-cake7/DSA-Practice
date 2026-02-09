#include<iostream>
#include<vector>
using namespace std;
int partition(int v[], int si, int ei) {
    int count = 0;
    int pivotElement = v[(si + ei) / 2];  // using randomized pivot point
    // finding the number of elements smaller than pivot element which gives us pivot index
    for (int i = si; i <= ei;i++) {
        if (i == (si + ei) / 2) continue;
        if (v[i] <= pivotElement) count++;
    }
    int pivodIdx = count + si;
    swap(v[(si + ei) / 2], v[pivodIdx]);
    // now making partition of smaller ele and bigger ele
    int i = si;
    int j = ei;
    while (i<pivodIdx && j>pivodIdx) {
        if (v[i] <= pivotElement) i++;
        if (v[j] > pivotElement) j--;
        else if (v[i] > pivotElement && v[j] <= pivotElement) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    return pivodIdx;
}
void quickSort(int v[], int si, int ei) {
    if (si >= ei) return;
    // first we need to find the pivot ind
    int pi = partition(v, si, ei);
    // it partitions the arr in two parts where any element smaller than the pi element is on left else its on right 
    // now perfoming recursive quicksort on the partition parts
    quickSort(v, si, pi - 1);
    quickSort(v, pi + 1, ei);
}
int main() {
    int v[] = { 5,1,3,0,4,9,6 };
    int n = sizeof(v) / sizeof(v[0]);
    for (int i = 0; i < n;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    quickSort(v, 0, n - 1);
    for (int i = 0; i < n;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}