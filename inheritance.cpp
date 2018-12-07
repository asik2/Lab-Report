#include<iostream>
#include<stdio.h>
#define PI 3.14

using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area (void);

} rect;

 void Rectangle::set_values (int w,int h){
  width=w;
  height=h;

 }
 int Rectangle::area(){

 return width*height;
 }

int main(){

rect.set_values(5,6);
cout<<"Area="<<rect.area()<<endl;
Rectangle r[10];
for(int i=0;i<10;i++)

    r[i].set_values(5*i,6+i);

for(int i=0;i<10;i++)

   cout<<r[i].area()<<endl;

//rect.height=5;

return 0;}


