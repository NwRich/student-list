/*Nicholas Rich
Date 10/13/2017
A program that allows the user to create and manage a student list 
*/
#include <iostream>
#include <cstring>
#include <vector>
struct student {//creating the struct for the student
  char fName[20];//students first name
  char lName[20];//students last name
  int id;//students id
  float gpa;//students gpa
};
using namespace std;
void add(vector <student*> &list); //creating the add method
void remove(vector <student*> &list); //creating the remove method
void listing(vector <student*> &list); //creating the list method
int main() {
  bool working = true; //used for the while loop
  char h[20]; //used to select a method
  vector <student*> list; //creating the vector of students
  while (working = true) { //while you are using the program
    cout << "add? remove? list? or quit?" << endl; //asking for an input
    cin >> h;//writing to h
    if (strcmp(h, "add") == 0) { //if the input is add
      add(list); //call the add method passing in the list
    }
    if (strcmp(h, "remove") == 0) {//if the input is remove
      remove(list);//call the remove method passing in the list
    }
    if (strcmp(h, "list") == 0) {//if the input is list
      listing(list);//call the listing method passing in the list
    }
    if (strcmp(h, "quit") == 0) {//if the input is quit
      return 0;//quit the program
    }
  }
  return 0;//quit if you ever exit the while loop
}

void add(vector <student*> &list) {
  student* n = new student;//creating a new pointer to a student
  cout << "Put in the students first name" << endl;//promts the user
  cin >> n->fName;//adding the name to the student
  cout << "Put in the students last name" << endl;//promts the user
  cin >> n->lName;//adding the last name to the student
  cout << "Put in the students id" << endl;//promts the user
  cin >> n->id;//adding the id to the student
  cout << "Put in the students gpa" << endl;//promts the user
  cin >> n->gpa;//add the gpa to the student
  list.push_back(n);//puts the student to the end of the list
}
void remove(vector <student*> &list) {
  cout << "input a student id to terminate" << endl;//promts the user
  int i = 0;//used to hold the input
  cin >> i;//writing the student id to i
  for (vector<student*>::iterator it = list.begin(); it != list.end(); it++) { //going through the vector
    if ((*it)->id == i) {//if the id in the vector is equal to the id inputed
      delete list[it - list.begin()];//remove the student
      list.erase(it);//remove the student from the list
      break;//exit the for loop
    }
  }
}

void listing(vector<student*> &list) {
  for (vector<student*>::iterator it = list.begin(); it != list.end();it++) {//going through the vector
    cout << (*it)->fName << ' ';//listing the students first name
    cout << (*it)->lName << " id:";//listing the students last name
    cout << (*it)->id << " gpa:";//listing the students id
    cout << (*it)->gpa << endl;//listing the students gpa
  }
}
# student-list
# student-list
# suden-list
