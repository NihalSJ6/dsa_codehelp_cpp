#include<iostream>
using namespace std;

//row wise sum function
// void printRowWiseSum(int arr[][3], int rows, int cols) {
//     for(int i=0; i<rows; i++) {
//         int sum = 0;

//         for(int j=0; j<cols; j++) {
//             sum = sum + arr[i][j];
//         }

//         cout << sum << endl;
//     }
// }



//transpose matrix
void Transpose(int arr[][3], int rows, int cols, int transpose[][3]) {

    for(int i=0; i<rows; i++) {

        for(int j=0; j<cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
}



//print arr function
void printArray(int arr[][3], int rows, int cols) {

    for(int i=0; i<rows; i++) {

        for(int j=0; j<cols; j++) {
            cout << arr[i][j]<<" ";
        }

        cout<<endl;
    }
}




int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {2,8,6}};
    int transpose[3][3];
    int rows = 3;
    int cols=3;

    
    //row-wise print
    // for(int i=0; i<3; i++) {

    //     for(int j=0; j<3; j++) {

    //         cout<<arr[i][j]<<" ";
    //     }

    //     cout << endl;
    // }


    //col-wise print
    // for(int i=0; i<3; i++) {

    //     for(int j=0; j<3; j++) {

    //         cout << arr[j][i] << " ";
    //     }

    //     cout <<endl;
    // }

    //row-sum print
    //printRowWiseSum(arr, rows, cols);


    cout<< "Printing array"<<endl;
    printArray(arr,rows,cols);
    cout<<"Starting transpose"<<endl;
    Transpose(arr, rows, cols, transpose);
    cout<<"printing transpose arr now"<<endl;
    printArray(transpose,rows,cols);
    
    return 0;
}



