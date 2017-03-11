#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using std ::cin;
using std ::cout;
using std ::endl;
using std :: swap;
using std :: vector;
using std :: string;

// read integers from stdin and prints their sum//
#if 0
int main () {

 int num;
  int sum = 0;
int input;
 cin >> num;
   for ( int i = 1; i <= 1; i++) {
     cin >> input;
    sum+= input;
   }
   cout << sum << endl;

return 0;
}

 // read integers from stdin and prints their average//

 int num;// how many int
  int input;//
  int sum= 0;
  int avg= 0;
  cin >> num;

  for (int i= 1; i <= num; i++) {
    cin >> input;
    sum += input;
  }
  avg = sum / num;

  cout << avg << endl;

// write a program that read integers from stdin and prints out the second smallest //

int n1;
int n2;
int min;
int smin;
int n;
cin >> n1;
cin >> n2;

 if ( n1 < n2) {
min = n1; smin = n2;
 }
 else  {
  min = n2; smin = n1;
 }
 while ( cin >> n) {
  if ( n < min) {
   min = n;
  }
  else if ( n < smin)
   smin = n;
  }

  cout << smin << "\n";


  return 0;
 }

// program that gives highest powe of 2//
int n;
 int k =2;
 cin >> n;
 while ( k < 2) {
  k = k*2;
 }
return 0;


// write programs that gives u the fist three  nth odd cubes//
double sum;
double cube = 0;
 for (int i=1; i<=5; i++)
 {if ( i%2 !=0)
  { cube = i*i*i;
   sum+= cube;}}
   cout << sum ;
   return 0;

  }

// write programs that takes integer n and returns nth term of fabinacci sequence//
int fib(int n){
 int prev =0,current =1, next;
 int i =0;
 while(i < n){
  next = prev + current;
 prev = current;
 current = next;
 i++;
}
return prev;

}
// write program that takes 3 integer and returns the maximal//
 int main () {
  int x, y, z;
cin >> x,y,z;
int max =x ;

  if ( y> max){
   max =y;}
   if ( z> max){
    max =z;}
     return 0;
   }

// write functions that swap values//
int main () {
 int a = 6;
 int b=  7;
 swap (a,b);
 cout << a;
 cout << b;

 return 0;
}

//IsPrime boolean Prime //

int main() {

 int n,i;
while (cin >> n){

bool IsPrime =true;

for (int i =2; i<n; i++)

 if( n % i==0) {
 IsPrime = false;
 break;
 }
if ( IsPrime && n!=1)
 cout << "true" << "\n";
else if( n==1)
 cout<< "false" << "\n";
else
 cout << "false" << "\n";
}

return 0;
}

// write functions that prints integers in reverse order using vector//
void print_elem(int elem){
 cout << elem << endl;
}

int main () {
 int ia[4] ={1,2,3,4};
 vector<int> v(ia,ia+4);
 for_each(v.rbegin(), v.rend(), print_elem);



  return 0;
}

// TODO:  write a function that takes a string and a character and returns the number of occurences of the character in the string.//
size_t countChars ( const string&s , char c)
{
size_t count =0;
 int i;
 for (size_t i <= 0;i< s.length(); i++)
  if (s[i]==c) count ++;
 }return count;
}

//TODO: write a function that takes a string by reference and reverses it.//
void reverse (string& s) {
 int i;
 for (i =0; i< s.length()/2;i++){
char temp = s[i];
  s[i]= s[ s. length()-i-1];
  s[s.length ()-i-1] =temp;
 }
}

// write a binary search on a sorted vector . returns true if integer appears on the vector//
bool bserach(
const vector<int>&v, int x){
 int left =0,right= v.size ()-1;
int mid;
 while(left<=right){
  mid = (left + right)/2;
  if (v[mid]==x)
   return true;
  else if( v[mid]<x)
   left = mid+1;
  else
   right =mid-1;
 }
 return false;
}

// evaluate a ploynomial//
int polyEval(const vector <int>&a, int x) // NOTE: degree (f) = v.size()-1//
{
 int sum=0;
 for ( i = 0; i<a.size();i++){
  sum+= a[i] * pow(x,i);
 }
 return sum;
}
#endif
//      2nd method  //
int polyEval(a,x){
 int sum=0;
 int xi=1;
 for ( int i=0; i<a.size(); i++){
sum+= a[i] * xi;
  xi *=x; //UPDATE xi//
 }
 return sum;
}
//  //
int polyEval(a,x){
 int sum=0;
 for ( int i=a.size()-1; i!=1; i--){
sum = sum * x+ a[i];
  )
  return sum;
 }
 // Analysis: only 1 multiplication//




