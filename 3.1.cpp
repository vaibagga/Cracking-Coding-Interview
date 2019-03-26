#include <iostream>
using namespace std;

class ThreeStacks{

private:
    int *arr;
    int MAXSIZE;
    int size[3];

public:
    ThreeStacks();
    void push(int, int)
    void pop(int, int);
    int top(int);
};

ThreeStacks :: ThreeStacks(int maxsize){
    MAXSIZE = maxsize;
    arr = new int [MAXSIZE];
    size = {0,0,0};
    for (int i = 0; i < MAXSIZE; i++)
        arr[i] = INT_MIN;
}

void ThreeStacks :: push(int stackNo, int value){
    if (size[0] + size[1] + size[2] + 1 > MAXSIZE){
        throw overflow_error("More values than maxsize.\n")
    }
    if (stackNo == 1){
        if (arr[size] != INT_MIN){
            throw overflow_error("Stack space already occupied.\n");
        }
        arr[size[0]++] = value;
    }
    else if (stackNo == 2){
        arr[MAXSIZE-size[1]-1] = value;
        size[1]++;
    }
    else if (stackNo == 3){
        int index;
        if (size[2] % 2)
            index = MAXSIZE/2 + (size[1] + 1)/2; 
        else
            index = MAXSIZE/2 - (size[1] + 1)/2;
        if (arr[index] != INT_MIN)
            throw overflow_error("Stack space already occupied.\n");
        size[2]++;
    }
    else{
        throw invalid_argument("Invalid stack number. Only 1, 2, and 3 allowed.\n")
    }
}

void ThreeStacks :: pop(int stackNo){
    if (stackNo == 1){
        if (size[0] == 0){
            throw underflow_error("Empty stack.\n");
        }
        arr[size[0]] = INT_MIN;
        size[0]--;
    }
    else if (stackNo == 2){
        if (size[1] == 0){
            throw underflow_error("Empty stack.\n")
        }    
        arr[size[1]] = INT_MIN;
        size[1]--;
    }
    else if (stackNo == 3){
        int index;
        if (size[2] % 2)
            index = MAXSIZE/2 + (size[2] + 1)/2; 
        else
            index = MAXSIZE/2 - (size[2] + 1)/2;
        arr[index] = INT_MIN;
        size[2]--;
    }
    else{
        throw invalid_argument("Invalid stack number. Only 1, 2, and 3 allowed.\n")
    }
}

void ThreeStacks :: top (int stackNo){
    if (stackNo == 1){
        if (size[0] == 0)
            throw underflow_error("Empty stack.\n");
        return arr[size[0]];
    }
    else if (stackNo == 2){
        if (size[1] == 0)""
                            throw underflow_error("")
    }
    else if (stackNo == 3){
        int index;
        if (size[2] % 2)
            index = MAXSIZE/2 + (size + 1)/2; 
        else
            index = MAXSIZE/2 - (size + 1)/2;
        if (arr[index] != INT_MIN)
            throw overflow_error("Stack space already occupied.\n");
        size[2]++;
    }
    else{
        throw invalid_argument("Invalid stack number. Only 1, 2, and 3 allowed.\n")
    }
}