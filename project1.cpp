#include<iostream>

#include<math.h>

#include<string.h>


using namespace std;

class bina{   //to convert in binary

int a;

public: bina(int x){

a=x;

int i;

 int t[10];


        for(i=0;a>0;i++){

            t[i]=a%2;

            a=a/2;

        }

        cout<<"\nEquivalent Binary of "<<x<<" is: ";

        for(i=i-1;i>=0;i--)

                cout<<t[i];

    cout<<"\n\n";

    }

  

};

class bcd{ //to convert in bcd


public:

bcd(int y){

int i,x,len=0,temp=y;

int val[10];


for(i=0;y>0;i++){

    val[i]=y%10;

    y=y/10;

    len++;

}


cout<<"\nEquivalent BCD of "<<temp<<" is: ";

for(i=len-1;i>=0;i--){

    x=val[i];

switch(x){

case 0:

    cout<<"0000";

    break;

case 1:

    cout<<"0001";

    break;

case 2:

    cout<<"0010";

    break;

case 3:

    cout<<"0011";

    break;

case 4:

    cout<<"0100";

    break;

case 5:

    cout<<"0101";

    break;

case 6:

    cout<<"0110";

    break;

case 7:

    cout<<"0111";

    break;

case 8:

    cout<<"1000";

    break;

case 9:

    cout<<"1001";

    break;


}

}

}

};

class hexa{//to convert number to hexadecimal

public:

hexa(int xx){

int remainder,quotient;


    int i=1,j,temp;

    char hexadecimalNumber[100];


   

   


    quotient = xx;


    while(quotient!=0)

    {

         temp = quotient % 16;


      //To convert integer into character

      if( temp < 10)

           temp =temp + 48;

      else

         temp = temp + 55;


      hexadecimalNumber[i++]= temp;

      quotient = quotient / 16;

    }

    cout<<"\nEquivalent hexadecimal number of "<<xx<<" is : ";

    for(j = i -1 ;j> 0;j--)

      cout<<hexadecimalNumber[j];

    cout<<endl;


}


};


int main(){

    int m,n,o=0,q=0;

xlr: //used for goto, to enter a new binary no.


cout<<"\n\n\nenter a number:\n";

cin>>m;


while(q==0){

cout<<"\n1. Enter 1 for converting the number to Binary:\n\n2. Enter 2 to convert the number to BCD:\n\n3. Enter 3 to convert the decimal to Hexa Decimal:\n\n4. Enter 4 to enter a new decimal number:\n\n5. Enter 5 to EXIT\n\n";

cin>>n;

switch(n){

case 1:{

    bina xxx(m);

    break;}

case 2:{

    bcd xx(m);

    break;}

    case 3:{

      hexa v(m);

      break;

    }

case 4:{

    goto xlr;

   

    break;

}

case 5:{

  q=1;

  return 0;

  break;

}

default:

    cout<<"Sorry, this option is not available!";

}}


return 0;

}