#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

//Lab9/Exercise 2
int get_random();

int main()
{
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

int get_random()
{
   return rand() % 6 + 1;
}
