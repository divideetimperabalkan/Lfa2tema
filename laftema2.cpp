#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
string cuvant;
class producti{
	private:
char *n1;
string n2;
public:
producti(){
	strcpy(n1,"");
	n2="";
}
producti(const char *t, string s){
	strcpy(n1,t);
n2=s;
}
~producti(){
	strcpy(n1,"");
	n2="";
}		
};
struct retine{
	string str="";
	char s;
};
struct retine2:public retine{
	char t;
};


retine **var1;
	retine *r;
	string t,t1;
	string empty=" ";
	char rs;
	int findl (char twe){
		for (int i=0;i<t.length();i++){
			if (r[i].s==twe)
			//cout<<"dare"<<r[i].str<<"dare";
			return r[i].str.length();
		}
		
		
	}
	int retpoz(char fds){
		for (int i=0;i<t.length();i++){
			if (r[i].s==fds)
			return i;
		}
	}
	void check(int fwq,char fwq1){
		if (cuvant[fwq]==fwq1)
		cout<<"tetetet";
		
	}
int valid (int p,char tw1){
	//cout<<"validcheck k="<<p<<"\n'";
	if (p==cuvant.length()){
		cout<<"\nCuvant poate fi creat\n";
		exit(0);
	}
	if(p==cuvant.length()){
		for (int i=0;i<findl(tw1);i++)
		 if (empty[0]==r[retpoz(tw1)].str[i]){
		 
		 cout<<"cuvant acceptat";}
		 else {return 0;
		 }
	}
	for (int i=0;i<findl(tw1);i++){
		 if (cuvant[p]==r[retpoz(tw1)].str[i]){
		 //	cout<<tw1<<"continelit"<<cuvant[p]<<"\n";
//	if (k+1=cuvant.length())&&(r[retpoz(tw1)].)
		 	return 1;
		 }
		
	}
	return 0;
	
}
	
	
	

void back(int k,char nel)
{

     //   if (k==cuvant.length())
 //   cout<<"aici k="<<k<<"ata era";
  //  cout<<findl(nel);
        for(int i=0;i<findl(nel);i++)	
       {
	 //  cout<<"f"<<r[retpoz(nel)].str[i];
	   if (cuvant[k-1]==r[retpoz(nel)].str[i])
	  {if (r[retpoz(nel)].str[i+1]<=90){
	 // cout<<"siaci";
	  
	  rs=r[retpoz(nel)].str[i+1];
	  //cout<<"\n"<<r[retpoz(nel)].str[i]<<"rr"<<rs<<"\n";
	   } else check(k, rs=r[retpoz(nel)].str[i]);
               if (valid(k,rs)){
               	//if (k==)
              
           back(k+1,rs);} }}
}
int main(){
//	cout<<"cate litere sunt?";
//	int n;
//	cin>>n;
	//char t[n];
	//for (int i=0;i<n;i++){
	///	cout<<i<<"i=";
	//	cin>>t[i];
	//	cout<<t[i];
//	}
//	char ** p= new char*[n];
//	cout<<"cate r=?";
//	int n1;
//	cin>>n1;
//	for (int i=0;i<n1;i++){
	//	cout<<"a->b";	}
	//fd*t1=new fd[n];
//	cout<<"cate r=?";
//	int n1; 
	//cin>>n1;
	//for (int i=0;i<n1;i++){
	//	cout<<"a->b";
	//	t1[i].(**t)=new char*[5];
//}
	//char **p=new char*[n];
	//char **pi;
	//pi=new char*[n];
//	cout<<"cate r=?";
//	int n1;

///fd*t1=new fd[n];
//	cout<<"cate r=?";
//	int n1; 
//	cin>>n1;
//	for (int i=0;i<n1;i++){
	//	cout<<"a->b";
	///	t1[i].t=new char*[5];
	//	t1[i].t[i]=new char[4];
//}
	FILE *fi;
ifstream file("date.in");	
file>>t;
//	cout<<t;
//	file>>t1;
string lit1;
	r=new retine[t.length()];
	for (int i=0;i<t.length();i++){
r[i].s=t[i];
	}

	int vec[t1.length()];
	for (int i=0;i<t1.length();i++)
	vec[i]=0;
int nr,de;
int kr=t.length();
file>>nr;
string lit;	
for (int i=0;i<nr;i++){
	file>>lit;
	for (int i=0;i<kr;i++){
		if (lit[0]==r[i].s){
			de=i;
			break;
		}
	}
	file>>lit1; 
	if(lit1.length()<2){
	lit1+=lit1;  }
	r[de].str+=lit1;
//
	
}
//for (int i=0;i<kr;i++){
	//cout<<r[i].str<<" ";
	
//}
int len2=t1.length();

//*var1=new retine[len2];
//for (int i=0;i<len2;i++){
	
////	var1[i]=new retine[vec[i]];
//}
//for (int i=0;i<len2;i++){
///for (int j=0;j<kr;j++){
////	for (int k=0;k<r[j].str.length();k++){
	//	if (t1[i]==r[j].str[k]){
	//		if ((r[j].str[k+1]>=65)&&(r[j].str[k+1]<90)){
		
		//	}
	//	}
//	}
//}



//}
//cout<<"de acii\n";
file>>cuvant;
if (cuvant=="eps"){
	cuvant=" ";
}
//cout<<"lentgh="<<cuvant.length();
//for (int i=0;i<kr;i++){
//	cout<<r[i].str;
for (int i=0;i<r[0].str.length();i++)
if (r[0].str[i]==cuvant[0]){

back(1,t[0]); break;}
cout<<"nu este creat";
//}

}
