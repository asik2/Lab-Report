#include<iostream>
#include<math.h>


/**
z=a+ib
|Z|=root(a^2+b^2)

c1=a1+ib1;
c1=a2+ib2;

c3=c1*c2;
c3=a1a2-b1b2+i(a1b2+a2b1)

**/
using namespace std;

class Complex{

int a;
int b;
   public:
       setA(int a){

           this->a=a;
       }
       setB(int b){


       this->b=b;
       }
     //  float getValue(){return sqrt(a*a+b*b);}

    Complex operator+(Complex x){

       Complex p;
       p.a=a+x.a;
       p.b=b+x.b;
       return p;
       }
    Complex operator*(Complex x){

       Complex p;
       p.a=a*x.a-b*x.b;
       p.b=b*x.a+a*x.b;
       return p;
       }
    operator-(){

       a=-a;
       b=-b;
       }

     void show(){


       cout<<a<<"+i"<<b<<endl;}


};
int main(){
   Complex c1,c2;
   c1.setA(2);
   c1.setB(3);
   c2.setA(5);
   c2.setB(6);

 //cout<<c1.getValue()<<endl;
 Complex c3=c1+c2;

 c1.show();
 c2.show();
 c3.show();
 Complex c4=c1*c2;

 c1.show();
 c2.show();
 c4.show();

 -c1;
 c1.show();

return 0;}
