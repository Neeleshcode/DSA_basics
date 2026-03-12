#include<bits/stdc++.h>
#include<vector>
using namespace std;



// /**************** Method -> 01 ************/
// int reverse(int n){
//     int rev = 0;
//     while(n > 0){
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n/10;
//     }
//     return rev;

// }    

//     bool isPalindrome(int n){
//         if(n == reverse(n))
//         return true;
//         else
//         return false;
//     }

  
    
//     int main() {
//         int n;
//         cin >> n;

//         if(isPalindrome(n))
//         cout << n << " Is a palindrome number" << endl;
//         else
//         cout << n <<" Is not a palindrome number" << endl;

//         return 0;
//     }


// /************* Method -> 02 **************/

// bool isPalindrome(int n){

//     int reverse = 0;
    
//     int temp = abs(n);
//     while(temp != 0){
//     reverse = (reverse * 10) + (temp % 10);
//     temp = temp/10;

//     }

//     return(reverse == abs(n));
// }

// int main(){
//     int n;
//     cin >> n;
//     if (isPalindrome(n) == 1){
//         cout << "True";
//     } else {
//         cout << "False";
//     }
// }

/************ Palindrome of an array ************/

// bool isPalindrome(vector<int> &arr, int i){

//     //size
//     int n = arr.size();

//     //base condition
//     if(i >= (n-i-1))
//     return true;

//     // if element doesn't match
//     if(arr[i] != arr[n-i-1]){
//         return false;
//     }

//     //recursive call
//     return isPalindrome(arr, i + 1);

// }


// int main(){
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     if(isPalindrome(arr, 0))
//     cout << "It is a palindromic array" << endl;
//     else
//     cout << "It is non palindromic array" << endl;

//     return 0;


    
// }

bool isPalindrome(vector<int> &arr){

    int n = arr.size();

    for(int i =0; i < n/2; i++){
        if(arr[i] != arr[n-i-1])
        return false;
    }
    return true;
}


int main(){
    int n;
    

    cin >> n;

    vector<int> arr(n);

    
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    if (isPalindrome(arr))
    cout << "palindrome" << endl;
    else
    cout << "Not a palindrome" << endl;

    return 0;
}



