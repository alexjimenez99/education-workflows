
//----------------DAY 1: Getting Started---------------------//

#include <iostream>
#include <string>
using namespace std;
// main function required for all c++ programs to run

/ int main() {
	cout << "Hello World" << "the world is back";
	return 0; // indicates that function ran without errors (bool)
}

/*
multi-line comment syntax
*/

// << = Insertion operator

//----- New lines-----
cout << 'Hello World\n' ;


/* Creating Variables
1. Data Type
2. Variable Name
3. Variable Value
type name = value ; initialize name to vlaue
*/
char letter;
int number = 21; // Variable initialization
number     = 18;   // Variable Reassignment

// // Multiple Variable Defintions
int a = 1, b = 2, c = 3;

// // Constant Variables
// const double pi  =3.14 ; // Variable can't be overriden

// C++ Input: 

int main() {// 	int x;
	std::cin >> x;
	return 0;
}


/* --------- C++ Data Types -----------
1. Int -->  
----------Requires 4 Bytes of Memory
2. Double --> Python Float Equivalent
----------Required 8 Bytes of Memory
3. Char --> single characters 'a' or '$' 
4. String --> Python String 
5. bool  ---> True, False
*/ 

// Type conversion
// Converting a double to an int
double a = 3.5;
int b    = (int) a;        // b is now 3
 
// // Converting an int to a double
int c    = 5;
double d = (double) c; // d is now 5./------ String Methods --------//

// string string_one = "what it do ";
// string string_two = "what does it dooooo";
// string combined   = string_one + string_two;
// int main() {
// 	cout << combined;
// 	return 0;
// }


//--------------- DAY 2: 12 Mar 2023 -----------//
// Arithmetic Operators

int x = 5;
int y = 6; 
int expression = x + y ; // add
int expression = x * y ; // multiply
int expression = x - y ; // subtraction
int expression = x /y  ; // division
int expression = x % y ; // modulus
int expression = ++x   ; // Increment x, then return x
int expression = --x   ; // Decrement x, then return x
int expression = x++   ; // copy, then increment, then return copy (expression)
int expression = x--   ; // copy, then decrement, then return copy (expression)


int main() {
	expression += x ; // shortcut operators same as python
	cout << expression << x;
	return 0;
}

// ------ Logical Operators  //
// x && y ---- AND operator
// x || y ----- OR operator
// !x    ----- NOT operator


//------ Bitwise Operators //
// << : left shift
// >> : right shift
// ~  ; NOT bitwise
// &  ; AND bitwise
// |  ; OR bitwise
// ^  ; XOR 

// ----- Relational Operators
// ==, != --- All Identical to Python


// ------ Reference Variables 
// Used for functions (c++ works differently)
int x = 5 ; 
int& number = x ; 

// ------- Memory Address ------- //
// Print the memory address of message (0x7ffee9b21af0)
// std::cout << &message << std::endl;

// ----- Pointers ----/
int *ptr = &x ;
*ptr     = 34;

std::cout << ptr << std::endl; // Returns memory loc of ptr
std::cout << *ptr << std::endl; // returns value of ptr

int* ptr  = nullptr; // settitng pointer to null (best practice to assing a value to pointers alwaus)


// ------ Conditional Statements --------- //
// Syntax for If-else statement below
if (condition) {

}
else if (condition_2){

}
else {

} ;

// shorthand if else
variable = (condition)? condition_is_true: condition_is_false

// switch statements (faster atlernatives for if-else)
switch (grade) {
  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
  case 11:
    std::cout << "Junior\n";
    break;
  case 12:
    std::cout << "Senior\n";
    break;
  default:
    std::cout << "Invalid\n";
    break;
}

// ----------- DAY 3 -------------- //
// --- While Loops --- //
int count = 1;
while (count < 5) {
  std::cout << cout ; 
  count++; 
}


// for loops 
for (int i = 1; i < 9, i++) {
	cout << "This is " << i << endl ; 
}

// for-each 
int fibonacci[5] = {0, 1, 1, 2, 3};
for (int number : fibonacci) {
  std::cout << number;
}

// auto keyword -----  variable type takes on variable type of value in the array within fibonacci (cleaner for sure)
int fibonacci[5] = {0, 1, 1, 2, 3};
for (auto number : fibonacci) {
  std::cout << number;
}

// Break keyword ---- early termination

for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  std::cout << i;
}

// continue keyword --- skips to next iteration
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  std::cout << i;
}


// Module 2: LAB //


