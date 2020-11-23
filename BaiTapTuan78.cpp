/*
#include <iomanip>
#include <iostream>
using namespace std;
typedef int MT[20][20];

void nhapmt(MT a, char *ten, int m, int n) //nhap ma tran chu nhat
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ten << "[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
};
void inmt(MT a, char *ten, int m, int n) //in ma tran chu nhat
{
    cout << "\n\tmatrix " << ten << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\t" << setw(5) << left << a[i][j];
        }
        cout << endl;
    }
};
void nhapmt(MT a, char *ten, int n)  //nhap ma tran vuong
{
    nhapmt(a, ten, n, n);
};
void inmt(MT a, char *ten, int n) //in ma tran vuong
{
    inmt(a, ten, n, n);
};                                                 
void nhanmt(MT a, MT b,MT c, int m, int n, int p)//nhan 2 ma tran chu nhat. thu tu D=A*B*C
{ 
    //c[m,n]=a[m,p]*b[p,n]
    for(int i=0;i<m;i++){// n la chung
        for(int j=0;j<n;j++){
            c[i][j]=0; 
            for(int k=0;k<p;k++){
                c[i][j]+=a[i][k]*b[k][j];

            }       
            

        }
    }     

}; 
void nhanmt(MT a, MT b,MT c, int n) //nhan hai ma tran vuong
{
     nhanmt(a,b,c,n,n,n); 
};              

int main()
{

    char *a_ = new char;
    char *b_=new char;
    char *c_=new char;
    char *d_=new char;
    MT a,b,c,d,z;
    a_="A";
    b_="B";
    c_="C";
    d_="D";

    cout<<"-Nhap ma tran A :\n";
    nhapmt(a,a_,3,2);
    cout<<"-Nhap ma tran B :\n";
    nhapmt(b,b_,2,3);
    cout<<"-Nhap ma tran C :\n";
    nhapmt(c,c_,3);
    
    nhanmt(a,b,z,3,3,2);
    nhanmt(c,z,d,3);

    inmt(d,d_,3);
    delete a_;
    delete b_;
    delete c_;
    delete d_;
   

    system("pause");
    return 0;
}
*/
Bai2

#include<iostream>
#include<fstream>
using namespace std;
typedef struct
{
    int a, b;
}PS;
ostream& operator<< (ostream& os, PS p){
    os<<p.a<<"/"<<p.b;
    return os;

};
istream& operator>> (istream& is, PS& p){
    cout<<" Nhap tu so:";is>>p.a;
    cout<<" Nhap mau so: ";is>>p.b;
    if(p.b==0) {
        cout<<" Xin nhap lai mau so :";
        cin>>p.b;
        }
    return is;

};

int ucln(int x,int y){
    if(y==0) return x;
    return ucln(y,x%y);
    
}
PS rutgon(PS p){
    int t=ucln(p.a,p.b);
    p.a=p.a/t;
    p.b=p.b/t;
    return p;
}

PS operator +(PS p1, PS p2){
    PS p;
    p.a=p1.a*p2.b+p1.b*p2.a;
    p.b=p2.b*p1.b;
    return rutgon(p);
    
};
PS operator-(PS p1, PS p2){
    PS p;
    p.a=p1.a*p2.b-p1.b*p2.a;
    p.b=p1.b*p2.b;
    
    return rutgon(p);
};
PS operator*(PS p1, PS p2){
    PS p;
    p.a=p1.a*p2.a;
    p.b=p1.b*p2.b;
    return rutgon(p);
};

int main(){ 

    PS p1,p2;
    cout<<" Nhap p1 :"<<endl;
    cin>>p1;
    cout<<" p1="<<p1<<endl;
    
    cout<<" Nhap p2 :"<<endl;
    cin>>p2;
    cout<<" p2="<<p2<<endl;
    cout<<endl;
    cout<<" p1+P2="<<p1+p2<<endl;
    cout<<" p1-p2="<<p1-p2<<endl;
    cout<<" p1*p2="<<p1*p2<<endl;
    

    system("pause");
    return 0;
}

