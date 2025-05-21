#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
   int s = 1;
   int answer = -1;
   int ans_a1, ans_a2, ans_a3, ans_a4;
   int ans_b1, ans_b2, ans_b3, ans_b4;
   int ans_num;
   int tempa, tempb, temp;
   int b1, b2, b3, b4;
   
   for (int a1 = 7; a1 >= 0; a1--) {
	   for (int a2 = 7;a2 >= 0; a2--) {
		   for (int a3 = 7; a3 >= 0; a3--) {
			   for (int a4 = 7;a4 >= 0; a4--) {
				   cout << "Num." << s << ":   ";
				   b1 = 7 - a1;
				   b2 = 7 - a2;
				   b3 = 7 - a3;
				   b4 = 7 - a4;
				   tempa = 80 * a1 + 90 * a2 + 70 * a3 + 60 * a4;
				   tempb = 100 * b1 + 120 * b2 + 110 * b3 + 70 * b4;
				   cout << "A=";
				   cout << std::left << setw(5) << tempa;
				   cout << "   " << "B=";
				   cout << std::left << setw(5) << tempb;
				   cout << "   ";
				   if (tempa > tempb) {
					   temp = tempb;
				   }
				   else {
					   temp = tempa;
				   }
				   cout << "finally:" << temp << endl;
				   if (answer <= temp) {
                       answer = temp;
					   ans_a1 = a1;
					   ans_a2 = a2;
					   ans_a3 = a3;
					   ans_a4 = a4;
                       ans_b1 = b1;
					   ans_b2 = b2;
					   ans_b3 = b3;
					   ans_b4 = b4;
					   ans_num = s;
				   }
				   s++;
			   }
		   }
	   }
   }

   cout << endl << endl << endl << "Answer:" << endl << "Num." << ans_num << endl;
   cout << "      Machine1     Machine2     Machine3     MAchine4" << endl;
   cout << "A     " << ans_a1 << "            " << ans_a2 << "            " << ans_a3 << "            " << ans_a4 << endl;
   cout << "B     " << ans_b1 << "            " << ans_b2 << "            " << ans_b3 << "            " << ans_b4 << endl;
   cout << "Max: " << answer << endl;
   return 0;
}