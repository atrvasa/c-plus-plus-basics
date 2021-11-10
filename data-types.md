## Basic C++ Data Types


| Type            | Keyword     |
| :---            |    :----:   |
| Boolean         | bool        |
| Character       | char        |
| Integer         | int         |
| Floating point  | float       |
| Double floating | double      |
| Valueless       | void        |
| Wide character  | wchar_t     |

Several of the basic types can be modified using one or more of these type modifiers:
- signed
- unsigned
- short
- long

The variable type, takes memory, and maximum and minimum value:


| Type                    | Size    | Range     |
| :---                    |:----    |:----                        |
| char                    | 1byte   | -127 to 127 or 0 to 255|
| unsigned char           | 1byte   | 0 to 255|
| signed char             | 1byte   | -127 to 127|
| int                     | 4bytes  | -2147483648 to 2147483647|
| unsigned int            | 4bytes  | 0 to 4294967295|
| signed int              | 4bytes  | -2147483648 to 2147483647|
| short int               | 2bytes  | -32768 to 32767|
| unsigned short int      | 2bytes  | 0 to 65,535|
| signed short int        | 2bytes  | -32768 to 32767|
| long int                | 8bytes  | -2,147,483,648 to 2,147,483,647 |
| unsigned long int       | 8bytes  | -2,147,483,648 to 2,147,483,647 |
| signed long int         | 8bytes  | 0 to 4,294,967,295              |
| long long int           | 8bytes  | -(2^63) to (2^63)-1             |
| unsigned long long int  | 8bytes  | 0 to 18,446,744,073,709,551,615 |
| float                   | 4bytes  ||
| double                  | 8bytes  ||
| long double             | 12bytes ||
| wchar_t                 | bytes   ||

### Example of data types:

```C++
#include <iostream>
using namespace std;

int main() {
   cout << "char's size : " << sizeof(char) << endl;
   cout << "int's size : " << sizeof(int) << endl;
   cout << "short int's size : " << sizeof(short int) << endl;
   cout << "long int's size : " << sizeof(long int) << endl;
   cout << "float's size : " << sizeof(float) << endl;
   cout << "double's size : " << sizeof(double) << endl;
   cout << "wchar_t's size : " << sizeof(wchar_t) << endl;
   
   return 0;
}
```
## typedef Declarations

To create a new name for an existing type you must using typedef:

```C++
typedef type <newname>; 
```

For example, gram is another name for int:

```C++
typedef int gram;
```

Now, creates an integer variable called weight:

```C++
gram weight;
```

## Enumerated Types

Enumerated type declares an optional type name and a set of zero or more identifiers. Each enumerator is a constant whose type is the enumeration.

For create an enumeration use the 'enum' keyword:

```
enum enum-name { names } [variables]; 
```
 - enum-name: Type name of enumeration. 
 - names: list of names that separated with comma.

### For example:

Define an enumeration of systems of units called UnitSystems and the variable u of type systems of units. Finally, u assign to "Metric".

```C++
enum UnitSystems { Traditional, Metric, Natural } u;
u = Metric;
```

By default, the value of the first name is 0, the second value is 1, and so on. But you can give a specific value to name by adding an initiator:

```C++
enum UnitSystems { Traditional, Metric = 9, Natural };
```

Natural's value is 10.