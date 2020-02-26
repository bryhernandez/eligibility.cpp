#include <iostream>
#include <string>
using namespace std;

struct Student{
  string name;
  string college;
  string bday;
  int courses;
};

int main() {
  Student cases[1000];
  int numCases;
  cin >> numCases;


  for(int i = 0; i < numCases; i++){
    cin >> cases[i].name >> cases[i].college >> cases[i].bday;
    cin >> cases[i].courses;

    cout << cases[i].name << " ";

    if(cases[i].college >= "2010/00/00"){
      cout << "eligible" << endl;
      continue;
    }
      
    if(cases[i].bday >= "1991/00/00"){
      cout << "eligible" << endl;
      continue;
    }
  
    if(cases[i].courses > 40){
      cout << "ineligible" << endl;
      continue;
    }

    cout << "coach petitions" << endl;
      
  }

  
    
}
