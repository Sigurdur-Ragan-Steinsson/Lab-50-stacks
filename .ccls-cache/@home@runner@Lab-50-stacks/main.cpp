#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
stack<char> nStack;
string zipCode;
cout << "Please enter your zip code" << endl;
getline(cin, zipCode);
for(int i = 0; i < zipCode.length(); i++)
  {
    cout << zipCode[i] << endl;
    nStack.push(zipCode[i]);
  }
while(nStack.empty() != true)
  {
    cout << nStack.top() << endl;
    nStack.pop();
  }
  cout << "\n" << endl;

  
return EXIT_SUCCESS;
}