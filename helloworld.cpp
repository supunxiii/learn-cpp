#include <iostream>
#include <string>
#include <cmath>
// template <typename T, typename U>

/*
namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
*/

/* typedef std::string supun_text_t; */
/* using supun_text_t = std::string; */


/*void happyBirthday(std::string name, int age){
    
    std::cout << "hello! what is your name? \n";
    std::getline (std::cin, name);

    std::cout << "happy birthday to you "<< '\n';
    std::cout << "happy birthday to you "<< '\n';
    std::cout << "happy birthday dear " << name << '\n';
    std::cout << "happy birthday to you "<< '\n';
    std::cout << "you are "<< age << " years old.";
}*/

/* 
double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}
*/

/*
void bakePizza();                   // having the same method signature but different in parameters
void bakePizza(std:: string topping_1);    // these lines should be here before the main method, because the compiler reads the program from top to bottom, that is why these method signatures should be declared before the main method. but the code that is inside each method can be configured later.
void bakePizza(std:: string topping_1, std:: string topping_2);
*/

/* double getTotal(double prices[], int size_of_array); */

/* int searchArray(int array[], int size_of_array, int element); */

/* void sort(int array[], int size); */

/* void swapValues(std::string &m, std::string &r); */

/* void walk(int steps); */

/*
auto max(T x, U y){  // to be able work this code un-comment line 4
    return(x > y) ? x:y;
}
*/

/*
struct student{
    std::string name;       // these variables in a struct are called as "members"
    double gpa;
    bool enrolled;          // with members we can even have default values as "enrolled = true;""
};
*/

/*
struct car{
    std::string model;
    int year;
    std::string color;
};

void printCar(car car);
*/


// enum Day { sunday = 0 , monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};


/*
class Human{        // declaring a Human class
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << name << " is eating\n";
        }
        void drink(){
            std::cout << name << " is drinking\n";
        }
        void sleep(){
            std::cout << name << " is sleeping\n";
        }
};
*/

/*
class Student{
    public:
        std::string name;
        int age;
        double gpa;
    
    Student(std::string name, int age, double gpa){      
        this->name = name;  // this-> have the same functionality as in java this. keyword
        this->age = age;
        this->gpa = gpa;

    }
};

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    Pizza(){

    }
    Pizza(std::string topping1){
        this->topping1 = topping1;

    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};
*/

/*
class Stove{
    private:
        int temperature = 0;
    public:
        int getTemperature (){          // this getter function can read the private attribute "temperature"
            return temperature;
        }

        void setTemperature(int temperature){       // this setter function can write into the private attribute "temperature"
            if(temperature < 0){
                this->temperature = 0;
            }
            else if(temperature >= 10){
                this->temperature = 10;
            }else{
                this->temperature = temperature;
            }
                     
        }
};
*/

/*
class Animal{
    public:
        bool alive = true;
        void eat(){
            std::cout << "animal is eating\n";

        }
};

class Dog: public Animal{       // Dog class is a sub class of Animal class which is the parent class
    public:
        void bark(){
            std::cout << "dog goes woof!\n";
        }
};

class Cat: public Animal{       // Cat class is a sub class of Animal class which is the parent class
    public:
        void meow(){
            std::cout << "cat goes meow!\n";
        }
};

class Shape{
    public:
        double area;
        double volume;
};

class Cube: public Shape{
    public:
        double side;
        Cube(double side){
            this->side = side;
            this->area = side*side*6;
            this->volume = side*side*side;
        }
};

class Sphere: public Shape{
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this->area = 4*3.14159*(radius*radius);
            this->volume = (4/3.0)*3.14159*(radius*radius*radius);
        }
};
*/


