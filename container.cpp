#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPair(){

    pair<int, int> p {1, 2};

    cout << p.first << " " << p.second <<endl;

    pair<int, pair<int, int>> p1 {1, {2,3}};

    cout << p1.first <<" " << p1.second.second << " " << p1.second.first << endl;

    pair <int, int> arr[] = {{1,2}, {2,3}, {3,4}};

    cout << arr[1].second << " " << arr[2].first << endl;
}

int main(){
    explainPair();
    return 0;
}