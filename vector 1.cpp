#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector <int> v;

	for(int i = 0 ; i < 5; i++){
		v.push_back(5-i);
	}

	int n = v.size();
	cout<< "Size: " << n << endl;
	cout<< "Capacity: " << v.capacity() << endl;
	for(int i = 0 ; i < v.size() ; i++){
		cout<< v[i] << " ";
	}
	cout << endl;

	v.pop_back();
	cout<< "Size: " << v.size() << endl;
	cout<< "Capacity: " << v.capacity() << endl; 

	for(int i = 0 ; i < v.size() ; i++){
		cout<< v[i] << " ";
	}
	cout << endl;
	
	
}