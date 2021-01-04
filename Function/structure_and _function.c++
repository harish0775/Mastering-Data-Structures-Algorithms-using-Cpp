#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
}
  //...........................Create function

  int area(struct Rectangle r){
      return r.length*r.breath;
  }
  int peri(struct Rectangle r){
      return 2*(r.length+r.breath);
  }
int main(){
    Rectangle r = {0,0};

    printf("Enter Length and Breath of rectangle");
    cin>>r.length>>r.breath;
   int a = area(r);
   int p =peri(r);

    // int area = length*breath;  //
    // int perimeter = 2*(length+breath);

    printf("area = %d\nPerimeter = %d\n",a,p);

    return 0;
}

