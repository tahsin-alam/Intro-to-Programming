 #include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include <cstdio>
#include<cstdlib>
#include<time.h>
using std ::cin;
using std ::cout;
using std ::endl;
using std :: swap;
using std :: vector;
using std :: string;

// TODO: read integers from stdin and prints their sum//

int main () {

 int num;
  int sum = 0;
int input;
 cin >> num;
   for ( int i = 1; i <= 1; i++) {
     cin >> input;
    sum= num +input;
   }
   cout << sum << endl;

return 0;
}


// TODO: read integers from stdin and prints the largest one.//
 int main () {

  int num;
    int sum = 0;
   int input;
 cin >> num;
    for ( int i = 1; i <= 1; i++) {size_t degree,
	     cin >> input;
	    sum+=input;
	   }
    cout << sum << endl;}


 //TODO: read integers from stdin and prints their average//

 int num;// how many int
  int input;//
  int sum= 0;
  int avg= 0;
  cin >> num;

  for (int i= 1; i <= num; i++) {
    cin >> input;
    sum+= input;
  }
  avg = sum / num;

  cout << avg << endl;



//TODO : write a program that read integers from stdin and prints out the second smallest //

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


// TODO:Given two integer n and k .Find the highest power of k that divides n//

int main() {
int n,k,original,count=0;
cout << "enter a number" << endl;
cin >> n;
cout << "enter a divider" << endl;
cin >> k;
original =k;
 while( n%k==0 || n%k !=0)  //NOTE: AT this point it will run infinitely, press ctrl-C to stop the program//
 {
  if ( n/k >=1 && k!=1)
  {
   count ++;
   k = k*original;
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
int main() {
double sum;
double cube = 0;
 for (int i=1; i<=5; ++i)
 {if ( i%2 !=0)
  { cube = i*i*i;
   sum+= cube;}}
   cout << sum ;
   return 0;

  }

// TODO:write programs that takes integer n and returns nth term of fabinacci sequence//
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
int main() {
	int n;
	cin >> n;
	printf("%d", fib(n));// print the number that entered by the user according to the info above. Where "%d" outputs signed decimal integer.//

	return 0;
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


     int main() {
      double x, y, z;
	   cin >> x >> y >> z;
       double sum;
       double avg =0;
	   for( int i =1; i<=sum;i++) {
		cin >> x,y,z;
	sum = x+y+z;
	avg = sum/3;
}	cout << avg << endl;
return 0;
}

// TODO :write functions that swap values//
int main () {
 int a = 6;
 int b=  7;
 swap (a,b);
 cout << a;
 cout << b;

 return 0;
}

// TODO: IsPrime boolean Prime //

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

//TODO: write functions that prints integers in reverse order using vector//
void print_elem(int elem){
 cout << elem << endl;
}

int main () {
 int ia[4] ={1,2,3,4};
 vector<int> v(ia,ia+4);
 for_each(v.rbegin(), v.rend(), print_elem);

  return 0;
}

or,

void reverse( vector<int> &v){
for( size_t i = v.size()-1;i>=0;i--){
 cout<<v[i]<<"  ";
}
}

int main() {
	int n;
	vector<int> v;
	 while(cin >> n) {
		 v.push_back(n);
		  }
	 return 0;}
	 

// TODO: write a function that takes a vector and places the elements in sorted order./

size_t indexOfSmallest(const vector<int>& V, size_t start) {
	size_t smallindex = start;
	for (size_t i = start+1; i < V.size(); i++) {
		if (V[i] < V[smallindex]) smallindex = i;
	}
	return smallindex;
}

void sort(vector<int>& V) {
	for (size_t i = 0; i < V.size()-1; i++) {
		swap(V[i],V[indexOfSmallest(V,i)]);
	}
}
int main()
{

	/* test our sorting function: */
	int x;
	vector<int> v;
	while (cin >> x) {
		v.push_back(x);
	}
	sort(v); /* this changes v */
for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	return 0;
}


// TODO:  write a function that takes a string and a character and returns the number of occurences of the character in the string.//

void countChars ( const string&s , char c) {

int count =0;
 int i;
 for (size_t i=0;i< s.length(); i++)
  if (s[i]==c) count ++;

 }
int main() {
 string s =" clear clay";
 int start = count( s.begin(),s.end(),'c');
 cout <<start<< "\n";
 return 0;

}


//TODO: write a function that takes a string by reference and reverses it.//

vo id reverse (string& s) {
 int n= s.length();
 for (int i =0; i<n/2;i++)
swap(s[i],s[n-i-1]);
 }
 int main() {
string s = "classy";
  reverse(s);

 cout<< s;
  return 0;
}


 //TODO: write a function that takes a string and returns a boolean
///indicating whether or not it was a palindrome.

bool isPalindrome(string& s){

size_t length_of_s = s.length();
for( size_t i =0; i< s.length(); i++){
if( s[i] != s[s.length()-i-1]){
return false;
break;}
return true;
}
}
int main() {
 for( string s; cin>> s;) {
  cout << s << "  "<< "is";
  if(isPalindrome(s)) cout<< " "<<"not";
   cout<< "a plaindrome"<<"\n";
 }
}





//TODO: write a binary search on a sorted vector . returns true if integer appears on the vector//
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



//TODO: evaluate a polynomial//
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
// 3rd method :Horner rule. //
int hornerEval(int*a,size_t degree,int x){  // horner rules//

 int sum=0;
 for ( int i=a.size()-1; i!=1; i--){
sum = sum * x+ a[i];
  )
  return sum;
 }
int main() {
		int C[] = {3,2,1}; // x^2 + 2x + 3
			cout << "enter an integer: ";
				int x;
					cin >> x;
					cout << "f(" << x << ") = " << polyEval(C,2,x) << endl;
					cout << "f(" << x << ") = " << hornerEval(C,2,x) << endl;
								

 // Analysis: only 1 multiplication//


#endif
//TODO: write a function that performs a "right circular shift "  on an array of integers.//
 void reverse(int*a, int n){
  for (int i=0; i<n/2;i++){
  int t=a[i];
  a[i]= a[n-1-i];
   a[n+i] =t;
  }
 }

void shiftright (int *a, int n,int m){
	m = m%n;
	if( m==0) return;
	reverse(a,n);
	reverse(a,m);
	reverse(a+m, n-m);
}


// TODO: write a function that takes two strings and returns an integer value
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



// TODO : Problems with array//
char B[10];
	for (size_t i = 0; i < 10; i++) {
		B[i] = 'a' + i;
					}
	for (size_t i = 0; i < 10; i++) {
					/* B[i] == *(B+i) == *(i+B) ==? i[B] */
		cout << i << "[B] == " << i[B] << endl;

//  TODO: declare another pointer (say p2) to a character, initialize it
//  	 * just as we did before, and print out (p+i) and then (p2+i) for small
//* values of i. Notice that the difference in memory addresses changes. *
int *p;
int x =17;
int *p =&x;
int *p2;
int z =30;
int * p2 =&z;
			
			cout<< "p==" << *p2 << "\tz ==" << z << endl;
			cout << "p==" << p+i <<endl;
			cout << "p==" << p2+i << endl;

//* TODO: write a function that takes an array, and its size, and applies
			 *  * a random permutation to the array//

void randPerm(int* A, size_t n)
{
	srand((NULL));
	for( int i=n-1; i>0; i--){\int j =rand() % (i+1);
		swap( A[i]& A[j]);
	}
}
}

int main() {
		int C[] = {3,2,1}; // x^2 + 2x + 3
			cout << "enter an integer: ";
				int x;
				cin >> x;
cout << "random number: " << rand() << endl;
srand(time(0));
	cout << "more random numbers: " << rand() << endl << rand() << endl
