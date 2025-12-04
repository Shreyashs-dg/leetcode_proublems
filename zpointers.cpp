#include<iostream>
#include<vector>
using namespace std;
//all about pointers
int pasbyvalue(int val){
    val=10;
    
} 
int passbyaddress(int &adr){
    adr=20;
}
int main()
{
    cout<<"pointers"<<endl;
    int a = 10;
    int *ptr = &a;
    int **parPtr = &ptr;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of a: "<<ptr<<endl;
    cout<<"Value of a : "<<*ptr<<endl;
    cout<<"address of parptr : "<<parPtr<<endl;
    cout<<"address of ptr : "<<*parPtr<<endl;
    cout<<"Value of a : "<<**parPtr<<endl;
    //null pointer
    int *ptr1=NULL;
    cout<<ptr1<<endl;


    //pass by value
    int val=5;
    pasbyvalue(val);
    cout<<"Pass by value : "<<val<<endl;

    //pass by address
    int adr=15;
    passbyaddress(adr);
    cout<<"Pass by address : "<<adr<<endl;

    //pointer aithemetic /decrement 
    int c=10;
    int *p=&c;
    cout<<"Orginal address "<<p<<endl;
    p+=2;
    cout<<"Incremented address "<<p<<endl;
    p--;
    cout<<"Decremented address "<<p<<endl;

    //pointer compatession 
    int arr1[]={1,2,3,4,5,6,7};
    int *arrptr1 = arr1;
    int *arrptr2 = arrptr1 +6;
    cout<< arrptr2 - arrptr1<<endl;
    return 0;
}