#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > matrix;

int main(void){
	int length;
	cout << "what is length of matrix:  ";
	cin >> length;

	matrix m1(length);

	int temp;
	for(int i = 0; i < length; i++){
		for(int j = 0; j <= i; j++){
			cout << "Term(" << i+1 <<", " << j+1 << ") :  ";
			cin >> temp;
			m1.at(i).push_back(temp);
		}
	}

	for(int i= 0; i < m1.size(); i++){
		for(int j = 0; j <= i; j++){
			cout << m1[i][j] << "  ";
		}
		cout << endl;
	}
}