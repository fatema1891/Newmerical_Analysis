
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
#include <vector>
#include <cmath>

using namespace std;

void gaussianElimination(vector<vector<double>>& matrix, vector<double>& result) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(matrix[k][i]) > fabs(matrix[maxRow][i])) {
                maxRow = k;
            }
        }
        swap(matrix[i], matrix[maxRow]);
        swap(result[i], result[maxRow]);

        for (int k = i + 1; k < n; k++) {
            double factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j < n; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
            result[k] -= factor * result[i];
        }
    }
    vector<double> solution(n);
    for (int i = n - 1; i >= 0; i--) {
        solution[i] = result[i];
        for (int j = i + 1; j < n; j++) {
            solution[i] -= matrix[i][j] * solution[j];
        }
        solution[i] /= matrix[i][i];
    }

    cout << "Solution:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = " << solution[i] << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of equations: ";
    cin >> n;

    vector<vector<double>> matrix(n, vector<double>(n));
    vector<double> result(n);

    cout << "Enter the augmented matrix (coefficients and constants):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
        cin >> result[i];
    }

    gaussianElimination(matrix, result);

    return 0;
}
