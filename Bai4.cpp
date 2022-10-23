#include <iostream>
#include <fstream>
using namespace std;
int main(){
	fstream in, out;
	in.open("input1_2.txt",ios_base::in);
	out.open("output1_2.txt",ios_base::out);
	int n, x, y, t;
	in >> n;
	int arr[n][n] = {};
	while(!in.eof())
	{
		in >> x;
		in >> y;
		arr[x-1][y-1] = 1;
		arr[y-1][x-1] = 1;
	}
	
	cout << "Ma tran ke bieu dien do thi: " << endl;
	out <<endl << "Ma tran ke bieu dien do thi: " << endl;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << arr[i][j] << ' ';
			out <<  arr[i][j] << ' ';
			}
		cout << endl;
		out << endl;
	}
	
	cout <<endl << "Danh sach ke cua do thi: " << endl;
	out <<endl << "Danh sach ke cua do thi: " << endl;
	for(int i = 0;i < n;i++){
		cout << i+1 << ": ";
		out << i+1 << ": ";
		for(int j = 0;j < n;j++){
			if(arr[i][j]){
				cout << j+1 << " ";
				out << j+1 << " ";
			}
		}
		cout << endl;
		out << endl;
	}
	
	cout <<endl << "Bac cua cac dinh trong do thi: " << endl ;
	out <<endl << "Bac cua cac dinh trong do thi: " << endl;
	for(int i =0, k =0;i < n;i++,k=0){
	 	cout << "Bac cua dinh " << char( i + 'a') << " = ";
	 	out << "Bac cua dinh " << char( i + 'a') << " = ";
		for(int j = 0;j < n;j++){
			if(arr[i][j]){
				k++;
			}
		}
		cout << k << endl;
		out << k << endl;
	}
	
//	for(int i = 0;i < n;i++){
//		for(int j = 0;j < n;j++){
//			cout << arr[i][j] << ' ';
//			out <<  arr[i][j] << ' ';
//			}
//		cout << endl;
//		out << endl;
//	}
	
}	
