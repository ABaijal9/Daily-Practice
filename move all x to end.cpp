//add all x in the string in the end
#include<iostream>
#include<string>
using namespace std;

string getallxatend(string str){
	
	//base case

	if(str.length() == 0){
	return "";
	}

	//recursion case

	string chotu = getallxatend(str.substr(1));  
	//rec call to check chotu string which will go till 0 len string
	//put that rec call to updated stringdirectly

	char ch = str[0];  //get 1st letter

	if(ch == 'x'){
	return chotu+ch;
	}

	else{
	return ch+chotu;
	}
}


int main(){
	
	string str= "abxcxbx";
	int n = str.length();

	cout<< getallxatend(str);


}