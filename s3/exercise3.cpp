#include<iostream>

using namespace std;

int main(){

    
    // int question 1
    int a=1;

    while(a<=10)	
        {
            cout<<"Soogali number:";
            cin>>a;
            a++;
            if(a%2==1){
                cout<<"This Number is even."<<endl;
            }else{
                cout<<"This Number is odd."<<endl;
            }
        }
        
        
    // question 2

    int number ;
    int foctor=(1);
    cout<<"Soo gali factor :";
    cin>>number;
    while(number>10){
        foctor*=number;
        --number;
    }
        

        
    //question 3
    int cnt =1;
    int num =1;
    for(cnt=1; cnt<=5;cnt++){
        for	(num=1; num<=5;num++){
        cout<< "*";
        }	
        cout<<endl;
    }
    
    //question 4	
        
    int cnt2 =1;
    int num2 =1;
    for(cnt2=1; cnt2<=5;cnt2++){
        for	(num2=1; num2<=5;num2++){
        cout<<num2<<endl;
        }	
        cout<<endl;
    }
        
        
    //Question 5	
        
    int cnt3 =1;
    int num3 =1;
    for(cnt3=1; cnt3<=5;cnt3++){
        for	(num3=1; num3<=5;num3++){
        cout<<cnt3<<endl;
        }	
        cout<<endl;
    }
        
    // Question 6

    int q6=100;
    while(q6<=200)
    {
        if(q6%9==0){
        
        
            cout<<q6<<endl;
        }
        q6++;	
    }
            
        
        
        
            
        
        
	
}