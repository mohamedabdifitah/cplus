/*

solution in while loop

1:

int i,sum=0;
while (i<= 10){
    sum= sum +i;
    i++;
}
cout << sum;

___________________________

2:



int i = 1;
int x = 0;
int y = 0;
int power = 1;
cout << "enter x: ";
cin >> x;
cout << "enter y: ";
cin >> y;

while(i <= y){
    power *= x;
    cout << power << " ";
    i++;
}
________________________________--

3:


int i = 1;
int la = 0;
int sml = 0;
int num = 0;
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
------------------------------------------
4:

int i = 1;
while(i <= 5){
    cout << i << "\t" << 10*i << "\t" << i*100 << "\t" << i*1000<< endl;
    i++;
    }

____________________________

5:


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

---------------------------------
6:


int i = 1;
int odd = 1;
while (i <= 15){
    if (i % 2 == 1){
        odd = odd + i; 
    }
    i++;
    }
    cout << " this is the sum of odds" << odd;
*/
__________________________________________

/*



solutions in for loop.



1:
int i,sum=0;
for ( i = 1; i<= 10; i++){
    sum= sum +i;
}
cout << sum;
----------------------------
2:

int i = 1;
int x = 0;
int y = 0;
int power = 1;
cout << "enter x: ";
cin >> x;
cout << "enter y: ";
cin >> y;

for(i = 1; i <= y; i++){
    power *= x;
    cout << power << " ";
}

--------------------------

3:

int i = 0;
int la = 0;
int sml;
int num = 0;
for (i = 1; i <= 10; i++){
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
      
}

---------------------------------

4:

int i = 1;
for(i = 1; i <= 5; i++ ){
    cout << i << "\t" << 10*i << "\t" << i*100 << "\t" << i*1000<< endl;
    }

----------------------------------

5:

int num = 0;
int i = 1;

    for (i = 1; i <= 10; i++){
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
    }

-----------------------------------

6:

int i = 1;
int odd = 1;
for (i = 1;i <= 15; i++){
    if (i % 2 == 1){
        odd = odd + i; 
    }
    cout << " this is the sum of odds" << odd;
    
}
cout << odd;

*/