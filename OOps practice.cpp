#include<iostream>
#include<cstring>
using namespace std;

class Car{

	
	public:
		char name[100];
		int mileage;
		int price;
		int seats;

	//default constructor
	Car(){
		cout<<"in default constructor" << endl;
	}

	//parameterised constructor
	Car(char* n, int s, int m, int p){
		cout << "inside parameterised constructor"<< endl;
		strcpy(name, n);
		mileage = m;
		price = p;
		seats = s;
	}

	print(){
	cout << "name: " << name <<endl;
	cout << "seats: " << seats <<endl;
	cout << "mileage: " << mileage <<endl;
	cout << "price: " << price <<endl;
	}

	//setter
	void SetPrice(int p){
		if(p<=1000){
			price = 1000;
		}
		else{
			price = p;
		}
	}

	//getter
	// int GetPrice(){
	// 	return p;
	// }

	void operator=(Car x){
        strcpy(name, x.name); //deep copy
		mileage = x.mileage;
		price = x.price;
		seats = x.seats;
	}
};

int main(){
	
	Car A;
	strcpy(A.name, "BMW");
	A.seats = 4;
	A.mileage = 100;
	A.SetPrice(9000);

	cout << endl << "A" <<endl;
	A.print();  

	// cout << "name: " << A.name <<endl;
	// cout << "seats: " << A.seats <<endl;
	// cout << "mileage: " << A.mileage <<endl;
	// cout << "price: " << A.price <<endl;

	Car B;
	strcpy(B.name, "Audi");
	B.seats = 6;
	B.mileage = 200;
	B.price = 7050;

	cout << endl << "B" <<endl;
	B.print();

	Car C;
	C = B;
    cout << endl << "C" <<endl;
	C.print();  

	C.name[0] = 'B';
	cout << endl << "new C" <<endl;
	B.print();
	C.print();  
	
	// cout << "name: " << B.name <<endl;
	// cout << "seats: " << B.seats <<endl;
	// cout << "mileage: " << B.mileage <<endl;
	// cout << "price: " << B.price <<endl;

	// char c[10] = "duster";
	// Car C(c, 3, 150, 3452);

	
	// C.print();
	// cout << "name: " << C.name <<endl;
	// cout << "seats: " << C.seats <<endl;
	// cout << "mileage: " << C.mileage <<endl;
	// cout << "price: " << C.price <<endl;

}
