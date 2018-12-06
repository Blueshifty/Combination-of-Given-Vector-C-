#include <iostream>
#include <vector>			//Blueshifty GitHub

using namespace std;

vector<vector<int> > kombinasyonlar;	//All Combinations Are Saved In This Vector	

void print(){
	for(int i = 0;i<kombinasyonlar.size();++i){
		cout<<i+1<<"-";	
		for(int j = 0;j<kombinasyonlar.at(i).size();++j){
			cout<<" "<<kombinasyonlar.at(i).at(j)<<" ";
		}
		cout<<endl;
	}
}
					
void exhaustiveFonk(vector<int> x,int iterator,vector<int> eleman){
	if(iterator==x.size()){kombinasyonlar.push_back(eleman);return;}
	vector<int>eleman2 = eleman;				//Combination Recursive Fonk
	eleman2.push_back(x.at(iterator));			
	exhaustiveFonk(x,iterator+1,eleman2);
	exhaustiveFonk(x,iterator+1,eleman);
}

int main(){
	int n,girdi;
	vector<int> A;	//Vector that you want to combinate	
	vector<int> nothing;
    	cout <<"--Enter the lenght of the Vector:";
		cin >> n;
		for(int i =0;i<n;++i){
			cout <<"--Enter the  " << i+1<< ". Element:";
			cin >>girdi;
			A.push_back(girdi);
	  	}
	  	exhaustiveFonk(A,0,nothing);
	  	print();
	return 0;	
}
