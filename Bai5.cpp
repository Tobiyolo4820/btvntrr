#include <iostream>
#include <fstream>
using namespace std;
int main(){
	fstream in, dske, dscanh;
	in.open("input2.txt",ios_base::in);
	dske.open("input2_1.txt",ios_base::out);
	dscanh.open("input2_2.txt",ios_base::out);
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
				//if(i < j){
					dscanh << i+1 << "   " << j+1<< endl;
			//	}
			dske << j+1 << " ";
			}
		}
		dske << endl;
	}
	
	//output
	ifstream f1, f2;
	f1.open("input2_1.txt");
	f2.open("input2_2.txt");
	cout << "input2_1.txt:" << endl << f1.rdbuf() << endl;
	cout << "input2_2.txt:" << endl << f2.rdbuf(); 
}	