#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main () {

  string entry ; 
  cout << "choose rock, paper, or scissors: " ; 
  cin >> entry;
  string accepted_entries[3] = {"rock",   
  "paper", "scissors"} ; 

  for (auto accepted : accepted_entries){
    if (entry == accepted) {
      cout << "valid entry: " << entry << endl;
      break ;
    }
    else if ((accepted == "scissors") && (entry != "scissors")){
      cout << "Invalid Entry" << endl;
      break ; 
    } 
    
    cout << accepted << endl; 
  } ; 

  srand( time(NULL) ) ;
  string computer_choice;
  int index_choice = rand() % 5 ; 
  computer_choice = accepted_entries
  [index_choice] ; 
  cout << "computer_choice: " << computer_choice << endl ; 
 
  bool s1 = ((computer_choice == "scissors") && (entry == "rock")); 
  bool s2 = ((computer_choice == "rock") && (entry == "paper")) ; 
  bool s3 = ((computer_choice == "paper") && (entry == "scissors")) ; 

  bool s4 = (computer_choice == entry) ;
  bool s5 =  ((computer_choice == "scissors") && (entry == "paper")) ;
  bool s6 = ((computer_choice == "rock") && (entry == "scissors")) ; 

  if (s1){
    cout << "Player Won"<< endl; 
  }
  else if (s2) {
    cout << "Player Won" << endl;
   
  }  
  
  else if (s3) {
    cout << "Player Won" << endl;
   
  }
  else if (s4){
    cout << "tied" << endl ;  
  }
  else if (s5){
    cout << "Computer won" << endl;
  }

  else if (s6){
    cout << "Computer won" << endl;
  }
  
  cout << "Game Terminated" << endl; 
  return 0;


/* ----- DAY 3: Functions ---- */

void doSomething() {    // Declaration
  std::cout << "Functions are great!\n";    // Definition
} 

// void --- Indicates function doesn't return value
// doSomething(parameter_list) ---- identical to python

// Return type ---- must match return statement variable type
int function(){
  return 1
}

string function(){
  return "hello"
}
bool function(){
  return False
}

// parameters and arguments

int feetToInches(int ft) {
  return ft * 12;
}
 
int main() {
  std::cout << feetToInches(6);    // Prints: 72
}


/* Pass by reference:  
the variables first and second get reassigned to the values of i and j within swap, despite no explicit assignment operator for first and second | implicitly assigning variables */
void swap(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}

int main() {
  int first = 10;
  int second = 20;
 
  std::cout << "Before swap: " << first << " " << second << "\n";
 
  // Call the function and swap the values of first and second
  swap(first, second);
 
  std::cout << "After swap: " << first << " " << second << "\n";
}


// ---- Function Overloading ------
// allows mutliple functions to have the same name as long as their parameters differ

// Adds two int values
int add(int a, int b) {
  return a + b;
}
 
// Adds two double values
double add(double a, double b) {
  return a + b;
}

//differentiating overloaded functions
// different number or types of parametrs

int add(int a, int b) {
  return a + b;
}

int add(int a, int b, int c) {
  return a + b + c;
}


// ------------------- Module 3 : LAB --------------------//
#include <iostream>
using namespace std;

string intro_message = "You are a heroic mcLovin on his way to purchase alcohol at your local liquor store for your friday night bash. You step into the store and are presented with three choice: beer, hard liquor, or wine. What's your choice? " ; 

string message_two = "Ahh shit McLovin, the feds just pulled up. Ditch the booze, or raw dog it and make it look like your fully confident? 0 for ditch booze, 1 for raw dog" ; 

bool evaluate_choice(string choice) {
  string valid_entry[3] = {"beer", "hard liquor", "wine"} ; 
  for (string entry : valid_entry){
    if (choice == entry) { 
      return true ; 
      break;
    }
    else {
      return false; 
    }    
  } 
}

int main() {
  string alc_choice;
  cout << "Welcome to SuperBad Simulator" << endl;
  cout << intro_message << endl;
  cin >> alc_choice;
  auto choice = evaluate_choice(alc_choice) ; 
  if (choice == 0){
    cout << "invalid entry" << endl;
    exit(EXIT_SUCCESS);
  }
  cout << message_two << endl;
  return 0; 
}


//------------- Section 4: OOP Classes and Objects ------------//

// class

class School {

} ; // semi colon required

// ------EXAMPLE-----''
class School {
// we'll explain 'public' later
public:
  std::string name;
  int age;
 
  void banner() {
    std::cout << name << " is " << age << " years old.\n";
  }

  
};
// public allows variable accession outside of School Class


//------------- Defining Methods-----------//
// class school with method banner()
void School::banner() {
  std::cout << name << " is " << age << " years old.\n";
};


