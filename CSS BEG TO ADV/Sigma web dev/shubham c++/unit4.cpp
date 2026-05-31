//1.  factorial of a number using recursive function 


// #include<iostream>
// using namespace std;
// int fact(int n){
// if (n==0 || n==1) return 1;
// else
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     cout<<"the factorial of the given number is :"<<fact(n);

// }

// 2 . find fibo series next number  :

// #include <iostream>
// using namespace std;
// int fibo(int n){
//     if (n==0)
//     return 0;
//     if (n==1)
//     return 1;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the fibonachi number :";
//     cin>>n;
//     cout<<fibo(n);
//     return 0;
// }

// 2. fibo series up to n term .
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if (n==0)
//     return 0;
//     if (n==1)
//     return 1;
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }

// }
// int main(){
//     int n;
//     cout<<"Enter the number which we want to print fibo series :";
//     cin>>n;
//     cout<<"fibo series :";
//     for (int i=0;i<n;i++){
//         cout<<fibo(i)<<" ";
//     }
//     return 0;
// }

// evaluate a^b using recursion 
// #include <iostream>
// using namespace std;
// int power(int a, int b){
//     if (b==0)
//     return 1;
//     else{
//         return a*power(a,b-1);
//     }
// }
// int main(){
//     int a;
//     cout<<"enter base :";
//     cin>>a;
//     int b;
//     cout<<"enter power :";
//     cin>>b;
//     cout<<power(a,b);
//     return 0;
// }

// 4 . sum of digit using recursion.
// #include<iostream>
// using namespace std ;
// int sumofDigits(int n){
//     if (n==0)
//     return 0;
//     else{
//         return (n%10) + sumofDigits(n/10);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     cout<<"the sum of digit is ="<<sumofDigits(n);
//     return 0;

// }

// Display a table of a user input number :


// #include<iostream>
// using namespace std;
// void tableofNumber(int n,int i){
//     if (i>10)
//     return;
//        cout<< n * i<<endl;
//         tableofNumber(n,++i);
//     }

// int main(){
//     int n ;
//     cout<<"enter the number :";
//     cin>>n;
//  tableofNumber(n,1);
// }

// // gcd
// #include<iostream>
// using namespace std;
//     int gcd(int a ,int b){
//         if(b==0) return a;
//         return gcd(b,a%b);
    
// }
// int main(){
//     int a,b;
//     cout<<"enter two number :"<<endl;
//     cin>>a>>b;
//     cout<<"gcd="<<gcd(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the a and b : "<<endl;
//     cin>>a>>b;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout<<"after swapping :"<<a<< " "<<b<<endl;
// }

// #include<iostream>
// using namespace std;
// int fact(int n){
// if (n==0 ||n==1) return 1;
// return n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     cout<<"the factorial of "<<n<<"is :"<<fact(n);
// }

