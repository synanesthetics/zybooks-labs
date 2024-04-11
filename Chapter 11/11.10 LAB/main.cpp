// 11.10 All permutations of names

#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PrintAllPermutations(vector<string> &permList, vector<string> &nameList, int recurCount = 0) {
   string pick;

   /*
   cout << "#" << recurCount;
   for (int i = 0; i < permList.size(); i++) {
      cout << " " << permList.at(i);
   }
   cout << " |";
   for (int i =0; i < nameList.size(); i++) {
      cout << " " << nameList.at(i);
   }
   */

   if (nameList.size() <= 1) {
      for (int i = 0; i < permList.size(); i++) {
         cout << permList.at(i) << ", ";
      }
      cout << nameList.at(0) << endl;
   }
   else {
      for (int i = 0; i < nameList.size(); i++) {
         permList.push_back(nameList.at(i));
         nameList.erase(nameList.begin() + i);
         PrintAllPermutations(permList, nameList, recurCount + 1);
         nameList.insert(nameList.begin() + i, permList.at(permList.size() - 1));
         permList.pop_back();
      }
   }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;

   cin >> name;
   while (name != "-1") {
      nameList.push_back(name);
      cin >> name; 
   }

   PrintAllPermutations(permList, nameList);
   
   return 0;
}