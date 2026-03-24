#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> numbers;

        for(int i = 1; i < n; i++){
            fact = fact * i;
            numbers.push_back(i);
        }
        numbers.push_back(n);

        string ans = " ";
        k = k - 1;

        while (true) {
            ans = ans + to_string(numbers[k / fact]);
            numbers.erase(numbers.begin() + k/fact);
            
            if(numbers.size() == 0){
                break;
            }

            k = k % fact;
            fact = fact / numbers.size();
        }
        return ans;
    }
};

int main() {
    int n, k;
     cout << "Enter the value of n: " << endl;
     cin >> n;
     
     cout << "Enter value of k: " << endl;
     cin >> k;

     solution obj;
     string result = obj.getPermutation(n, k);
     cout << "K-th permutation sequence is: "<< result << endl;

     return 0;
}