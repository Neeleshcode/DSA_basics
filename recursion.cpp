#include<bits/stdc++.h>
using namespace std;

class recursion{
public:
int cnt = 0;

int print(){
   if (cnt == 5) return 0;
   cout << cnt << endl;
   cnt++;
   print();
   return 0;
}

 
/************ Print your name N times ****************/
void name(int i, int n){
    if ( i > n) return;

    cout << "Neelesh" << endl;
    name( i+1, n);
}

/*********** Print linearly from 1 to N **********/
void number(int i, int n){
    if (i > n) return;

    cout << i << endl;
    number( i+1 , n);
}

/*********** Print from n to 1 ************/
void revPrint(int i, int n){
    if( i < n) return;

    cout << i << endl;
    revPrint( i-1, n);
}




/********** Print linerarly from 1 to N by backtacking ************/
void backprint(int i, int n){
    if( i < n) return;

    backprint( i - 1, n);
    cout << i << endl;

}


/********** Print linerarly from 1 to N by backtacking ************/
void frontprint(int i, int n){
    if( i > n) return;

    frontprint( i + 1, n);
    cout << i << endl;

}

/*************** factorial by parameters ***********/

void factorial(int i,int sum){
    if(i<1){ 
    cout << sum << endl; 
    return;
    }
    factorial(i - 1, sum + i);

}

/************* factorial by functions ******/

int fact(int n){
    if(n == 0)
    return 1;
    else 
    return n * fact(n-1);
}


};





int main() {
    int n;
    cin>>n;
    recursion obj;
    cout << obj.fact(n) << endl;
    return 0;
}

// int fact(int n){
//     if(n == 0)
//         return 1;
//         else 
//         return n * fact(n - 1);
    
// }

// int main(){
//     cout << fact(5) << endl;
// }