//--------------- Object Creation-------------//
School codecademy; // class school object instance codeacademy

codeacademy.name = "new_name" // setting attribute values
codeacademy.banner()          // calling methods




//-- Access Specifiers ------ //

// by default, variabl declaration in classes is private, meaning no outside functions or scripts can assess or set that variable

// bad example
class Student {
  std::string name; 
};
 
int main() {
  Student clara; 
  clara.name = "Clara";    // Not allowed, name is private
  return 0;
}

// good example
class Festival {
public:
  int firework;
};
 
int main() {
  Festival christmas;
  christmas.firework = 100;    // Allowed because firework is public
}

// ------- Accessor and Mutator Functions --------
// Python getter and setter

class Clock {
private:
  int time = 1200;
 
public:
  // Accessor function for time
  int getTime() {
    return time;
  }
};
 
int main() {
  Clock alarm;
  std::cout << alarm.getTime();    // Output: 1200
}


class Clock {
private:
  int time = 1200;
 
public:
  // Accessor function for time
  int getTime() {
    return time;
  }
 
  // Mutator function for time
  void setTime(int new_time) {
    time = new_time;
  }
};
 
int main() {
  Clock alarm;
  alarm.setTime(930);
  std::cout << alarm.getTime();    // Output: 930
}


// Constructors (__init__) in python

class House {
private:
  std::string location;
  int rooms;
 
public:
  // Default constructor
  House() {
    location = "New York";
    rooms = 5;
  }
 
  // Constructor with parameters
  House(std::string loc, int num) {
    location = loc;
    rooms = num;
  }
 
  void summary() {
    std::cout << location << " house with " << rooms << " rooms.\n";
  }
};

House blue_house('boston', 3) ; 


 // --------- Initiation ----------- //
 class Book {
private:
  const std::string title;
  const int pages;
public:
  Book() 
    : title("Diary"), pages(100) {}    // Member initializer list
};

// Destructor: Called when an instance of a class id destroyed... last row in this example
class House {
private:
  std::string location;
  int rooms;
 
public:
  // Constructor with default parameters
  House(std::string loc = "New York", int num = 5) {
    location = loc;
    rooms    = num;
  }
 
  void summary() {
    std::cout << location << " house with " << rooms << " rooms.\n";
  }
 
  // Destructor
  ~House() {
    std::cout << "Moved away from " << location;
  }
};

// ----------INHERITANCE----------------- //

// Base class
class Animal {
public:
  std::string gender;
  int age;
};
 
// Derived class
class Dog: public Animal  { // Inheritance Syntax in C++
public:
  std::string breed;
 
  void sound() {
    std::cout << "Woof\n";
  }
};
 
int main() {
  Dog buddy;
  buddy.gender = "male";
  buddy.age    = 8;
  buddy.breed  = "husky";
 
  buddy.sound(); // Outputs: Woof
 
  return 0;
}


// ---------------- POLYMORPHISM ------------------ //
// classes that inherit have same method name, but it overrides the parent class method with the child class method
#include <iostream>
#include <cctype>
using namespace std;

class Profile {
private:
  string name, city, country, pronouns, hobbies;
  int age ; 

public: 
    Profile(string name = "bob", int age = 21, string city = "New York", string country = "United States", string pronouns = "He/Him", string hobbies = "Banjo") {
      cout << "hi " << name << " your profile has been created" << endl;
      name     = name    ; 
      age      = age     ;
      city     = city    ;
      country  = country ;
      pronouns = pronouns;
      hobbies  = hobbies ;
    }
    
void view_profile() {
  cout << "name: "      << name     << endl;
  cout << "age: "       << age      << endl;
  cout << "city: "      << city     << endl;
  cout << "country: "   << country  << endl;
  cout << "pronouns: "  << pronouns << endl;
  cout << "hobbies: "   << hobbies  << endl;
  } 

}; 

class prompt {

public: 
string name           ; 
int   age             ;
string city           ;
string country        ; 
string pronouns       ; 
string hobbies        ;

  prompt(){
    string intro = "Welcome to Speed Dating. You must first initialize your profile. What's your name?: "      ; 
    cout << intro         ;
    cin  >> name          ;
    cout << "What's your age?: "            ;
    cin >> age            ;
    cout << "What city do you live in ?: "  ; 
    cin >> city           ; 
    cout << "What's your country do you live in?: " ; 
    cin >> country        ; 
    cout << "What are your pronouns?: "     ; 
    cin  >> pronouns      ; 
    cout << "What are your hobbies?: "      ; 
    cin >> hobbies        ; 
  }
} ; 

