// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     v.push_back(1);
//     v.emplace_back(2);
//     v.emplace_back(3);  

//     vector<pair<int,int>> vec;

//     vec.push_back({1, 2});
//     vec.emplace_back(1, 2);

//     vector<int> v2(5, 100);

//     vector<int> v3(5); // {0,0,0,0,0} or any of the garbage values with size 5 will be printed inside a vector
//     vector<int> v5(5, 20);
//     vector<int> v4(v5);
//     v5.insert(v5.end(), {2,5,6});
//     v5.erase(v5.begin() + 1, v5.begin() + 4);
//     v5.pop_back();
    

//     vector<int>::iterator it = v.begin();

//     //  cout << *(it) << " ";

//     //  it = it + 2;
//     //  cout << *(it) << " ";

//     //  it = v.end() - 1;
//     //  cout << *(it) << " ";

//      //For rbegin/rend, use reverse integer

//      vector<int>::reverse_iterator rit = v.rbegin();
//      cout << *(rit) << " ";

//      rit = v.rend() - 1;
//      cout << *(rit) << " ";

     

     
      
    
//     //  vector<int>:: iterator it = v5.begin();
//     //  it++;
//     //  cout<< *(it) << " ";

//     // // ----- option 1: Iterator-based for loop ----
//     // cout << "Option 1 (Iterator): ";
//     // for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++) {
//     //     cout << *(it) << " ";
//     // }
//     // cout << endl;

//     // // ------ option 2: Range-based for loop -------
//     // cout << "Option 2 (Range - based): ";
//     // for (auto val : v5) {
//     //     cout << val << " ";
//     // }
//     // cout << endl;

//     // // ---- Option 3: Index-based for loop -------
//     // cout << "Option 3 (Index - based): ";
//     // for(int i = 0; i < v5.size(); i++) {
//     //     cout << v5[i] << " ";
//     // }
//     // cout << endl;


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> v{10,20,30,40,50,60};
     vector<int> v1{10,40,60,70};
     

    // erase
    // {10,30,40,50,60}
     v.erase(v.begin()+1);

    // {10,30,50,60}
    v.erase(v.begin() + 2, v.begin() + 3);



    // insert
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 1,2,10);
    v.insert(v.begin(), {1,2,10});

    //copy
    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout<< "Size of vector is:" << v.size() << endl;

    // v.pop_back();

    // v.swap(v1);


    // v.clear();





     cout << "Vector v is: ";
     for(auto val : v) {
        cout << val << " ";
     }
     cout << endl;

     cout << "Is the vector empty : " << v.empty();
     cout << endl;

     return 0;
}


