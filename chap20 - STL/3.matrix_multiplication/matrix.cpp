#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > matrix;

matrix matrix_mult(const matrix &m1, const matrix &m2){
	// integers to hold number of rows and columns
	int m1_r = m1.size();
	int m1_c = m1[0].size();
	int m2_r = m2.size();
	int m2_c = m2[0].size();

	// initialize a null matrix of required dimensions
	matrix ans(m1_r, vector<int>(m2_c, 0));

	if(m2_r != m1_c){
		cout << "Matrix Multiplication cannot be executed!!\n";
		// returns a null matrix
		return ans;
	}
	
	for(int i = 0; i < m1_r; i++){
		for(int j = 0; j < m2_c; j++){
			for(int k = 0; k < m2_r; k++){
				ans.at(i).at(j) += (m1.at(i).at(k) * m2.at(k).at(j));
			}
		}
	}

	return ans;
}

int main(void){
	matrix m1(2, vector<int>(2)), m2(2, vector<int>(2)), m3;
	m1[0][0] = 1;
	m1[0][1] = 1;
	m1[1][0] = 0;
	m1[1][1] = 2;
	m2[0][0] = 1;
	m2[0][1] = 0;
	m2[1][0] = 0;
	m2[1][1] = 1;


	m3 = matrix_mult(m1, m2);

	for(int i= 0; i < m3.size(); i++){
		for(int j = 0; j < m3.at(0).size(); j++){
			cout << m3[i][j] << "  ";
		}
		cout << endl;
	}
}