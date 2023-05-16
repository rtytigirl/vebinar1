#include "inout.h"
#include <iostream>

void read(vector<int>& vec) {

	int N = 0;//length vector
	int num;

	cout << "Plaese enter vector"<<endl;
	cin >> N;

	while (N > 0) {
		cin >> num;
		vec.push_back(num);
		N--;
		
	}

}