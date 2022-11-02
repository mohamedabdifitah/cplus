
#include <iostream>
using namespace std;

/* ================================|| Basic Server Packages ||================================ */
void question1(){
    int i,sum=0;
    cout <<"/* ================================|| question 1 ||================================ */\n"<<endl;
    
    // cout<<"to stop the loop enter number 10"<<endl;
    while (i<= 10){
        sum= sum +i;
        i++;
    }
    cout << sum<<endl;
    cout <<"/* ================================================================================= */\n\n\n"<<endl;

}



void question2(){
    int i = 1;
    int x = 0;
    int y = 0;
    cout <<"/* ================================|| question 2 ||================================ */"<<endl;
    int power = 1;
    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;
    while(i <= y){
        power *= x;
        cout << power << " ";
        i++;
        // cout << "tip : to stop the loop i <=y"<<endl;
    }
    cout <<"/* ================================================================================= */ \n\n\n"<<endl;

}

void question3(){

    int i = 1;
    int la = 0;
    int sml = 0;
    int num = 0;
    cout <<"/* ================================|| question 3 ||================================ */"<<endl;
    while (i <= 10){
        cout << "enter a number: ";
        cin >> num;
        if(num > la){
            la = num;
        }
        else if(num < sml ){
            sml = num;
        }
        
        cout << "the largst number is: " << la << endl;
        cout << "the smallest number is: " << sml;
        
        i++;
    }
    cout <<"/* ================================================================================= */\n\n\n"<<endl;
}

void question4(){
    cout <<"/* ================================|| question 4 ||================================ */"<<endl;
    int i = 1;
    while(i <= 5){
        cout << i << "\t" << 10*i << "\t" << i*100 << "\t" << i*1000<< endl;
        i++;
    }
    cout <<"/* ================================================================================= */\n\n\n"<<endl;
}

void question5(){

    cout <<"/* ================================|| question 5 ||================================ */"<<endl;
    int num = 0;
    int i = 1;

    while(i <= 10){
        cout << "enter the number";
        cin >> num;
        if(num == 1){
            cout << "pass"<<endl;
        }
        else if (num == 2){
            cout << "fail"<< endl;
        }

        else{
            cout <<"enter valid input"<<endl;
        }
        i++;
    }
    cout <<"/* ================================================================================= */\n\n\n"<<endl;
}

void question6(){
    cout <<"/* ================================|| question 6 ||================================ */"<<endl;

    int i = 1;
    int odd = 1;
    while (i <= 15){
        if (i % 2 == 1){
            odd = odd + i; 
        }
        i++;
    }
    cout << " this is the sum of odds"<<odd<<endl;
    cout <<"/* ================================================================================= */\n\n\n"<<endl;

}

int main(){
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();
    return 0;
}