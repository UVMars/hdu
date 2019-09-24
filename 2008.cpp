#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;while(cin >> n){
		int m;
		cin >> m;
		double num[10007], sum = n;
		num[0] = n;
		for(int i = 1; i < m; i++){
			num[i] = sqrt(num[i - 1]);
			sum += num[i];
		}
		printf("%.2f\n", sum);
	}
	return 0;
}
