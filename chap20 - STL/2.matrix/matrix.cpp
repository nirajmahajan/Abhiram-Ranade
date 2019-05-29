#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > matrix;

int main(void){
	matrix m1(10, vector<int>(10, 0));

	for(int i = 0; i < 10; i++){
		m1[i][i] = 1;
	}

	for(int i= 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout << m1[i][j] << "  ";
		}
		cout << endl;
	}
}