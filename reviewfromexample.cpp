
another thing to study from if you like quizlet

(https://quizlet.com/650108389/cs1b-final-practice-exam-flash-cards/)
                        thanks maria!


good luck on the exam !     :^) 

// Q:	What is the difference between object oriented programming and 
//		procedural programming? What are the benefits of using object
//		oriented programming for maintenance and development?

object oriented programming introduces classes and objects that combine
data and code that operates on them. the uses of classes
and objects allows for more modularized code that adds simplicity
to maintenance and development

// Q: What is the difference between public and private member functions?
// 

public members may be accessed outside the class,
private members may only be accessed within the class

// Q: Why do we need private members and public members?
//

With private and public, we can make certain variables read-only,
and through the use of public functions we can make the variable
modifiable.

or

We can limit accessibility which is useful in a large scale system.
Reduces "spaghetti code."

// Q: For the class definition below, add one private member
//	  and one public member function that can access the private
//	  variable.
//
//
//		class myclass {
//		public:
ANS:		void setData(int d) { data = d; }
//		private:
ANS:		int data;
//		}
//

// Q: Define pointer.

Pointer is a variable that holds a memory address.

or

Pointer is a variable that holds memory address to a memory location.

// Q: What is the purpose of pointer?

Pointers allow us to modify or manipulate variables or using memory address
through operations of reference and dereference. It can also allow us
to manipulate several memory locations because the memory address
that is stored by the pointer can be changed.

or

With operations of reference and dereference, a pointer can be used to
access and modify the value stored in this memory location.
A pointer can be used to sequentially manipulate several locations because
the memory address stored by the pointer can be changed.

// Q: Given the following code, explain what each line does and what
//	  the last line's output is.

int* p, a[10], i = 5; // declares a pointer, an array and a scalar variable
p = &i;   // pointer holds the address of variable "i"
++(*p);  // increments the value of variable pointed to by p (to 6)
          // i is now 6
a[0] = *p; // stores the value pointed to by p in the first element of array "a"
           // so a[0] is now 6
            // similar to a[0] = i;
p = a;	// p stores the address of the first element of the array "a"
cout << p[0]; // outputs the value of the first element of the array
         // output is 6

// Q: The following class defintion uses a pointer attribute to
//    store a dynamically allocated array.
//
//  class myclass {
//  public:
//      myclass(int s) { size = s; a = new int[size]; }
//  private:
//      int size;
//      int* a;
//  };
//
//    What is the purpose of overloaded assignment? Additionally,
//    implement overloaded assignment (add a prototype and definition).
//    Make sure to protect from self-assignment and allow stackability.

Overloaded assignment is used to implement the correct operation of
assignment for objects with dynamically allocated member variables.

prototype: myclass& operator=(const myclass& rhs);

definition:
        
    myclass& myclass::operator=(const myclass& rhs) {
        if (this != &rhs) { // self assignment protection
            delete [] a;
            size = rhs.size;
            a = new int[size];
            for (size_t i = 0; i < size; ++i) {
                a[i] = rhs.a[i];
            }
        }
        return *this; // ensures stackability
    }

// Q: What is the difference between vectors and (raw) arrays.

Unlike raw arrays, vectors can make its size accessible through
a member function. They can be passed by value and returned from a function.
Their size can be changed. Elements can be added to the end and middle of
the vector.

or 

Vectors are dynamic arrays. Vectors can access and modify their size through
a member function, they can be passed by value and returned from a function.
Elements can be added to the end and middle of the vector.

// Q: What is an iterator?

Iterator is a way to access elements in a vector. It is related to pointers.
Its primary purpose is to insert and erase elements in the middle of a vector.

// Q: Given this vector definition:

        vector<int> v;

//    Write code that uses an iterator to insert an element into this vector
//    and remove an element from this vector.

        vector<int>::iterator it = v.begin(); 
        v.insert(it, 69);
        v.erase(v.begin());

// Q: Given this code inside main():

        const int SIZE = 100;
        int arr[SIZE][SIZE];

//    give a definition of a function that accepts this array as a
//    parameter and returns the max element as a return value.

        int maxFind(int arr[][100], int size) {// you can not put size in first []
            int max = arr[0][0];
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    if (max < arr[i][j]) {
                        max = arr[i][j];
                    }
                }
            }
            return max;
        }

// Q: Define recursion.

Recursive function definition contains the invocation of the same function

// Q: Compare recursion with iteration.

Every task that has a recursive solution also has an iterative solution.
Recursive soltuion tends to be more elegant. Iterative solution may
be less easy to understand since the parameters of the problem
have to be explicitly maintained.

// Q: Give an example of a recursive function definition and an example
//    of iteration by rewriting your recursive function.

recursive: 

    int sum(int arr[], int size, int index){
        if(index < size){
            return array[index] + sum(array, size, index + 1);
        }
        else {
            return 0;
        }
    }

iterative solution:

    int sum = 0;
    for(int index = 0; index < size; ++index){
        sum += array[index];
    }

// Q: What is the need for namespaces?

Namespaces are a mechanism to break up global scope and minimize
name collision.

// Q: Define 3 styles of implementing names from a namespace and
//    display some advantages and disadvantages of each.

1. Explicitly resolving scope.

    myNamespace::myfunc();

    pros: no possibility of name collision, clearly states 
    what namespace it is from

    cons: code becomes sparse

2. importing a particular namespace.

    using myNamespace::myfunc;
    myfunc();

    pros: more terse, greater possibility of name collision
    
    cons: have to state using-statement for each imported name

3. importing all names from a namespace

    using namespace myNamespace;
    myfunc();

    pros: most terse

    cons: greatest possibility of name collision

// Q: Why is importing all names from a namespace in a header file
//    considered bad style?

Importing all anmes in a header file is poor style because
this happens without knowledge of the programmer that includes
that header file.

// Q: What is the need for UML diagrams in programming?

UML diagrams are used for code documentation and development.
Pictures in diagrams make it easy to see the structure and
operation of the code.

// Q: What is the difference between class and object diagrams?

Class diagram is static relationships between classes.
Object diagram shows relationship between specific objects
during the program execution. 

// Q: Give examples of use-case and state diagrams.

Objects contain state which is shown on object diagram. 
Also, as object state changes during program execution,
there may be several different object diagrams.

or 

State captures the evolution of an objects state.
Use case diagrams capture interactions between outside
entities and the system in different situations.
