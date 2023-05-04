
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

//#define PI (3.14)

int get_random();

int main() {
    /*
    char str[] = "Do not interrupt me!";
    char ch = 'm';

    cout.write(str, 7);
    cout << endl;
    cout.put(ch);
     

    double a = 3.1415926534;
    double b = 2006.0;
    double c = 1.0e-10;

    cout.precision(3);

    cout << b << fixed << endl;
    cout << c << scientific;
    

   char name[20];
   cout << "What is your name?";
   cin.getline(name, 20);
   cout << "Your name is " << name;
    return 0;
*/
   
/*
    //Lab3/Exercise1
   char t = 'T';
   string str = "Hello Inha";
   int fortyk = 40000;
   int twomil = 2000000;
   long long loo= 2200000000;
   float flo = 178.5;
   long double looo = 3ULL * pow(10, 123);

   cout << t << endl;
   cout << str << endl;
   cout << fortyk << endl;
   cout << twomil << endl;
   cout << loo << endl;
   cout << flo << endl;
   cout << looo << scientific << endl;
   */
    /*
    //Lab3/Exercise2
    float celcius, fahrenheit;
 

    cout << "Input a temperature (in Celcius):";
    cin >> celcius;
    cout << (celcius*9/5)+32 << " Degrees fahrenheit\n\n";
    cout << "Input a temperature (in Faherenheit):";
    cin >> fahrenheit;
    cout << (fahrenheit-32)*5/9 <<" Degrees Celcius";
    */

   /*
   //Lab3/Exercise3
   short hour, minutes, seconds;
   
   cout << "Input hours:"; cin >> hour;
   cout << endl << "Input minutes:"; cin >> minutes;
   cout << endl << "Input seconds:"; cin >> seconds;
   cout << endl << endl;
   cout << "Total seconds:" << ((hour*60)*60) + (minutes*60) + seconds << endl;
   float total_mins = (hour*60.0) + minutes + (seconds/60.0);
   cout << "Total minutes:" <<  total_mins;
   */

    /*
    //Lab3/Exercise4
float a,b,c;

  cout << "Enter three floating point numbers: ";
  cin >> a >> b >> c;
  cout << endl << "You entered: " << a << " " << b << " " << c;

  cout << endl << "Sum: " << a+b+c << endl;

  cout << "Average: " << (a+b+c)/3;
    */

   //Lab3/Exercise5
/*
   const double PI = 3.141592;
   double radius, area, circumference;
   cout << "Enter the radius: ";
   cin >> radius;
   area = PI * radius * radius;// calculate the area
   circumference = 2.0 * PI * radius; //calculate the circumference
   cout << "Radius: " << fixed << setprecision(6) << radius << endl;
   cout << "Circle area = " << area << ", Circumference = " << circumference;

*/
/*
   //Lab3/Exercise6
   int a,b;
   cout << " Input two integer numbers: ";
   cin >> a >> b;
   cout << "You entered: " << a << ", " << b << endl << endl;

   cout << a << " + " << b << " = " << a+b << endl;
   cout << a << " - " << b << " = " << a-b << endl;
   cout << a << " * " << b << " = " << a*b << endl;
   cout << float(a) << " / " << float(b) << " = " << float(a)/float(b) << endl;
*/

   /*
   //Lab4/Exercise1
   int a;
   cout << "Input the current temperature: ";
   cin >> a;
   if (a<0)
   {
      cout << "Freezing weather";
   }else if (a <);
   {
   }
   */

  /*
  //Lab9 Exercise 1
	int i;
	for (i = 0; i <= 360; i++) {

		double i_rad = i / 180.0 * M_PI;

		double x = 10 * (cos(i_rad)); //x = r (cos (degrees°)), 
		double y = 10 * (sin(i_rad)); //y = r (sin (degrees°))

		
		

		cout << i << ": " << x << ", " << y << endl;
	}
	
   */

  /*
   //Lab9/Exercise 2
       srand(time(NULL));
       int d[7] = {0};

       for (int i = 1; i <= 1000000; i++)
       {
          int a = get_random();

          switch (a)
          {
          case 1:
             d[1]++;
             break;
          case 2:
             d[2]++;
             break;
          case 3:
             d[3]++;
             break;
          case 4:
             d[4]++;
             break;
          case 5:
             d[5]++;
             break;
          case 6:
             d[6]++;
             break;
          }
       }

       for (int j = 1; j <= 6; j++)
       {
          double perc = (static_cast<double>(d[j]) / 1000000) * 100;

          cout << j << ": " << d[j] << ", ";
          cout.precision(2);
          cout << fixed;
          cout << perc << "%" << endl;
       }
   

    return 0;
}
*/

 int get_random()
    {
       return rand() % 6 + 1;
    }
