#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int target = 14;
	int array[10] = {8, 18, 2, 10, 14, 4, 20, 6, 12, 16};

	for (int i = 0; i < 10; i++){
		if (array[i] == target){
			cout << "Target exists in array";
			break;
		}
	}
	return 0;
}
