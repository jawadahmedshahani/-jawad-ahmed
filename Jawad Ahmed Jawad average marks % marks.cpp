#include<iostream>
using namespace std;
int main()
{
	
int phy, chem, eng, math, urdu, paks, isl;
int percentage;
int avgmarks,totalmarks,obtainedmarks;

cout<<"no of phy="<<endl;
cin>>phy;
cout<<"no of chem="<<endl;
cin>>chem;
cout<<"no of eng="<<endl;
cin>>eng;
cout<<"no of math="<<endl;
cin>>math;
cout<<"no of urdu="<<endl;
cin>>urdu;
cout<<"no of paks"<<endl;
cin>>paks;
cout<<"no of isl="<<endl;
cin>>isl;

obtainedmarks=phy+chem+eng+math+urdu+paks+isl;

cout<<"obtained marks= "<<obtainedmarks<<"marks"<<endl;

cout<<"totalmarks="<<endl;

cin>>totalmarks;
avgmarks=obtainedmarks/7; 

cout<<"average marks is="<<avgmarks<<endl;

percentage=obtainedmarks*100/totalmarks;
cout<<"percentage is ="<<percentage<<"%"<<endl;
 
	
	
	
return 0;	
	
	
	
}
