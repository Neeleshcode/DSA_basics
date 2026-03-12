#include<bits/stdc++.h>
#include<vector>
using namespace std;

void swap( int &a, int &b){
int temp = a;
a = b;
b = temp;
}

// recursive function
void reverseRec(vector<int> &arr, int i){
    int n = arr.size();

    //base case
    if(i >= n-i-1)
        return ;

        //swap
        swap(arr[i], arr[n-i-1]);

        //recursive call
        reverseRec(arr, i +1);
}

//wrapper function
void reverse(vector<int> &arr){
    reverseRec(arr, 0);
}

int main(){

    vector<int> arr ={1,2,3,4,5};

    cout << "Before: ";
    for(int num : arr )
    cout << num << " ";
    cout << endl;

    reverse(arr);

    cout << "After: ";
    for(int num : arr )
    cout << num << " ";
    cout << endl;
}