int main() {
  char next_prompt   ;
  string final_ans   ;
  prompt start       ; 
  Profile account(start.name, start.age, start.city, start.country, start.pronouns, start.hobbies); 

  cout << "would you like to view your profile? Enter Y for yes, and N for no: " ; 
  cin >>  next_prompt                ; 
  next_prompt = toupper(next_prompt) ; 
  final_ans  += next_prompt          ; 
  cout << final_ans << endl          ;  
  
  if (final_ans == "Y"){
    account.view_profile() ; 
  } 
  else if (final_ans == "N") {
    cout << " Account Will Not Be Shown" ; 
  }
  
  return 0  ; 
}


// ---------- MODULE 5: C++ Built in  Data Structures ---------- //

// arrays
char grade[5] = {'A', 'B', 'C', 'D', 'F'};
char grade[] = {'A', 'B', 'C', 'D', 'F'}; // both work

std::cout << grade[0];    // Outputs: A

// two dimensional arrays
int table[3][5] = {
  {0, 1, 2, 3, 4} ,      /* initializers for first row */
  {5, 6, 7, 8, 9} ,      /* initializers for second row */
  {10, 11, 12, 13, 14}   /* initializers for third row */
};


// VECTORS
// allows for pythonic dynamic changing of variables... arrays are immutable and can't be changed

#include <vector>

std::vector<int> weights;
weights.push_back(25);
weights.push_back(45);
 
// weights contains {25, 45}
weight.pop_back() // removes last element of vector
// weight contains {25}


// methods of vectors (continued)

alphabet.front(); // returns first element of vector
alphabet.back() ; // returns last element of vector
colors.size()   ; // returns # of elements in vector "size"
colors.empty()  ; // returns boolean of if the vector is empty


// STACKS and QUEUES

#include <stack>

std::stack<int> plates;
plates.push(10);
plates.push(8);
plates.push(5);
std::cout << plates.top();    // Pulls top value of stack

// Queue
#include <queue>
std::queue<std::string> line;

line.push("Amy"); // add elements to a queue
line.push("Bella");
line.push("Chloe");
line.pop(); // removes the first element in the queue which is the oldest item (amy)
std::cout << line.front();    // Outputs: Bella
std::cout << line.back();    // Outputs: Chloe
primes.erase(3); // remove value 3 from queue

// Using .Count() to find where a queue has an item
std::unordered_set<int> primes({2, 3, 5, 7});
 
if (primes.count(4)) {
  std::cout << "4 is a prime";
}
else {
  std::cout << "4 is not a prime";
}

// Ordered vs. Unorders Sets (Compilation Speed is the Tradeoff)

std::unordered_set<int> unordered({4, 2, 7, 1, 3});
std::cout << "unordered_set: ";
for(int n: unordered) {
  std::cout << n << " ";
}
 
std::cout << "\n";
 
std::set<int> ordered({4, 2, 7, 1, 3});
std::cout << "set: ";
for(int n: ordered) {
  std::cout << n << " ";
}
 

 // ----- HASH MAPS ----//

#include <unordered_map>
#include <map>

// Declare an unordered map with string keys and integer values
std::unordered_map<std::string, int> country_codes;

std::unordered_map<std::string, int> country_codes( 
{{"India", 91}, 
{"Italy", 39}}); // initailize a hash map (Python Dictionary)

 
country_codes.insert({"Thailand", 66});
country_codes.insert({"Peru", 51}); // insert values

// count method looking for "Belgium"
if (country_codes.count("Belgium")) {
  std::cout << "There is a code for Belgium";
}
 
size()     // size of dictionary
empty()    // boolean hash values

// iterate through hash map (Python Dictionary)

std::unordered_map<std::string, int> country_codes;
 
country_codes["Japan"]    = 81;
country_codes["Turkey"]   = 90;
country_codes["Pakistan"] = 92;
 
for(auto it: country_codes){
  std::cout << it.first << " " << it.second << "\n";
}


//-------------- Module 5 Lab: UFO Game ----------------//

#include <iostream>
#include "ufo_functions.hpp"
using namespace std;

void greet(){
  string message = "=============\nUFO: The Game\n=============\nInstructions: save your friend from alien abduction by guessing the letters in the codeword."    ; 
  cout << message ; 
}

int main() {
  int     misses   = 0 ; 
  string codeword  = "codeacademy";
  string answer  (codeword.size(), '_');
  greet() ; 

  while (misses < 7) {
    if (answer != codeword){
      misses++ ; 
    }

    cout << misses ; 
  }

}