int main(){
    
    /*
    std::cout << "hello world!" << '\n';
    std::cout << "hi mandinee!" << '\n';
    return 0; 
    */
    
    /*
    int x;
    x = 6;
    std::cout << x << '\n';
    std::cout << "hi mandinee!" << '\n';
    return 0;
    */
    
    /* // integers
    int age = 26;
    std::cout << age;
    return 0; */

    /* // doubles
    double weight = 10.61;
    double temperature = 39.10;
    int height = 166.16;
    std::cout << weight << '\n';
    std::cout << temperature << '\n';
    std::cout << height << '\n';
    return 0; */

    /*
    // single characters
    char grade = 'A';
    char initial = 'S';
    char dollarSign = '$';
    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << dollarSign << '\n';
    return 0;
    */

    
    /*
    // strings
    std::string name = "Supun";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "Hi! My name is " << name << ". Nice to meet you!" << '\n';
    std::cout << "And my favorite food is " << food << "." << '\n';
    return 0;
    */
    

    /*
    // boolean 
    bool power = false;
    bool student = true;
    std::cout << "power on is " << power << '\n';
    std::cout << "he is a " << student << " student" << '\n';
    return 0;
    */
    
    /*
    // 'const' keyword specifies variable's value is a constant. these values are "read-only". cannot make any modifications to them.
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << " cm";
    return 0;
    */

    // usage of namespaces - need to create two or more different namespaces outside the main class so that the same variable could have multiple values. it prevents name conflicts. program allows identical entities as long as namespaces are different.

    /*
    using namespace first;
    std::cout << x;
    return 0;
    */

    /*
    std::cout << first::x;
    return 0;
    */
    
    /*
    using namespace second;
    std::cout << x;
    return 0;
    */

   /*
   // 'typedef' is a keyword used to create an additional name/an alias for another data type. this gets really handy when the data type is really long. un-comment line 13 and 107. however these days with the increase use of templates, instead of using keyword "typedef" it has become more popular to use "using" keyword which has the same functionality as "typedef". un-comment line 14.
    
    // std::string myName = "Supun";
    supun_text_t myName = "Supun";
    std::cout << myName << '\n';
    return 0;
    */

   /*
   // arithmetic operators
   
   // int apples = 3;
   // double deci_apple = 3;

   // apples = apples + 1;
   // apples += 1;
   // apples -= 1;
   // apples = apples * 2;
   // apples *= 2;
   // apples = apples / 2;
   // apples /= 2;
   // std::cout << apples << '\n';

   // int remainder = apples % 2;
   // std::cout << remainder << '\n';

   // deci_apple = deci_apple / 2;
   // std::cout << deci_apple << '\n';
   return 0;
   */
    
    /*
    // type conversions ---> 1. Implicit 2. Explicit
    // implicit data type conversions (automatic)
    int x = 3.14; // this is an example for Implicit data conversion as the value for x will be automatically truncated to 3 which is an integer.
    std::cout << x << '\n';

    double a = (int) 3.14; // this is an example for Explicit data type conversion as we have used (int) to explicitly convert it to an integer.
    std::cout << a << '\n';
    return 0;
    */

    /*
    // getting the user input
    std::string name;
    std::cout << "enter your name?" << '\n';
    std::cin >> name;
    std::cout << "hello " << name << '!' << '\n';
    
    std::string full_name;
    std::cout << "enter your full name?" << '\n'; 
    std::getline (std::cin, full_name);  // this (std::getline) is useful when getting an input which has spaces in it.
    std::cout << "hello " << full_name << '!' << '\n';
    return 0;
    */



    /*
    // useful math functions
    double x = 6;
    double y = 13;
    double r = 616.45;
    double z;

    // z = std::max(x, y); // finding the maximum value
    // z = std::min(x, y); // finding the minimum value
    // z = pow(x, y); // x to the 'pow'er of y
    // z = sqrt(9); // square root function
    // z = abs(-13); // absolute function
    // z = round(r); // round function
    // z = ceil(r); // round UP function
    // z = floor(r); // round DOWN function

    std::cout << z;
    return 0;
    */

    /*
    // hypotenuse calculator of a right angled triangle
    double a;
    double b;
    double c;
    std::cout << "enter a:" << '\n';
    std::cin >> a;
    std::cout << "enter b:" << '\n';
    std::cin >> b;
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    std::cout << "hypotenuse of the right triangle is: " << c << '\n';
    return 0;
    */


    /*
    // if-else statements
    int age;
    std::cout << "enter your age: " << '\n';
    std::cin >> age;

    if(age >= 18){
        std::cout << "you are eligble to vote!";
    }
    else if (age <= 0){
        std::cout << "enter a valid age";
    }
    else{
        std::cout << "you're not eligible to vote";
    }
    return 0;
    */


    /*
    // switches
    int month;
    std::cout << "enter the number of month (1-12): " << '\n';
    std::cin >> month;
    switch(month){
        case 1: 
            std::cout << "it's january" << '\n';
            break;
        case 2: 
            std::cout << "it's february" << '\n';
            break;
        case 3: 
            std::cout << "it's march" << '\n';
            break;
        case 4: 
            std::cout << "it's april" << '\n';
            break;
        case 5: 
            std::cout << "it's may" << '\n';
            break;
        case 6: 
            std::cout << "it's june" << '\n';
            break;
        case 7: 
            std::cout << "it's july" << '\n';
            break;
        case 8: 
            std::cout << "it's august" << '\n';
            break;
        case 9: 
            std::cout << "it's september" << '\n';
            break;
        case 10: 
            std::cout << "it's october" << '\n';
            break;
        case 11: 
            std::cout << "it's november" << '\n';
            break;
        case 12: 
            std::cout << "it's december" << '\n';
            break;    
        default:
            std::cout << "please only enter numbers from 1 to 12!" << '\n';
    }

    return 0;
    */



    /*
    // ternary operator
    int grade;
    std::cout << "enter your grade: " << '\n';
    std::cin >> grade;
    grade >= 75 ? std::cout << "you passed!" : std::cout << "try again!";  // condition ? expression 1 : expression 2;
    return 0;
    */


   /*
   // logical operators
   double temperature;
   std::string sunny;
   // std::cout << "enter the temperature: " << '\n';
   // std::cin >> temperature;

    
   if(temperature > 0 && temperature < 30){             // AND operator
       std::cout << "temperature is good!" << '\n';

   }else{
       std::cout << "temperature is bad!" << '\n';
   } 
   

    
    if(temperature <= 0 || temperature >= 30){          // OR operator
       std::cout << "temperature is bad!" << '\n';

    }else{
       std::cout << "temperature is good!" << '\n';
    }
   

    std::cout << "is it sunny outside (true/false)?" << '\n';
    std::cin >> sunny;
    if(sunny == "true"){                                // NOT operator
       std::cout << "it's sunny outside!\n";

    }
    else if(sunny != "true" && sunny != "false"){
       std::cout << "invalid input\n";
    }
    else{
       std::cout << "it's cloudy outside!\n";
    }
    return 0;
    */

    

    /*

    // some useful string methods

    std::string name;
    std::cout << "enter your full name: \n";
    std::getline(std::cin, name);

    
    if(name.length() >= 12){                         // length() function checks the number of characters in a string. size() function has the same functionality.
        std::cout << "cannot have more than 12 characters in a name. \n";

    }
    else{
        std::cout << "your name is short and sweet. \n";
    } 
    return 0;
    

    
    if (name.empty()){                               // function empty() checks if the string variable is empty or not.
        std::cout << "you didn't enter anything yet!";

    }else{
        std::cout << "hello " << name;
    }
    return 0;
      

   
    name.clear();
    std::cout << "hello " << name << "!";            // this should not contain a string value attached to it as clear() function clears what's in the string variable.
    return 0; 
    


    
    name.append("13@gmail.com");                     // this append() function appends additional string characters to an existing string variable
    std::cout << "your email address is " << name;
    return 0;  
    


    
    std::cout << name.at(0);                // at(index) returns the character of a particular index number passed to it as an argument
    return 0;  
    


    
    name.insert(0, "Hi ");                  // insert(index, " ") function appends additional string characters at a specific index
    std::cout << name;
    return 0;
    


    
    std::cout << name.find("g");            // find() function returns specific character's index
    return 0;
    

    
    name.erase(5, 29);                      // erase(starting_index, ending_index) function deletes specific string characters within the range of index numbers passed as arguments
    std::cout << "hi " << name << '!';
    return 0;
    
    */

    /*
    // while loops
    std::string name;

    while(name.empty()){                    // while loop has no 'end while' in C++
        std::cout << "enter your name: \n";
        std::getline(std::cin, name);

    }
    std::cout << "hi " << name <<'!';
    return 0;
    */


    /*
    // do while loops
    int positive_number;

    do{                    // do some block of code first, then repeat again if it is true
        std::cout << "enter a positive number: \n";
        std::cin >> positive_number;

    }while (positive_number < 0);
    std::cout << "the positive number you entered is: " << positive_number ;
    return 0;
    */


    /*
    // for loops
    for(int i=1; i<=13; i++){
        std::cout << "i is " << i << '\n';
    }
    return 0;

    for(int i=1; i<=30; i++){
        if(i==18){
            continue;                        // continue keyword skips the current iteration
        }
        std::cout << "i is " << i << '\n';
    }
    return 0;

    for(int i=1; i<=30; i++){
        if(i==18){
            break;                        // break keyword break out of an iteration
        }
        std::cout << "i is " << i << '\n';
    }
    return 0;
    */

    /*
    // nested loops

    for(int i = 1; i <= 6; i++){           // outer loop
        for(int j = 1; j <= 13; j++){      // inner loop
            std::cout << j << ' ';
            
        }std::cout << "\n" ;
    }
    return 0;
    */
    

    /*
    // functions : un-comment lines 19 to 29
    std::string name;
    int age = 23;
    happyBirthday(name, age);
    return 0;
    */

    /*
    // return keyword : un-comment lines 31 to 39
    double length;
    std::cout << "enter the length of a cuboid: " << '\n';
    std::cin >> length;
    double area = square(length);
    double volume = cube(length);
    std::cout << "area of the cuboid is " << area << '\n';
    std::cout << "volume of the cuboid is " << volume << '\n';
    */


    /*
    // method overloading : un-comment lines 42 to 44, 1163 to 1175.
    std::string topping_1;
    std::string topping_2;
    std::cout << "what topping do you like as the first? " << '\n';
    std::getline(std::cin, topping_1);
    std::cout << "what topping do you like as the second? " << '\n';
    std::getline(std::cin, topping_2);
    if(topping_1.empty() && topping_2.empty()){
        bakePizza();
    }else if(topping_2.empty()){
        bakePizza(topping_1);
    }else{
        bakePizza(topping_1, topping_2);
    }
    return 0;
    */

    /*
    // arrays : all the items in an array should have the same data type
    std::string cars[] = {"Lamborghini Revuelto", "Bentley Batur", "Ferrari Purosangue", "Hennessey Venom F5", "Koenigsegg Jesko Absolute"};
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    std::cout << cars[3] << '\n';
    std::cout << cars[4] << '\n';    
    return 0;
    */

    /*
    // Sizeof() operator : determines the size of variables, data types, classes, objects etc.
    std::string name = "Mandinee";
    double GPA = 3.90;
    char letter = 'S';

    std::cout << sizeof(name) << " bytes \n" ;
    std::cout << sizeof(GPA) << " bytes \n" ;    // since the variable GPA is of double data type it should have the same number of bytes as a double
    std::cout << sizeof(double) << " bytes \n" ;
    std::cout << sizeof(letter) << " bytes \n" ; // since the variable letter is of char data type it should have the same number of bytes as a char
    std::cout << sizeof(char) << " bytes \n" ;

    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::cout << sizeof(letters) << " bytes\n";
    std::cout << sizeof(letters)/sizeof(char) << " elements in the array. \n";      // to calculate the size of the array we can divide the size of the array sizeof(letters) by the size of data type sizeof(char) or by an element sizeof(letters[0]) in that array.
    return 0;
    */


    /*
    // iterate over an array using a for loop

    std::string cars[] = {"Lamborghini Revuelto", "Bentley Batur", "Ferrari Purosangue", "Hennessey Venom F5", "Koenigsegg Jesko Absolute"}; 
    for(int i = 0; i < sizeof(cars)/sizeof(std::string); i++){    
        std::cout << cars[i] << " \n";
    }
    return 0;
    */


    /*
    // iterate over an array using a for-each loop
    std::string students[] = {"Emily", "Taylor", "John", "Noah", "Akira"};
    for(std::string i : students){
        std::cout << i << '\n';
    }
    return 0;
    */



    /*
    // passing an array to a function : un-comment line 47, 1178 to 1186.

    double prices[] = {1999.66, 13.69, 616.99, 999.61, 1766.99};
    double total;
    int size;
    size = sizeof(prices)/sizeof(prices[0]);

    total = getTotal(prices, size);
    std::cout << "your total is $" << total;
    return 0;
    */



    /*
    // search an array for an element : this only includes a linear search : un-comment line 49, 1189 to 1198.
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myLuckyNumber;

    std::cout << "enter your lucky number: \n";
    std::cin >> myLuckyNumber;

    index = searchArray(numbers, size, myLuckyNumber);

    if(index != -1){
        std::cout << "your lucky number " << myLuckyNumber << " has been found! it's at index " << index << " \n";
    }else{
        std::cout << "your lucky number is not stored in the array\n";
    }

    return 0;
    */


    /*
    // sorting an array : un-comment line 51, 1201 to 1217.
    int numbers[] = {1, 5, 7, 10, 6, 8, 9, 3, 4, 2, 12, 13, 11};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for(int element:numbers){
        std::cout << element << " ";

    }
    return 0;
    */


    /*
    // fill(begin, end, value) method : fills a range of elements with a specified value

    
    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods + SIZE, "noodles");
    

    for(std::string food:foods){
        std::cout << food << '\n';
    } 
    
    

    const int SIZE_CAR = 100;
    std::string cars[SIZE_CAR];

    fill(cars, cars + (SIZE_CAR/2), "bugatti la mistral");       // end argument has changed into take the half of the size of the array
    fill(cars + (SIZE_CAR/2), cars + SIZE_CAR, "lamborghini urus mansory");   // begin argument has changed to start from where the previous fill method's end has finished
    
    for(std::string car:cars){
        std::cout << car << '\n';
    }
    return 0;
    */



    /*
    // filling an array with user input

    std::string books[6];
    int size = sizeof(books)/sizeof(books[0]);
    std::string temp;


    std::cout << "****** enter six books you like ******\n";
    for(int i = 0; i < size; i++){
        std::cout << "enter the #" << i + 1 << " book you like or enter 'c' to close the program: \n";
        std::getline(std::cin, temp);

        if(temp == "c"){
            break;
        }else{
            books[i] = temp;

        }

    }
    std::cout << "\n";
    std::cout << "******** these are the books you favor ********\n";
     for(int i = 0; !books[i].empty(); i++){        // this condition checks if the element in the book array is NOT empty
            std::cout << books[i] << '\n';
        }
    
    return 0;
    */


    /*
    // 2D arrays or multidimensional arrays

    // first set of square brackets is for the number of rows and second set of square brackets are for columns, and also when initializing a 2D array it is not neccessary to declare the number of rows but neccessary to declare the number of columns
    
    std::string cars[][3] = {{"Roma", "SF90", "296 GTB"}, 
                            {"740i xDrive", "840i Gran Coupe", "X7 xDrive40i"},
                            {"Panamera", "Cayman", "Carrera"}};



    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << " \n";
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << " \n";
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << " \n";

    // we can also iterate over a 2D array 

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
       
    }

    return 0;
    */


    /*
    // memory addresses : memory address can be accessed with '&'

    std::string name = "Mandinee";
    bool student = true;
    int number = 13;

    std::cout << &name << '\n';
    std::cout << &number << '\n';
    std::cout << &student << '\n';
    return 0;
    */


    /*
    // Pass by VALUE vs Pass by REFERENCE : un-comment line 53, 1220 to 1228.
    
    std::string m = "Coca-Cola";
    std::string r = "Monster";

    swapValues(m, r);
    
    std::cout << "m: " << m << '\n';
    std::cout << "r: " << r << '\n';

    return 0;
    */


    /*
    // pointer : variable that stores memory address of another variable, sometimes its easier to work with an address
    // & : address of operator
    // *  : dereference operator

    std::string name = "Mandinee";
    int age = 23;


    std::string *pName = &name;
    int *pAge = &age;

    std::cout << pName  << '\n';  // this will output the memory address of the name variable
    std::cout << *pName << '\n';  // with the help of dereference operator we can output the data stored in the variable
    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
    return 0;
    */


    /*
    // null pointer : 'nullptr' keyword represents null pointers, null pointers are a helpful way of knowing if an address is successfully assigned to a pointer

    int *pointer = nullptr;
    int number = 1776;

    pointer = &number;

    if(pointer == nullptr){
        std::cout << "an address wasn'r assigned! \n";

    }else{
        std::cout << "an address was assigned! \n";
    }

    return 0;
    */


    
    /*
    // recursion : un-comment line 55, 1231 to 1238.

    walk(100);
    return 0;
    */



   /*
   // function templates : we can use function templates to get rid of the hustle of method overloading. in a normal way of overloading methods we need to declare the same method with different parameters several times. but using function templates we can do method overloading in an easier manner. un-comment line 58 to 62.
    std::cout << max(1, 2) << '\n';             // as integers
    std::cout << max("1", "2") << '\n';         // as strings
    std::cout << max('1', '2') << '\n';         // as char
    std::cout << max(1, 2.3) << '\n';           // both integers and double are present. 'auto' keyword determines what data type should be output
    return 0;
    */


    /*
    // struct : is a "structure" (not a data structure!) that groups related variables under one name. the difference between an array and a struct is that it can contain variables of different data type. un-comment line 64 to 70.

    student student1;
    student1.name = "Mandinee";
    student1.gpa = 4.0;
    student1.enrolled = true;

    student student2;
    student2.name = "Supun";
    student2.gpa = 4.0;
    student2.enrolled = true;

    std::cout << "Student Name: " << student1.name << '\n';
    std::cout << "GPA:" << student1.gpa << '\n';
    std::cout << "Enrolled Status: " << student1.enrolled << "\n";

    std::cout << "Student Name: " << student2.name << '\n';
    std::cout << "GPA:" << student2.gpa << '\n';
    std::cout << "Enrolled Status: " << student2.enrolled << "\n";

    return 0;
    */


    /*
    // pass structs as arguments : un-comment line 72 to 80, 1241 to 1248.
    
    car car1;
    car car2;

    car1.model = "Huracan";
    car1.year = 2023;
    car1.color = "Black";

    car2.model = "508";
    car2.year = 2023;
    car2.color = "Black";

    printCar(car1);
    std::cout << '\n';
    printCar(car2);

    return 0;
    */


    /*
    // enums - is a user defined data type that consists of paired named-integer constatnts. in the example below we're using a switch case. but as we know a switch case always requires integers as case numbers not strings but by defining an enum we can accomplish the below code. un-comment line 83.

    Day today = sunday;             // we're using newly defined data type "Day" to make the variable "today"

    switch(today){
        case sunday:
            std::cout << "it's sunday \n";
            break;
        case monday:
            std::cout << "it's monday \n";
            break;
        case tuesday:
            std::cout << "it's tuesday \n";
            break;
        case wednesday:
            std::cout << "it's wednesday \n";
            break;
        case thursday:
            std::cout << "it's thursday \n";
            break;
        case friday:
            std::cout << "it's friday \n";
            break;
        case saturday:
            std::cout << "it's saturday \n";
            break;
    }
    */


    /*

    // classes and objects : un-comment line 86 to 103.
    Human mandi;
    mandi.name = "Mandinee Hewage";
    mandi.occupation = "System Analyst";
    mandi.age = 23;

    std::cout << mandi.name << '\n';
    std::cout << mandi.occupation << '\n';
    std::cout << mandi.age << '\n';

    mandi.drink();
    mandi.sleep();

    return 0;

    */

    /* 
    // constructors - is a special method called automatically when an object is instantiated, this is uesful for assigning values to attributes as arguments. un-comment line 105 to 137.

    Student student1("Mandinee", 23, 3.9);
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    
    return 0;

    // overloaded constructors - multiple constructors w/ the same method name but different parameters allows for varying arguments when instantiating an object


    Pizza pizza1;
    Pizza pizza2("chicken");
    Pizza pizza3("chicken", "cheese");

    std::cout << pizza1.topping1 << '\n';       // this should output nothing as we didn't pass any values
    std::cout << pizza2.topping1 << '\n';       // this should output only the first topping as we passed only one topping as an argument 
    std::cout << pizza3.topping1 << '\n';       // this should output the first topping passed  
    std::cout << pizza3.topping2 << '\n';       // this should output the second topping passed 

    return 0;
    */


    /*
    // getters and setters - usage of getters and setters is a level of abstraction in OOP. getters are functions that makes PRIVATE attributes READABLE, setters are functions that makes PRIVATE attributes WRITEABLE. un-comment line 140 to 159.

    // Stove stove1;
    // std::cout << "your stove temperature is " << stove1.getTemperature();   

    // stove1.setTemperature(-1);
    // std::cout << "your stove temperature is " << stove1.getTemperature();

    // stove1.setTemperature(0);
    // std::cout << "your stove temperature is " << stove1.getTemperature();

    // stove1.setTemperature(5);
    // std::cout << "your stove temperature is " << stove1.getTemperature();

    // stove1.setTemperature(10);
    // std::cout << "your stove temperature is " << stove1.getTemperature();

    // stove1.setTemperature(10000);
    // std::cout << "your stove temperature is " << stove1.getTemperature();

    return 0;
    */


    /*
    // inheritance : un-comment line 162 to 211.

    Dog dog;
    Cat cat;
    
    dog.eat();
    dog.bark();
    std::cout << dog.alive << '\n';

    cat.eat();
    cat.meow();
    std::cout << cat.alive << '\n';


    Cube cube(10);
    std::cout <<"side of the cube: " << cube.side << '\n';
    std::cout <<"area of the cube: " << cube.area << '\n';
    std::cout <<"volume of the cube: " << cube.volume << '\n';

    Sphere sphere(13);
    std::cout <<"radius of the sphere: " << sphere.radius << '\n';
    std::cout <<"area of the sphere: " << sphere.area << '\n';
    std::cout <<"volume of the sphere: " << sphere.volume << '\n';

    return 0;
    */

}

