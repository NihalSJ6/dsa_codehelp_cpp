#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows= 3;
    int cols = 5;

    // vector<vector<int>> arr;

    // vector <int> a{1,2,3,4,5};
    // vector <int> b{2,4,6};
    // vector <int> c{3,4,8};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0; i<arr.size(); i++) {

    //     for(int j=0; j<arr[i].size(); j++) {
    //         cout << arr[i][j] << " ";
    //     }

    //     cout << endl;
    // }


    vector<vector<int>> brr(rows, vector<int>(cols,1));

    for(int i=0; i<brr.size(); i++) {

        for(int j=0; j<brr[i].size(); j++) {
            cout << brr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
    
}