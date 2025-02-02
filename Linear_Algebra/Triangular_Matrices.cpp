#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
using vl=std::vector<ll>;
using vvl=vector<vl>;
#define mnv *min_element(v.begin(),v.end())
#define mxv *max_element(v.begin(),v.end());
using vd=vector<double>;
using vvd=vector<vd>;


bool isUpperTriangular(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

bool isLowerTriangular(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter matrix size (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));//vvl matrix(n,vl(n));
    cout << "Enter matrix elements row by row:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    if (isUpperTriangular(matrix)) {
        cout << "The matrix is an Upper Triangular matrix." << endl;
    } else if (isLowerTriangular(matrix)) {
        cout << "The matrix is a Lower Triangular matrix." << endl;
    } else {
        cout << "The matrix is neither Upper nor Lower Triangular." << endl;
    }

    return 0;
}

