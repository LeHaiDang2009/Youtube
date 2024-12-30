#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int target = 14;
	int array[10] = {8, 18, 2, 10, 14, 4, 20, 6, 12, 16};

	sort(array, array + 10); //Sort the array
	int left = 0;
	int right = 10;
	while (left <= right){
		int mid = (left + right) / 2;
		if (array[mid] == target){
			cout << "Target exists in array";
			break;
		}
		else if (array[mid] < target) left = mid + 1; 
		else right = mid - 1;
	}
	return 0;
}
