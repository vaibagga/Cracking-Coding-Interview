#include<iostream>
#include<climits>
using namespace std;

class kStacks
{
    int *arr;
    int *top;
    int *next;
    int n, k;
    int free;
public:
    kStacks(int k, int n);
    bool isFull(){return (free == -1); }
    void push(int item, int sn);
    int pop(int sn);
    bool isEmpty(int sn)  {  return (top[sn] == -1); }
};

//constructor to create k stacks in an array of size n
kStacks::kStacks(int k1, int n1){
    k = k1, n = n1;
    arr = new int[n];
    top = new int[k];
    next = new int[n];
    for (int i = 0; i < k; i++)
        top[i] = -1;
    free = 0;
    for (int i=0; i<n-1; i++)
        next[i] = i+1;
    next[n-1] = -1;  // -1 is used to indicate end of free list
}

void kStacks::push(int item, int sn)
{
    // Overflow check
    if (isFull())
    {
        cout << "\nStack Overflow\n";
        return;
    }

    int i = free;
    free = next[i];
    next[i] = top[sn];
    top[sn] = i;
    arr[i] = item;
}

// To pop an from stack number 'sn' where sn is from 0 to k-1
int kStacks::pop(int sn)
{
    // Underflow check
    if (isEmpty(sn))
    {
         cout << "\nStack Underflow\n";
         return INT_MAX;
    }
    int i = top[sn];

    top[sn] = next[i];
    next[i] = free;
    free = i;
    return arr[i];
}
int main(){cout << "G4G"; return 0;}
