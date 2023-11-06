#include<bits/stdc++.h>
#include<omp.h>
using namespace std;

vector<vector<long long>> matrixMultiplication(vector<vector<int>> A, vector<vector<int>> B){
    int n1 = A.size();
    int m1 = A[0].size();
    int n2 = B.size();
    int m2 = B[0].size();

    vector<vector<long long>> res(n1,vector<long long>(m2,0)); 
    if(m1 != n2)    
        return res;
    clock_t start,stop;

    start = clock();
    #pragma omp for
    for(int i=0;i<n1;i++){

        for(int j=0;j<m2;j++){
            for(int k = 0;k<n2;k++){
                res[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    stop = clock();

    cout << "\nTime: " << double(stop-start) << endl;

    return res;
}

int main(){
    vector<vector<int>> A(1000,vector<int>(1000,1));
    vector<vector<int>> B(1000,vector<int>(1000,2));

    vector<vector<long long>> res = matrixMultiplication(A,B);

    int n = res.size(), m = res[0].size();

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}