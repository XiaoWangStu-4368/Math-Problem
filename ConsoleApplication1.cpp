#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
   int s = 1;
   int answer = -1;
   int tempa, tempb, temp;
   int b1, b2, b3, b4;
   
   for (int a1 = 7; a1 >= 0; a1--) {
	   for (int a2 = 7;a2 >= 0; a2--) {
		   for (int a3 = 7; a3 >= 0; a3--) {
			   for (int a4 = 7;a4 >= 0;a4--) {
				   cout << "Num." << s << ": ";
				   b1 = 7 - a1;
				   b2 = 7 - a2;
				   b3 = 7 - a3;
				   b4 = 7 - a4;
				   tempa = 80 * a1 + 90 * a2 + 70 * a3 + 60 * a4;
				   tempb = 100 * b1 + 120 * b2 + 110 * b3 + 70 * b4;
				   cout << "A=" << tempa << "   " << "B=" << tempb << "   ";
				   if (tempa > tempb) {temp = tempb;}
				   else if (tempa == tempb) {temp = tempa;}
				   else {temp = tempa;}
				   cout << "finally:" << temp << "   ";
				   if (answer <= temp) { answer = temp; }
				   cout <<"answer=" << answer << endl;
				   s++;
			   }
		   }
	   }
   }
   return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单