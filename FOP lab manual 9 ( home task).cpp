						//HOME TASK
#include <bits/stdc++.h>
using namespace std;
int main(){
	double arr[3][3], adj[3][3], det, inv[3][3], temp=0;
	cout<<"Enter the values in matrix : "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	cout<<"The values in the matrix are : "<<endl;
	for(int x=0; x<3; x++){
		cout<<"| ";
		for(int y=0; y<3; y++){
			cout<<arr[x][y]<<"  ";
		}
		cout<<"|"<<endl;
	}
	det=+arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])
		-arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0])
		+arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]);
	cout<<"The determinant of the matrix is: "<<det<<endl;
	adj[0][0]=+(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2]);
	adj[0][1]=-(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]);
	adj[0][2]=+(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]);
	adj[1][0]=-(arr[0][1]*arr[2][2]-arr[0][2]*arr[2][1]);
	adj[1][1]=+(arr[0][0]*arr[2][2]-arr[0][2]*arr[2][0]);
	adj[1][2]=-(arr[0][0]*arr[2][1]-arr[0][1]*arr[2][0]);
	adj[2][0]=+(arr[0][1]*arr[1][2]-arr[0][2]*arr[1][1]);
	adj[2][1]=-(arr[0][0]*arr[1][2]-arr[0][2]*arr[1][0]);
	adj[2][2]=+(arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0]);
	cout<<"The cofactor of the matrix is: \n";
	for(int k=0; k<3; k++){
		cout<<"| ";
		for(int l=0; l<3; l++){
			cout<<adj[k][l]<<" ";
		}
		cout<<"|"<<endl;
	}
	for(int a=0; a<3; a++){
		for(int b=a+1; b<3; b++){
			temp=adj[a][b];
			adj[a][b]=adj[b][a];
			adj[b][a]=temp;
		}
	}
	cout<<"The adjoint of the matrix is: \n";
	for(int i=0; i<3; i++){
		cout<<"| ";
		for(int j=0; j<3; j++){
			cout<<adj[i][j]<<"  ";
		}
		cout<<"|"<<endl;
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			inv[i][j]=adj[i][j]/det;
		}
	}
	cout<<"The inverse of the matrix is: \n";
	for(int i=0; i<3; i++){
		cout<<"| ";
		for(int j=0; j<3; j++){
			cout<<setprecision (3)<<inv[i][j]<<"  ";
		}
		cout<<"|"<<endl;
	}
	return  0;
}










