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

/ Given two integer n and k .Find the highest power of k that divides n//

int main() {
int n,k,original,count=0;
cout << "enter a number" << endl;
cin >> n;
cout << "enter a divider" << endl;
cin >> k;
original =k;
 while (n%k==0|| n%k!=0) //NOTE: AT this point it will run infinitely, press ctrl-C to stop the program//
 {
  if ( n/k >=1 && k!=1)
  {
   count ++;
   k = k*original;
  }
if ( n%k==0 || n%k !=0) {

 }
  cout << "largest power is" << count << endl;
 }
return 0;
}


// The highest power of any even numbers //
int main() {
 int n, k;
 cout<< "enter a number"<< endl;
 cin>> n;
 cout << "enter a divider" << endl;
 cin >> k;
 int l=0;
 while( n%k ==0){
  l++;
 n =n/k;
}
cout << "largest power is"<< l << endl;
return 0;
}


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


//METHOD 2//
void Printvec(const <int>& );
void Reverse (const <int>&);
int main () {
 vector<int> myvector;
 Printvec(myvector);
 Reverse (myvector);
 return 0;
}
void Printvec( const <int>& Newvec) {
 cout << "Vector : " ;
 int input;
 cin >> input;
 Newvec.pushback[i];
 for( int i =0; i<Newvec.size(); i++) {
   cout<< Newvec[i];

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


/ write a function that performs a "right circular shift "  on an array of integers.//
 void reverse(int*a, int n){
  for (int i=0; i<n/2;i++){
  int t=a[i];
  a[i]= a[n-1-i];
   a[n+i] =t;
  }
 }



/TODO: write a function that takes two strings and returns an integer value
 * indicating whether or not the first was a substring of second one //

int main() {
 string s1,s2;
 cout << "Enter the first string";
 cin >> s1;
 cout << "Enter the substring to serach";
 cin >> s2;
 int n1 = s1. length();
 int n2 = s2. length();
 for ( int i=0; i< n1-n2; i++){
  for( int j=0; j<n2; j++){
   if( s1[i+j] != s2[j])
   {
    break;
   }
   if(j==n2)
    cout<< "the substring found at" << i << endl;
  }
  }
 cout<< "-1" <<endl;
  return 0;
 }
