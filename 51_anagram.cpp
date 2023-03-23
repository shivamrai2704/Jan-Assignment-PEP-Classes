//string in anagram
#include <iostream>
#include <string.h> 
using namespace std;

int main(){
  string str1,str2;
  char temp;
  cout << "Enter string 1\n";
  getline(cin, str1);
  cout<<"enter string 2\n";
  getline(cin, str2);
  int len1 = str1.length();
  int len2=str2.length();
  
  for (int i = 0; i < len1; i++){

    for (int j = 0; j < len1 - 1; j++){
      if (str1[j] > str1[j + 1]){ 

        temp = str1[j];
        str1[j] = str1[j + 1];
        str1[j + 1] = temp;
      }
    }
  }
	
	for (int i = 0; i < len2; i++){

    for (int j = 0; j < len2 - 1; j++){
      if (str2[j] > str2[j + 1]){ 

        temp = str2[j];
        str2[j] = str2[j + 1];
        str2[j + 1] = temp;
      }
    }
  }
  cout << "\n String after sorting: " << str1 << " \n";
  cout << "\n String after sorting: " << str2 << " \n";
  
  int result=(str1.compare(str2));
  if(result==0)
  {
  	cout<<"\nthe strings are in anagram\n";
  }
  else
  {
  	cout<<"the strings are not in anagram\n";
  }
  return 0;
}
