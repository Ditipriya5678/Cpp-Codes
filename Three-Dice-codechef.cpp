//Three Dice
/*There are three people, and each of them has an unbiased 6-sided die. The result of rolling a die will be a number between 1 and 6 (inclusive) with equal probability.

The three people throw their dice simultaneously. In this game, the third person wins only if his number is strictly greater than the sum of the other two numbers.
Given that the first person rolls the value X and the second person rolls the value Y, what is the probability the third person will win?

Sample Input
3
1 3
2 4
2 3
*/
#include <iostream>
using namespace std;

int main(void) 
{
	int i, n;
	float x, y;
	int sum;
	float res;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cin >> x >> y;
		sum = (x+y);
		if(sum<6)
		{
			res= float(float(6 - sum)/float(6));
		}
		else
		{
			res=0;
		}
		cout << res << "\n";
		
	}
	
	return 0;
}

