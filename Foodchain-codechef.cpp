//Food Chain
/*A great deal of energy is lost as metabolic heat when the organisms from one trophic level are consumed by the next level.

Suppose in Chefland the energy reduces by a factor of K, i.e, if initially, the energy is X, then the transfer of energy to the 
next tropic level is ⌊XK⌋. This limits the length of foodchain which is defined to be the highest level receiving non-zero energy.

E is the energy at the lowest tropic level. Given E and K for an ecosystem, find the maximum length of foodchain.

Note: ⌊x⌋ denoted the floor function, and it returns the greatest integer that is less than or equal to x (i.e rounds down to the nearest integer). 
For example, ⌊1.4⌋=1, ⌊5⌋=5, ⌊−1.5⌋=−2, ⌊−3⌋=−3 , ⌊0⌋=0.
Sample Input
3
5 3
6 7
10 2

*/

#include <iostream>
#include <math.h>
using namespace std;

int main(void) 
{
	int i, n, E, K;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		int count=0;
		cin >> E >> K;
		while(E!=0)
		{
			count++;
			E = floor(E/K);
		}
		cout<< count << "\n";
	}
	
	return 0;
}
