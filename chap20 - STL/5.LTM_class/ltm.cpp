#include "ltm.h"

LTM::LTM(int len){
	length = len;
	for(int i = 0; i < len; i++){
		data.push_back(vector<double>(0));
		for(int j = 0; j <= i; j++){
			data.at(i).push_back(0);
		}
	}
}

LTM::LTM(const LTM &m2){
	length = m2.length;
	for(int i = 0; i < m2.length; i++){
		data.push_back(vector<double>(0));
		for(int j = 0; j <= i; j++){
			data.at(i).push_back(m2.data.at(i).at(j));
		}
	}
}

double LTM::get_element(int i, int j) const{
	if(j > i){
		cout << "Invalid parameters for get_element\n";
		return -1;
	}
	return data.at(i).at(j);
}
void LTM::set_element(int i, int j, double x){
	if(j > i){
		cout << "Invalid parameters for set_element\n";
		return;
	}
	data.at(i).at(j) = x;
	return;
}

LTM & LTM::operator=(const LTM &m2){
	data.resize(0);
	length = m2.length;
	for(int i = 0; i < m2.length; i++){
		data.push_back(m2.data.at(i));
	}
	return *this;
}
LTM LTM::operator+(const LTM &m2){
	LTM ans(m2.length);
	if(length != m2.length){
		cout << "Lengths not equal in addition\n";
		// return a null
		return ans;
	}

	for(int i = 0; i < m2.length; i++){
		for(int j = 0; j <= i; j++){
			ans.data.at(i).at(j) = data.at(i).at(j) + m2.data.at(i).at(j);
		}
	}
	return ans;
}
LTM LTM::operator-(const LTM &m2){
	LTM ans(m2.length);
	if(length != m2.length){
		cout << "Lengths not equal in subtraction\n";
		// return a null
		return ans;
	}

	for(int i = 0; i < m2.length; i++){
		for(int j = 0; j <= i; j++){
			ans.data.at(i).at(j) = data.at(i).at(j) - m2.data.at(i).at(j);
		}
	}
	return ans;
}
LTM LTM::operator*(const LTM &m2){
	LTM ans(m2.length);
	if(length != m2.length){
		cout << "Lengths not equal in multiplication\n";
		// return a null
		return ans;
	}

	for(int i = 0; i < m2.length; i++){
		for(int j = 0; j <= i; j++){
			ans.data.at(i).at(j) = data.at(i).at(j) * m2.data.at(i).at(j);
		}
	}
	return ans;
}
LTM LTM::operator+(const double x){
	LTM ans(length);

	for(int i = 0; i < length; i++){
		for(int j = 0; j <= i; j++){
			ans.data.at(i).at(j) = data.at(i).at(j) + x;
		}
	}
	return ans;
}
LTM LTM::operator-(const double x){
	LTM ans(length);

	for(int i = 0; i < length; i++){
		for(int j = 0; j <= i; j++){
			ans.data.at(i).at(j) = data.at(i).at(j) - x;
		}
	}
	return ans;
}
LTM LTM::operator*(const double x){
	LTM ans(length);

	for(int i = 0; i < length; i++){
		for(int j = 0; j <= i; j++){
			ans.data.at(i).at(j) = data.at(i).at(j) * x;
		}
	}
	return ans;
}
LTM LTM::operator/(const double x){
	if(x == 0){
		cout << "ERROR!! Division by zero\n";
		return *this;
	}
	else{
		LTM ans(*this);
		return ans * (1/x);
	}
}
bool LTM::operator==(const LTM &m2){
	if(length != m2.length){
		return false;
	}

	for(int i = 0; i < m2.length; i++){
		for(int j = 0; j <= i; j++){
			if(data.at(i).at(j) != m2.data.at(i).at(j)){
				return false;
			}
		}
	}
	return true;
}


ostream &operator<<(ostream &out, const LTM &m2){
	for(int i= 0; i < m2.length; i++){
		for(int j = 0; j <= i; j++){
			out << m2.data.at(i).at(j) << "  ";
		}
		out << endl;
	}
	return out;
}

void input(LTM &m2){
	m2.data.resize(0);
	cout << "New length:  ";
	cin >> m2.length;

	int temp;
	for(int i = 0; i < m2.length; i++){
		m2.data.push_back(vector<double>(0));
		for(int j = 0; j <= i; j++){
			cout << "Term(" << i+1 <<", " << j+1 << ") :  ";
			cin >> temp;
			m2.data.at(i).push_back(temp);
		}
	}
}
