// sorting of a dynamic array
// By Niraj Mahajan, IITB, CSE
#include <iostream>
#include "merge_sort.h"
using namespace std;

class Dynamic_array
{
private:
	int *ptr, length;
public:
	// COnstructor
	Dynamic_array() 	{ptr = NULL;length = 0;}

	// Destructor
	//~Dynamic_array(){
	//	delete [] ptr;
	//}

	// Member functions
	int* get_ptr(){
		return ptr;
	}
	int get_len(){
		return length;
	}

	void set_len(const int x){
		length = x;
	}

	Dynamic_array add_int(const int x){
		Dynamic_array ans;
		ans.ptr = new int[length + 1];

		// copy our array to new array
		for(int i = 0; i < length; i++)
		{
			ans.ptr[i] = ptr[i];
		}

		ans.ptr[length] = x;
		length++;
		ans.set_len(length);
		return ans;
	}
	
};

int main(void){

	Dynamic_array arr1;
	int s, count = 0;

	while(cin>>s){

		arr1 = arr1.add_int(s);
		count++;
	}

	int output[count];
	int* input = arr1.get_ptr();
	merge_sort(input, output, count, 0, count-1);

	for(int i = 0; i < count; i++){
		cout << output[i] << " ";
	}	
	cout << endl;
}

