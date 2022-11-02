
#include <iostream>
using namespace std;

void question1(){
    cout<<"/* ================================|| Section 1||================================ */"<<endl;
	cout<<"Hello World"<<endl;
}

void question2(){
	int num{0};
    cout<<"/* ================================|| Section 2||================================ */"<<endl;
	cout<<"Enter number:";
	cin>>num;
    cout<<"you entered the number"<<num<<endl;
}

void question3(){
	int num1{0};
	int num2{0};
	int sum{0};
    cout<<"/* ================================|| Section 3||================================ */"<<endl;
    // cout<<"adding two numbers"<<endl;
	cout<<"Enter number 1:";
	cin>>num1;
	cout<<"Eter number 2:";
	cin>> num2;
	sum=num1+num2;
	cout<<"total is "<<sum<<endl;
}
void question4(){
	int num1{0};
	int num2{0};
	int x{0};
    cout<<"/* ================================|| Section 4||================================ */"<<endl;
    // cout<<"remainder section"<<endl;
	cout<<"Enter number 1:";
	cin>>num1;
	cout<<"Eter number 2:";
	cin>> num2;
	x=num1%num2;
	cout<<"remainder is "<<x<<endl;
}

void question5(){
	int num1{0};
	int num2{0};
	int mul{0};
    cout<<"/* ================================|| Section 5||================================ */"<<endl;
    // cout<<"multiplication section"<<endl;
	cout<<"Enter number 1:";
	cin>>num1;
	cout<<"Eter number 2:";
	cin>> num2;
	mul=num1*num2;
	cout<<"total is "<<mul<<endl;
}
void question6(){
	int a,b,c;
    // cout<<"swap section "<<endl;
    cout<<"/* ================================|| Section 6||================================ */"<<endl;
	// a=30;
	// b=60;
    cout <<"Enter a value : ";
    cin>>a;
    cout<<"Enter b value : ";
    cin>>b;
    cout<<"a and b values : ";
	cout<<a<<" "<<b<<endl;
	c=a;
	a=b;
	b=c;
    cout<<"after swap \n";
    cout<<"a and b values :";
	cout<<" "<<a<<" "<<b<<endl;
}

void question7(){
	int a{0};
    cout<<"/* ================================|| Section 7||================================ */"<<endl;
    cout<<"Enter a number:";
	cin>>a;
    // cout<<"positive section"<<endl;
	if(a>0){
	
		cout<<"the number is  a possative"<<endl;
	}
}

void question8(){
	int a{0};
    cout<<"/* ================================|| Section 8||================================ */"<<endl;
    cout<<"Enter a number :";
	cin>>a;
	if(a<0){
	
		cout<<"the number is  a nagative"<<endl;
	}
}

void question9(){
	int a{0};
    cout<<"/* ================================|| Section 9||================================ */"<<endl;
    cout<<"Enter a number :";
	cin>>a;
	if(a>0){
	
		cout<<"the number is  a possative"<<endl;
	}
	else if(a<0){
		cout<<"the number is  nagative"<<endl;
	}
	else{
		cout<<"the number is zero"<<endl;
	}
}



int main(){
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();
    question7();
    question8();
    question9();

    return 0;
}