/*
void bakePizza(){
        std::cout << "here's your plain pizza without any toppings \n";
}

void bakePizza(std::string topping_1){
        std::cout << "here's your pizza with " << topping_1 << " topping \n";
}

void bakePizza(std::string topping_1, std::string topping_2){
        std::cout << "here's your pizza with " << topping_1 << " and " << topping_2 << " topping \n";
}
*/


/*
double getTotal(double prices[], int size_of_array){
    double init_total = 0;
    for(int i = 0; i < size_of_array; i++){
        init_total = init_total + prices[i];
    }
    return init_total;
}
*/


/*
int searchArray(int array[], int size_of_array, int element){
    for(int i = 0; i < size_of_array; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;    // in programming -1 serves as a sentinel value, uses its presence as a condition of termination
}
*/


/*
void sort(int array[], int size){

    // this is bubble sort
    int temp;
    for(int i = 0; i < size-1; i++){            // we are subtracting 1 from size cause we don't need to check the last item of the array as larger values gravitate to the end of the sorted array
        for(int j = 0; j < size - i - 1; j++){          // once we placed all the larger elements to the right side (since we sort the array in ascending order) the elements are already in order, so we don't need to compare their sizes
            if(array[j] > array [j + 1]){    // if change > to < then we will get the descending order of values
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp; 

            }
        }
    }
}
*/


/*
void swapValues(std::string &m, std::string &r){    // we have used "&" to pass the argument as references otherwise it'll be just using the copies of the initial variable and nothing will happen to the original variables. if we pass the values by just as VALUES then it won't work. thats why we pass the values as REFERENCES by using '&'
     
    std::string temp;
    temp = m; 
    m = r;
    r = temp;
}
*/


/*
void walk(int steps){
    if(steps > 0){
        std::cout << "take a step! \n";
        walk(steps-1);          // function is invoked within the function itself, making it recursive
    }
}
*/


/*
void printCar(car car){        // passing the struct as an argument
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';

}
*/
