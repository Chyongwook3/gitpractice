#include<iostream>

using namespace std;

//2-1
double sum(int x, double y) {
	double z = x + y;
	return z;
}

double sub(int x, double y) {
	double z = x - y;
	return z;
}
double mult(int x, double y) {
	double z = x * y;
	return z;
}
double idiv(int x, double y) {
	double z = x / y;
	return z;
}

	double add_mult(int x, int y, int z) {
		double o = sum(x, y);
		return mult(o, z);
	}

double mult_div(int x, int y, int z) {
	double o = mult(x, y);
	return idiv(o, z);
}

double add_mult_add(int x, int y, int z) {
	double o = sum(x, y);
	double p = sum(y, z);
	return mult(o, p);
}

double sub_div_sub(int x, int y, int z) {
	double o = sub(x, y);
	double p = sub(x, z);
	return idiv(o, p);
}

int main() {
	int x, y, z;
	cout << "정수 3개를 입력해 주세요: " << endl;
	cin >> x >> y >> z;
	cout << add_mult(x, y, z) <<endl <<mult_div(x,y,z)<<endl<< add_mult_add(x, y, z) <<endl<< sub_div_sub(x, y, z) << endl;
	return 0;
}