#include<iostream>
using namespace std;

  //...........................Create function

  int area(int length ,int breath){
      return length*breath;
  }
  int peri(int length,int breath){
      return 2*(length*breath);
  }
int main(){
    int length = 0;int breath = 0;
    printf("Enter Length and Breath");
    cin>>length>>breath;
   int a = area(length,breath);
   int p =peri(length,breath);

    // int area = length*breath;
    // int peri = 2*(length+breath);

    printf("area = %d\nPerimeter = %d\n",a,p);

    return 0;
}

