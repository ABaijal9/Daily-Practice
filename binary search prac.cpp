#include <iostream>
using namespace std;

pair<int,bool> BinarySearch(int ar[] , int n , int k){

	int s = 0, e = n-1;
	pair<int,bool> notFound ={0,false};

	while(s<=e){ // loop if key is present  
	// starting should be less than end
				int mid =  (s+e)/2; // to define mid it should be in

		if( k == ar[mid]) { //found it
			
			pair<int,bool> p ={mid,true};
            return p;
			
	}
	    else if( k < ar[mid]){
		  e = ar[mid - 1];
		 
	}

	   else {
	   	s = mid + 1; 
	    }
	}
	return notFound;
}

int main(){
	int n = 8;
	int ar[n] = {1,2,4,5,6,7,8,9};
	int k = 8;
	

	pair<int,bool> ans = BinarySearch(ar , n , k);
	if(ans.second == true)
		cout<<"Yes"<<" "<<ans.first<<endl;
	else
		cout<<"No";
}