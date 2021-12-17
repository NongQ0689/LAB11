#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream data;
    data.open("score.txt");
    string text ;
    double xi = 0 , sum = 0 , mean = 0 , dx2 = 0 , sd = 0  ;
    int N = 0 ;

    while(getline(data,text))
    {   
        N++;
        xi = atof(text.c_str());
        sum += xi;
        mean = sum/N;
        dx2 += pow(xi,2);
    }
    sd=sqrt(dx2/N-pow(mean,2));

    cout << "Number of data = "<<N<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sd<<"\n";
}