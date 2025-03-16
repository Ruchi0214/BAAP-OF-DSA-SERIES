// 1. Write a program that takes two integers as input and prints their sum. 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,sum;
//     cout<<"a = Enter your first number: ";
//     cin>>a;
//     cout<<"b = Enter your second number: ";
//     cin>>b;
//     sum = a+b;
//     cout<<"sum: "<<sum<<endl;
//     return 0;
// }

//2.Take length and breadth as input (both integers) and calculate the area of the rectangle. 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int l,w,Area;
//     cout<<"l = Enter the length: ";
//     cin>>l;
//     cout<<"w = Enter the width: ";
//     cin>>w;
//     Area = l*w;
//     cout<<"Area of rectangle: "<<Area<<endl;
//     return 0;
// }

// Take two numbers as input and perform addition, subtraction, multiplication, and division. Display the results. 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,su,diff,mul,div;

//     cout<<"a = Enter your first number: ";
//     cin>>a;
//     cout<<"b = Enter your second number: ";
//     cin>>b;
//     cout<<"Sum: "<<a+b<<endl <<"Diff: "<<a-b<<endl<<"mul: "<<a*b<<endl<<"div: "<<a/b<<endl;
//     return 0;
// }

//Take input of principle, time and rate and find the simple interest 
#include <iostream>
using namespace std;

int main(){
    int p,t,r;
    cout<<"principle: ";
    cin>>p;
    cout<<"time: ";
    cin>>t;
    cout<<"rate: ";
    cin>>r;
    cout<<"Simple Interest = "<< (p*t*r)/100;
    return 0;
}