// #include<iostream>
// using namespace std;
// int fibo(int n){
// if(n==1) return 0;
// if(n==2) return 1;
// return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     for(int i=1;i<n;i++){
//     cout<<" "<<fibo(i);
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int gcd(int a , int b){
//     if (b==0) return a;
//     return gcd(b,a%b);
// }
// int main(){
//     int a,b;
//     cout<<"enter the a :";
//     cin>>a;
//     cout<<"enter the b :";
//     cin>>b;
//     cout<<"the gcd of"<<a<<" and "<<b<<" is "<<gcd(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int power(int a , int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     int a;
//     cout<<"enter base :";
//     cin>>a;
//     int b;
//     cout<<"enter power :";
//     cin>>b;
//     cout<<power(a,b);


// }

// #include<iostream>
// using namespace std;
// int power(int a , int b){
//     if (b==0) return 1;
//     else{
//         return a*power(a,b-1);
//         }
// }
// int main(){
//     int a, b;
//     cout<<"enter base :";
//     cin>>a;
//     cout<<"enter power :";
//     cin>>b;
//     cout<<a<<"^"<<b<<"="<<power(a,b);
// }


// #include<iostream>
// using namespace std;
// int power(int a , int b){
//     if (b==0) return 1;
//     else{
//         return a*power(a,b-1);
//     }
// }
// int main(){
//     int a;
//     cout<<"enter base :";
//     int b;
//     cout<<"enter power :";
//     cin>>a>>b;
//     cout<<a<<"^"<<b<<"="<<power(a,b);
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int power(int a , int b){
//     if (b==0) return 1;
//     else{
//         return a*power(a,b-1);
//         }
// }
// int main(){
//     int a, b;
//     cout<<"enter base :";
//     cin>>a;
//     cout<<"enter power :";
//     cin>>b;
//     cout<<a<<"^"<<b<<"="<<power(a,b);
// }

// #include<iostream>
// using namespace std;
// int sumofDigit(int n){
//     if(n==0) return 0;
//     else{
//         return (n%10)+sumofDigit(n/10);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     cout<<sumofDigit(n);
// }



// #include<iostream>
// using namespace std;
// void tableofNumber(int n,int i){
//     if (i>10) return;
//         cout<<n*i<<endl;
//         tableofNumber(n,++i);
// }
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     tableofNumber(n,1);
// }

// #include<iostream>
// using namespace std;
// void tableofNumber(int n,int i){
//     if (i>10)
//     return;
//        cout<< n * i<<endl;
//         tableofNumber(n,++i);
//     }

// int main(){
//     int n ;
//     cout<<"enter the number :";
//     cin>>n;
//  tableofNumber(n,1);
// }

// #include<iostream>
// using namespace std ;
// void tableofNumber(int n, int i){
//     if (i>10) return;
//     else{
//         cout<<n<<"x"<<i<<n*i;
//         tableofNumber(n,++i);
//     }   
// }
// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     tableofNumber(n,1);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void table_of_number(int n, int i){
//     if (i>10) return ;
//     else{
//         cout<<n<<"x"<<i<< "="<<n*i<<endl;
//         table_of_number(n,++i);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     table_of_number(n,1);
//     return 0;
// }

// types of based on return type and parameter :
// no parameter no return 
// void greet();
// parameter but no return :
// void add(int , int);
// no parameter return value :
//  int getNumber(){
//     return 10;
//  }
//  int add(int a , int b);


// gdc of two number :

// #include<iostream>
// using namespace std;
// int gdc_of_number(int a , int b){
//     if (b==0) return a;
//     else{
//         gdc_of_number(b,a%b);
//     }
// }
// int main(){
//     int a ,b ;
//     cout<<"enter the value of a :";
//     cin>>a;
//     cout<<"enter the value of b :";
//     cin>>b;
//     gdc_of_number(a,b);
//     return 0;

// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     char str[100];
//     cout << "Enter a string: ";
//     cin.getline(str, 100);

//     cout << "Length = " << strlen(str);
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str1[100];
//     char str2[50];
//     cout<<"enter the first string :";
//     cin.getline(str1,100);
//     cout<<"enter the second string :";
//     cin.getline(str2,100);
//     if (strcmp(str1, str2) == 0)
//         cout << "Strings are equal";
//     else
//         cout << "Strings are not equal";

//     return 0;

// }


// #include <iostream>
// using namespace std;
// int fact (int n){
//     if (n==0) return 1;
//     if (n==1) return 1;
//     else{
//         return n*fact(n-1);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     cout<<"the factorial of "<<n<<"is " <<fact(n);
//     return 0;
// }


// gcd of two number 

// #include<iostream>
// using namespace std;
// int gcd_of_number(int a, int b){
//     if(b==0) return a;
//     else{
//        return gcd_of_number (b,a%b);
//     }
// }
// int main(){
//     int a,b;
//     cout<<"enter a :";
//     cin>>a;
//     cout<<"enter b :";
//     cin>>b;
//     cout<<gcd_of_number(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std ;
// int power (int a , int b){
//     if (b==0) return 1;
//     else{
//          return a*power(a,b-1);
//     }
// }
// int main(){
//     int a,b;
//     cout<<"enter base:";
//     cin>>a;
//     cout<<"enter power :";
//     cin>>b;
//     cout<<power(a,b);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int power(int a, int b){
//     if (b==0)
//     return 1;
//     else{
//         return a*power(a,b-1);
//     }
// }
// int main(){
//     int a;
//     cout<<"enter base :";
//     cin>>a;
//     int b;
//     cout<<"enter power :";
//     cin>>b;
//     cout<<power(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int fibo (int n){
//     if (n==0) return 0;
//     if (n==1) return 1;
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the value of n ;";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cout<< " "<<fibo(i);
//     }

// }

// #include<iostream>
// using namespace std;
// void table_of_number(int n, int i){
//     if(i>10) return ;
//     cout<<n*i<<endl;
//     return table_of_number (n,++i);
// }
// int main(){
//     int n;
//     cout<<"table of :";
//     cin>>n;
//     table_of_number(n,1);
// }

// #include<iostream>
// using namespace std ;
// int add(int a , int b){
// // cout<<"sum="<<a+b;
// return a+b;
// }
// int main(){
//     int a,b;
//     cout<<"enter a and b";
//     cin>>a>>b;
//     cout<<add(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void change(int &x){
//     x=10;
// }
// int main(){
//     int a =5;
//     change(a);
//     cout<<"a="<<a;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[100];
//     cout<<"enter a string :";
//     cin.getline(str,100);
//     int length=strlen(str);
//     cout<<"the length of the string is :"<<length <<endl;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter the string :";
//     getline(cin,str);
//     cout<<"length of string :"<<str.length();
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1,str2;
//     cout<<"enter first string :";
//     getline(cin,str1);
//     cout<<"enter second string :";
//     getline(cin,str2);
//     if(str1==str2){
//         cout<<"equal :";
//     }
//     else{
//         cout<<"not equal :";
//     }
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1,str2;
//     cout<<"enter the first string :";
//     getline(cin,str1);
//     cout<<"enter the second string :";
//     getline(cin,str2);
//     if(str1==str2){
//         cout<<"string are equal :";
//     }
//     else{
//         cout<<"string are not equal :";
//     }
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1,str2;
//     cout<<"enter first string :";
//     getline(cin,str1);
//     cout<<"enter the second string :";
//     getline(cin,str2);
//     string result= str1+str2;
//     cout<<"catenation string ="<<result;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str1[200]="the name is ";
//     char str2[200]="john singha";
//     strcat(str1,str2);
//     cout<<"concatenated string ="<<str1;
//     return 0;

// }

// using strcmp()

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str1[100]="welcome";
//     char str2[50]="the john sinha";
//     if (strcmp(str1,str2)==0){
//     cout<<"both string are equal :";
//     }
//     else{
//         cout<<"string are not equal :";
//     }
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str1[100];
//     char str2[100];
//     cout<<"enter first string :";
//     cin.getline(str1,100);
//     cout<<"enter second string :";
//     cin.getline(str2,100);
//     if(strcmp(str1,str2)==0){
//         cout<<"string are equal :";
//     }
//     else{
//         cout<<"string are not equal :";
//     }
//     return 0;

// }

// using strstr()

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[100];
//     char sub[100];
//     cout<<"enter the first string :";
//     cin.getline(str,100);
//     cout<<"enter the sub string :";
//     cin.getline(sub,100);
//     if (strstr(str, sub) != NULL) {
//         cout<<"string exist in this string :";
//     }
//     else{
//         cout<<"substring does not exist in the string :";
//     }
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str,sub;
//     cout<<"enter the main string :";
//     getline(cin,str);
//     cout<<"enter the sub string :";
//     getline(cin,sub);
//     if(str.find(sub)!=string::npos){
//         cout<<"substring exist in string :";
//          }
//          else{
//             cout<<"substring does not exist :";
//          }
//          return 0;
// }

// count vovel and consonant in a string 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     int vowels = 0, consonants = 0;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             vowels++;
//         }
//         else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//             consonants++;
//         }
//     }

//     cout << "Number of vowels = " << vowels << endl;
//     cout << "Number of consonants = " << consonants << endl;

//     return 0;
// }


// #include <iostream>

// using namespace std;
// int main(){
//     int a;
//     int b;
    
//     cin>>a;
   
//     cin>>b;
//     cout<<a*b;
//     return 0;

// }



 
