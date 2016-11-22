/*Taum is planning to celebrate the birthday of his friend, Diksha. There are two types of gifts that Diksha wants from Taum: one is black and the other is white. To make her happy, Taum has to buy  number of black gifts and number of white gifts.

The cost of each black gift is  units.
The cost of every white gift is  units.
The cost of converting each black gift into white gift or vice versa is  units.
Help Taum by deducing the minimum amount he needs to spend on Diksha's gifts.

Input Format

The first line will contain an integer  which will be the number of test cases.
There will be  pairs of lines. The first line of each test case will contain the values of integers  and . Another line of each test case will contain the values of integers , , and .

Constraints 
 

Output Format

 lines, each containing an integer: the minimum amount of units Taum needs to spend on gifts.

Sample Input

5
10 10
1 1 1
5 9
2 3 4
3 6
9 1 1
7 7
4 2 1
3 3
1 9 2
Sample Output

20
37
12
35
12
Explanation

Sample Case #01: 
There is no benefit to converting the white gifts into black or the black gifts into white, so Taum will have to buy each gift for 1 unit. So cost of buying all gifts will be: .

Sample Case #02: 
Again, we can't decrease the cost of black or white gifts by converting colors. We will buy gifts at their original price. So cost of buying all gifts will be: .

Sample Case #03: 
We will buy white gifts at their original price, . For black gifts, we will first buy white one and color them to black, so that their cost will be reduced to . So cost of buying all gifts will be: .

Sample Case #04: 
Similarly, we will buy white gifts at their original price, . For black gifts, we will first buy white one and color them to black, so that their cost will be reduced to . So cost of buying all gifts will be: .

Sample Case #05: We will buy black gifts at their original price, . For white gifts, we will first black gifts worth unit and color them to white with another  units, so cost for white gifts is reduced to  units. So cost of buying all gifts will be: .
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int min(int x, int y)
{
	if (x<y)
		return x;
	else 
		return y;

}

int main(){
    int t;
    long long int ans; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long b; 
        long w; 
        scanf("%ld %ld",&b,&w);
        long x; 
        long y; 
        long z; 
        scanf("%ld %ld %ld",&x,&y,&z);

        ans = (b * min(x,y+z)) + (w * min(y,x+z));
        printf("%lld\n",ans);
    }
    return 0;

  
}

