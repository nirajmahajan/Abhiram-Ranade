#include <iostream>
#include <map>
#include <string>
using namespace std;
typedef map<string, string> List;

void answer(List &list, string question){
	List::iterator li = list.find(question);
	if(li == list.end()){
		cout << "Not found\n";
	}
	else{
		cout << li->second << endl;
	}
}

void learn(List &list, string data, string data_value){
	List::iterator li = list.find(data);
	if(li != list.end()){
		cout << "Already there!!\n";
	}
	else{
		list[data] = data_value;
	}
}

int main(){
	List list;
	string command, question, data, data_value;
	while(true){
		cin >> command;
		if(command == "Exit" || command == "exit"){
			break;
		}
		else if(command == "Tell" || command == "tell"){
			cin >> question;
			answer(list, question);
		}
		else if(command == "Learn" || command == "learn"){
			cin >> data >> data_value;
			learn(list, data, data_value);
			learn(list, data_value, data);
		}
		else{
			cout << "Invalid command\n";
		}
	}
}