// #include<iostream>
// using namespace std;
// int main(){
//     char str[] = {'a', 'b', 'c', '\0'};
//     cout<<strlen(str)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[] = "hello";
//     cout<<strlen(str)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     char str[100];
//     cout<<"enter char array:";
//     cin.getline(str, 100, '$');
//     cout<<"output : "<<str<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char myname[20];
//     cout<<"enter your full name";
//     cin>>myname;
//     cout<<"full name :"<<myname;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string name ="shubham";
//     cout<<name;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string name;
//     getline(cin, name);
//     cout<<"your name is :"<<name;
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     getline(cin, s);
//     cout<<s.length();
//     return 0;
// }

// Write a program using while loop to print numbers from 1 to 10.

// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     while(i<=10){
//     cout<<i<<endl;
//     i++;
//     }
//     return 0;
// }

// Write a program using do-while loop to print numbers from 10 to 1.

// #include <iostream>
// using namespace std;
// int main(){
//     int i = 10;
//     do{
//         cout<<i<<" ";
//         i++;
//     }
    
//     while(i<30);
//         return 0;

// }



// Write a program to print even numbers between 1 and 50 using for loop.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1 ; i <=50; i++){
//         cout<<i<<" ";
//     }
// }

// Write a program to check whether a number is even or odd using if-else.

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     if(n%2==0){
//         cout<<n<<"is even";
//     }
//     else{
//         cout<<"the number is odd";
//     }
// }

// Write a program to display day name (1–7) using switch case.

// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"enter a day name between (1-7) :";
//     cin>>day;

//     switch (day){
//          case 1:
//     cout<<"monday";
//     break;

    
//     case 2:
//     cout<<"tuesday";
//     break;

    
//     case 3:
//     cout<<"wednesday";
//     break;

    
//     case 4:
//     cout<<"thrusday";
//     break;

    
//     case 5:
//     cout<<"Friday";
//     break;

    
//     case 6:
//     cout<<"saturday";
//     break;

    
//     case 7:
//     cout<<"sunday✌️  ";
//     break;

//     }

//     return 0;

// }

// Write a program to check whether a number is positive, negative or zero using if-else-if.

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     if(n<0){
//         cout<<"The number is negative";
//     }
//     else if (n==0){
//         cout<<"the number is zero";
//     }
//     else{
//         cout<<"the number is positive";
//     }
//     return 0;
// }

// Write a program to read 10 elements in a 1D array and print them.
// #include<iostream>
// using namespace std;
// int main (){
//     int arr[10];
//     cout<<"enter the number :"<<endl;
//     for (int i = 0; i<10; i++){
//     cin>>arr[i];
//     }
//     cout<<"print the arr number :"<<endl;
//     for (int i = 0; i< 10 ; i++){
//     cout<<arr[i]<<" ";
    
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10];  // declare an array of size 10

//     // Input 10 elements
//     cout << "Enter 10 numbers: ";
//     for(int i = 0; i < 10; i++) {
//         cin >> arr[i];
//     }

//     // Print the elements
//     cout << "The elements in the array are: ";
//     for(int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"enter the number :";
//     for(int i= 0; i<5; i++){
        
//     }
//     cin>>arr[i];

//     return 0;
// }

// Write a program to find the sum of first N natural numbers.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum;
//     cout<<"enter the number : ";
//     cin>>n;
//     sum = n*(n+1)/2;
//     cout<<sum<<endl;
//     return 0;
// }

// Write a C++ program to check whether a character is a vowel or consonant.

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"enter the character :";
//     cin >> ch;
//     if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
//         cout<<"vovel";
//     }
//     else{
//         cout<<"consonant";
//     }
//     return 0;
// }

// 1️⃣ Check whether a year is a leap year

// #include <iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"enter a year :";
//     cin>>year;
//     if (year%4==0 && year !=100||year%400==0){
//     cout<<"year is a leap year";
//     }
//     else{
//         cout<<"this is not a leap year";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n, temp, sum = 0, digit;
//     cout << "Enter a number: ";
//     cin >> n;

//     temp = n;

//     while (n > 0) {
//         digit = n % 10;
//         sum = sum + digit * digit * digit;
//         n = n / 10;
//     }

//     if (sum == temp)
//         cout << "Armstrong number";
//     else
//         cout << "Not an Armstrong number";

//     return 0;
// }


// Input a number and check whether it is divisible by both 5 and 11.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     if (n%5==0 && n%11==0){
//         cout<<"print the number is divisible by both 5 and 11";
//     }
//         else{
//             cout<<"the number is not divisible by both 5 and 11";
//         }

//     return 0;
// }

// Print numbers from 1 to 100 using a loop.

// #include<iostream> 
// using namespace std;
// int main(){
//     int i = 1;
//     while (i <= 100){
//         cout<<i<<" "<<endl;
   
//     i++;
//  }
//     return 0;

// // }

// Print the multiplication table of a number.


// #include <iostream>
// using namespace std;
// int main(){
//     int n,i,c;
//     cout<<"enter the number :";
//     cin>>n;

//     for (i=1; i<=10; i++){
//         c=n*i;
//         cout<<c<<endl;
//     }
//     return 0;
// }

// Count the digits of a numb

// #include<iostream>
// using namespace std;
// int main(){
//     int n , count = 0;
//     cout<<"enter the number :";
//     cin>>n;
//     if (n == 0){
//         count = 1;
//     }
//     else{
        
//     }


//     return 0;
// }

// swap two number using a third variable.
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"enter two value a and b :" ;
//     cin>>a>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<a<<" "<<b;
//     return 0;
// }

// Print even number 0 to 100

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i<=100 ; i++){
//         if(i%2==0)
//         cout<<i<<""<<endl;
//     }
//     return 0;
// }

// sum of first n natural number
// #include<iostream>
// using namespace std;
// int main(){
//     int n , sum = 0;
//     cout<<"enter the number which you want to add up to n :";
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         sum=sum+i;
//     }
//     cout<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value which one you want to write a table :";
//     cin>>n;
//     for (int i =1 ; i<=10 ; i++){
//         cout<<n<<" x "<<i<<" = "<<n*i<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, count=0;
//     cin>>n;
//     if (n==0)
//     count = 1;
//     else{
//         while (n !=0){
//             n=n/10;
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;


// }


// Reverse a number

// #include <iostream>
// using namespace std;
// int main(){
//     int n, rev = 0;
//     cin>>n;
//     while (n!=0){
//         int digit = n%10;
//         rev = rev*10+digit;
//         n=n/10;
//     }
//     cout<<rev;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, rev = 0;
//     cout<<"enter the value which you want to reverse :";
//     cin>>n;
//     while (n!=0){
//         int digit = n%10;
//         rev = rev*10+digit;
//         n=n/10;
//     }
//     cout<<rev;
//     return 0;

// }

// #include <iostream> 
// using namespace std;
// int main(){
//     int n , temp , rev = 0;
//     cout<<"enter the number :";
//     cin>>n;
//     while(n!=0){
//         int digit = n%10;
//         rev = rev*10+digit;
//         n=n/10;
//     }
//     cout<<rev;
//     if (temp == rev)
//     cout<<"palindrome";
//     else
//     cout<<"not palindrome";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n , a=0, b=1, c;
//     cin>>n;
//     cout<<a<<" "<<b<<" "<<" ";
//     for (int i=3; i<=n; i++){
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     long long fact = 1;
//     cin>>n;
//     for (int i =1 ; i<n; i++){
//         fact=fact*i;
//     }
//     cout<<fact<<" ";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"enter the caracter :";
//     cin>>ch;
//     if ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') ||
//     (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
//     cout<<ch<<" : is a vovel";
//     else{
//         cout<<"consonant";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     if (n>=90){
//         cout<<"grade A";
//     }
//     else if (n>=75){
//         cout<<"grade B";
//     }
//     else if (n>=60){
//         cout<<"grade C";
//     }
//     else{
//         cout<<"fail";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr [5];
//     cout<<"enter the 5 array :\n";
//     for (int i=0 ;i<5; i++){
//         cin>>arr[i];
//     }
//     cout<<"you entered :";
//     for (int i=0 ;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr [5] , sum = 0;
//     cout<<"enter the five number \n:";
//     for (int i=0;i<5;i++){
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<"the sum is :"<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     float arr[5],sum=0;
//     float avg;
//     cout<<"enter 5 number :";
//     for (int i=0;i<5;i++){
//         cin>>arr[i];
//         sum+=arr[i];}
//         avg=sum/5;
//         cout<<avg<<": ans ";
    
//     return 0;
// }

// Find max and min element in a array


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int smallest = arr[0];

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             largest = arr[i];
//         }
//         if(arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }

//     cout << "Largest element = " << largest << endl;
//     cout << "Smallest element = " << smallest << endl;

//     return 0;
// }
 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array :";
//     cin>>n;

//     int arr[n];
//     cout<<"input the array :/n";
//     for (int i=0;i<n;i++){
//     cin>>arr[i]; 
//     }

//     int largest = arr[0];
//     int smallest = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             largest = arr[i];
//         }
//         if(arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }

//     cout << "Largest element = " << largest << endl;
//     cout << "Smallest element = " << smallest << endl;
    
//     return 0;


// }Find the factorial of a number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int fact = 1;
//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
        
//     }
//     cout<<fact<<"";

// }

// Reverse a given number.
// #include <iostream>
// using namespace std;
// int main(){
//     int n, digit, rev=0 ;
//     cout<<"enter the number :";
//     cin>>n;
    
//     while(n!=0){
//         digit = n%10;
//         rev = rev*10+digit;
//         n=n/10;
//     }
//     cout<<rev<<" ";
//     return 0;
// }

// Check whether a number is a

// #include<iostream>
// using namespace std;
// int main(){
//     int n, temp ,digit, rev=0;
//     cout<<"enter the value of n :";
//     cin>>n;
//     temp = n;

//     while(n!=0){
//         digit = n%10;
//         rev=rev*10+digit;
//         n=n/10;
//     }
//     if (temp == rev){
//         cout<<"is the palindrome :";
//     }
//     else{
//         cout<<"not palindrome :";
//     }
//     return 0;
// }

// Find the sum of digits of a number.
// #include <iostream>
// using namespace std;
// int main(){
//     int n , digit ,sum = 0;
//     cout<<"enter the number :";
//     cin>>n;
//     while(n!=0){
//     digit = n%10;
//     sum=sum+digit;
//     n=n/10;
//     }
//     cout<<"sum of digit :"<<sum;

//     return 0;

// Check whether a number is an Armstrong number.
// #include<iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int n ,temp, digit ,sum=0, count=0;
//     cout<<"enter a number :";
//     cin>>n;
//     temp = n;
//     // for count number of digit;
//     while (temp!=0){
//         count ++;
//         temp = temp/10;
//     }
//     temp=n;
//     // calculate armstrong sum;
//     while (temp!=0){
//         digit = temp%10;
//         sum=sum+pow(digit,count);
//         temp=temp/10;
//     }
//     if (sum==n)
//     cout<<"armstrong number";
//     else{
//         cout<<"not a armstrong number";
//     }
//     return 0;  
// }


// Find the largest and smallest element in an array.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of an array :";
//     cin>>n;
//     int arr [n];
//     cout<<"enter array element :\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int largest = arr[0];
//     int smallest = arr [0];
//     for (int i=1;i<n;i++){
//         if (arr[i]>largest)
//         largest=arr[i];
        
//         if (arr[i]<smallest)
//         smallest = arr[i];
//     }
//     cout<<"largest element ="<<largest;
//     cout<<"smallest element ="<<smallest;
    


//     return 0;
// }

// 2. Write a C++ program to count even and odd numbers in an array.
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of an array :";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter array elements :\n";
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"even or odd element :";
//     for (int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<"is even :";
//         }
//         else{
//             cout<<arr[i]<<"is odd :";
//         }
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char name[1];
//     cout << "Enter your name: ";
//     cin >> name;   // stops if there is a space
//     cout << "Hello " << name << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"hello world";
// }

// int main (){
//     greet();
//     return 0;
// }
 

// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"my name is shubham kumar ";
// }
// int main(){
//     greet();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void greet(){
// cout<<"Happy new year for all :";
// }
// int main(){
//     greet();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int add(int a, int b){
//     return a+b;
// }
// int main (){
//     int sum = add(5, 3);
//     cout<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sub(int a , int b){
//     return a-b;
// }
// int main(){
   
//     cout<< sub(5,3);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void change(int x){
//     x=20;
// }

// int main(){
//     int a=10;
//     change(a);
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void change(int &x){
//     x=20;
// }
// int main(){
//     int a=10;
//     change(a);
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void doubleNumber (int &x){
//     x=x*2;
// }
// int main(){
//     int a = 5;
//     doubleNumber (a);
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void doubleNumber(int &x)
// {
//     x = x * 2;
// }

// int main()
// {
//     int a = 5;
//     doubleNumber(a);
//     cout << a;
//     return 0;
// }

// recursion means function calling itself.
// A function is a block of code that does one specific job.

// #include<iostream>
// using namespace std;
// void print(int n){
//     if (n==0)
//     return;
//     print (n-1);
//     cout<<n<<" ";
// }
// int main(){
//     print(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if (n==0)
//     return;
//     cout<<n<<" ";
//      print(n-1);
  
// }
// int main(){
//     print(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0)
//     return;
//     print(n-1);
//     cout<<n<<" ";

// }
// int main (){
//     print (11);
//     return 0;
// }

// A string is a sequence of character stored together.

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char name1[10] = "shubham";
//     char name2[20]="sahil";
//     strcat(name1,name2);
//     cout<<name1;
//     // strcpy(name2,name1);
//     // cout<<name2;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     string a = "good";
//     string b = "morning";
//     a.append(b);
//     cout<<a;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     float r;
//     cout<<"enter the radius of a curcle :";
//     cin>>r;
//     cout<<3.14*r*r;
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main(){
//     float p,r,t;
//     cout<<"enter principle amount :"<<endl;
//     cin>>p;
//     cout<<"enter rate :"<<endl;
//     cin>>r;
//     cout<<"enter time :"<<endl;
//     cin>>t;
//     cout<<"your simple intresst is : "<<(p*r*t)/100;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     float n;
//     cout<<"enter a number which you want to cube :";
//     cin>>n;
//     cout<<n*n*n;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<a+b;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     char ch = 'a';
//     cout<<(int)ch;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 65;
//     cout<<(char)x;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     if(n%2==0){
//         cout<<"even";
//     }
//     if(n%2!=0){
//         cout<<"odd";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the value of a :";
//     cin>>a;
//     cout<<"enter the value of b :";
//     cin>>b;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout<<a<<endl;
//     cout<<b;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 444;
//     cout<<&x;

// }

// #include<iostream>
// using namespace std;
// void greet(){;
// cout<<"good morning"<<endl;

// }
// int main(){
//     greet();

// }