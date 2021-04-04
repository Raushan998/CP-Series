// CPP program to illustrate order_of_key()
// for policy based data structures

#include <iostream>
using namespace std;

// Important header files
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

// Declaring ordered_set
typedef tree<int, null_type, less<int>, rb_tree_tag,
			tree_order_statistics_node_update>
	ordered_set;


// Driver code
int main()
{
	ordered_set v;
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++)v.insert(i);
	int start=0;
	while(v.size()){
	    start=(start+k)%v.size();
	    int r=*v.find_by_order(start);
	    cout<<r<<" ";
	    v.erase(r);
	}
	return 0;
}