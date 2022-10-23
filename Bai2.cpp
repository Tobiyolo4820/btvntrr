#include <iostream>
#include <fstream>
using namespace std;
int main(){
	fstream in, dske, dscanh;
	in.open("input1.txt",ios_base::in);
	dske.open("input1_1.txt",ios_base::out);
	dscanh.open("input1_2.txt",ios_base::out);
	int n, x;
	in >> n;
	dscanh << n << endl;
	dske << n << endl;
	int arr[n][n] = {0};
	for(int i = 0;i < n;i++){
		dske << i+1 << ": ";
		for(int j = 0;j < n;j++){
			in >> arr[i][j];
			if(arr[i][j]){
				if(i < j){
					dscanh << i+1 << "   " << j+1<< endl;
				}
			dske << j+1 << " ";
			}
		}
		dske << endl;
	}
	
	//output
	ifstream i1, i2;
	i1.open("input1_1.txt");
	i2.open("input1_2.txt");
	cout << "input1_1.txt:" << endl << i1.rdbuf() << endl;
	cout << "input1_2.txt:" << endl << i2.rdbuf(); 
}	
