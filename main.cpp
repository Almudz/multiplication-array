#include <iostream>

using namespace std;


int main() {
    //input the value
    int r, c;
    cout << "Enter row: ";
    cin >> r;
    cout << "Enter col: ";
    cin >> c;

    int one[r][c];
    //solutionfor multiplying the array
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            one[i][j]= (i + 1) * (j + 1);
            cout <<one[i][j]<<"\t";
        }
    }

//solution for find the largest element
      int Largest = one[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
              if(one[i][j]>Largest){
                Largest = one[i][j];
                   }
        }
    }
    cout <<Largest;


    return 0;
}



