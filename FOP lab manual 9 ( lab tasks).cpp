						//TASK 1
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//int arr[3][3],left_diag=0,right_diag=0;
//cout<<"Enter the values in matrix : \n ";
//	for(int i=0 ; i<3 ; ++i){
//		for(int j=0 ; j<3 ; ++j){
//			cin>>arr[i][j];		
//		}
//	}	
//	
//	for(int k=0 ; k<3 ; ++k){
//		cout<<"|";
//		for(int l=0 ; l<3 ; ++l){
//			cout<<arr[k][l]<<" ";
//		}
//		cout<<"|"<<endl;
//	}
//		
//	for(int i=0;i<3;++i){
//		for(int j=0;j<3;++j){
//			if(i==j){
//				left_diag+=arr[i][j];
//			}
//		}			
//	}
//	int j=2;
//	
//	for(int i=0;i<3;++i){
//		right_diag+=arr[j][i];
//		--j;
//	}
//	cout<<"The sum of principal diagonal is "<<left_diag<<".\n"<<"The sum of secondary diagonal is "<<right_diag<<"."<<endl;
//return 0;
//}

					//TASK 2
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a[3][3],b[3][3],sum[3][3];
//	cout<<"Enter the values in the first matrix : \n";
//	for(int i=0;i<3;++i){
//		for(int j=0;j<3;++j){
//			cin>>a[i][j];
//		}
//	}
//	cout<<"The first matrix is : \n";
//		for(int m=0;m<3;++m){
//			cout<<"|";
//			for(int n=0;n<3;++n){
//				cout<<a[m][n]<<" ";	
//			}
//			cout<<"|";	
//		cout<<endl;			
//		}
//	cout<<"Enter the values in the second matrix : \n";
//	for(int x=0;x<3;++x){
//		for(int y=0;y<3;++y){
//			cin>>b[x][y];
//		}
//	}
//	cout<<"The second matrix is : \n";	
//	for(int c=0;c<3;++c){
//		cout<<"|";
//			for(int d=0;d<3;++d){
//				cout<<b[c][d]<<" ";	
//			}	
//			cout<<"|";
//		cout<<endl;			
//		}
//		cout<<"The sum of these two matrices is : \n";
//	for(int k=0;k<3;++k){
//		cout<<"|";
//		for(int l=0;l<3;++l){
//			sum[k][l] = a[k][l] + b[k][l];
//			cout<<sum[k][l]<<" ";
//		}
//		cout<<"|";
//		cout<<endl;
//	}
//	return 0;
//}

					//TASK 3
//#include <iostream>
//using namespace std;
//int transpose(int arr[3][3]){
//	int temp=0;
//	for(int i=0; i<3; i++){
//		for(int j=i+1; j<3; j++){
//			temp=arr[i][j];
//			arr[i][j]=arr[j][i];
//			arr[j][i]=temp;
//		}
//	}
//
//}
//int main(){
//	int arr[3][3];
//	cout<<"Enter the values in matrix : "<<endl;
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>arr[i][j];
//		}
//	}
//	cout<<"The values in the matrix are: "<<endl;
//	for(int k=0; k<3; k++){
//		cout<<"| ";
//		for(int l=0; l<3; l++){
//			cout<<arr[k][l]<<" ";
//		}
//		cout<<"|"<<endl;
//	}
//	cout<<"The transpose of the matrix is: "<<endl;
//	transpose(arr);
//		for(int m=0; m<3; m++){
//		cout<<"| ";
//		for(int n=0; n<3; n++){
//			cout<<arr[m][n]<<" ";
//		}
//		cout<<"|"<<endl;
//	}
//}
	
					//TASK 4
//#include <bits/stdc++.h>
//using namespace std;
//int multiply(int a[3][3], int b[3][3], int product[3][3]){
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			for(int k=0; k<3; k++){
//					product[i][j]+=a[i][k]*b[k][j];
//			}
//		}
//
//	}
//}
//int main(){
//	int a[3][3], b[3][3], product[3][3]={{0},{0}};
//	cout<<"Enter the values in matrix A : "<<endl;
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//
//			cin>>a[i][j];
//		}
//	}
//	cout<<"Enter the values in the matrix B : "<<endl;
//	for(int k=0; k<3; k++){
//		for(int l=0; l<3; l++){
//			cin>>b[k][l];
//		}
//	}
//	cout<<"The values in the matrix A and B are : "<<endl;
//	for(int m=0; m<3; m++){
//		cout<<"| ";
//		for(int n=0; n<3; n++){
//			cout<<a[m][n]<<" ";
//		}
//		cout<<"| | ";
//		for(int x=0; x<3; x++){
//			cout<<b[m][x]<<" ";
//		}
//		cout<<"|"<<endl;
//	}
//	multiply(a, b, product);
//cout<<"The product of the two matrices A and B is: "<<endl;
//	for(int y=0; y<3; y++){
//		cout<<"| ";
//		for(int z=0; z<3;z++){
//			cout<<product[y][z]<<" ";
//		}
//		cout<<"|"<<endl;
//
//	}
//	return 0;
//}	

						//TASK 5
//#include <bits/stdc++.h>
//using namespace std;
//int table(int num, int multiplier=1){
//	if(multiplier==11){
//		return 0;
//	}
//
//	cout<<num<<"*"<<multiplier<<"="<<multiplier*num<<endl;
//	return table(num, multiplier+1);
//}
//int main(){
//
//	int num, product;
//	cout<<"Enter the number whose table you want to print : "<<endl;
//	cin>>num;
//	cout<<"The table of "<<num<<" is: "<<endl;
//	table(num);
//	return 0;
//}


