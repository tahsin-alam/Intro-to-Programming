#include <iostream>
#include <time.h>
#include <cstdlib>
#include <map>
#include<vector>
#include<set>
using std:: set;
using std:: vector;
using std:: map;
using std:: cout;
using std:: cin;
using std:: endl;
#if 0
//TODO:  write a recursive function that prints the base 10 digits of n vertically to cout.//
void printvertical(unsigned long n)
{
  if(n<10)
    cout<< n<< endl;
  else{
    printvertical(n/10);
    cout<< n%10 <<endl;
  } //it going to continue the function until it gets to the base case and prints ts it out.//
}
int main() {
printvertical(3227);
return 0;
}


// TODO: write a recursive function to compute a^b (a to the b power)
/* binary search. */
bool search(int* a,int size,int x)
{
  if(size<1)
    return false;
  //recursive case//
  int mid =size/2;
  if(x>a[mid]) {
    return search (a+mid+1,size-mid-1, x);}
  else if( a[mid]>x){
    return search (a,mid,x);}
  else
    return true;
}
int main() {
  int a[100];
	for (size_t i = 0; i < 100; i++) {
		a[i] = i*i;
	}
	int x;
	while (cin >> x)
		cout << search(a,100,x) << endl;
	return 0;
}

//TODO : Extended GCD Algorithm//
int xgcd(int a, int b, int &u, int &v)
{
if(a/b==0) {
  u= 0;
  v=1;
  return b;
}
int z,k;
int d= xgcd(b, a/b, z, k) ;
u= z;
v= z-k* (a/b);
return d;
}
void gcdTest()
{
	// TODO: modify this to test your *extended* gcd algorithm,
	// once you've written it, that is.
	int a,b,d;
	cout << "Enter pairs of integers a,b for gcd test: ";
	while(cin >> a >> b) {
		d = xgcd(a,b);
		cout << "The gcd is: " << d << endl;
	}
}

//TODO: Powerset Function for vectors//

vector<vector<int> > powerset(vector<int>& S){
	vector<vector<int> > res;
	if (S.size() ==0){
		res.push_back( vector<int>());
		return res;
	}
	int tmp= S.back();
	S.pop_back();
	res= powerset(S);
	size_t n= res.size();

	for (size_t i=0; i<n; i++) {

		vector<int> v= res[i];
		v.push_back(tmp);
		res.push_back(v);
	}
	return res;
}
int main() {
	vector<int> S= {0,1,2};
vector<vector<int> > res= powerset(S);
	cout << "{\n";
	size_t n= res.size();
for (size_t i=0; i<n; i++) {
cout << "  {";

}


	cout << "},\n";
	return 0;
}
#endif
* //TODO: write a function to compute all *k-subsets* of a given set.
 * //Recall that k-subsets are subsets with *precisely* k elements.//

set<set<int> > ksubsets(set<int>& S, size_t k){
	if(k>S.size())
		return set<set<int>> ();
	if(k==0){
		set<set<int>> P;
		P.insert(set<int>());
		return P;
	}
	int first = K(S.begin());
	S.erase(S.begin());
	set<set<int>> L= ksubsets(S,K);
	set<set<int>> R= ksubsets(S,K-1);

	for(set<set<int> > ::iterator i=R.begin();i!=R.end();i++){
		set<int>T (*i), T.insert(first); L.insert(T);
	}
	S.insert(first);
	return L;
}






