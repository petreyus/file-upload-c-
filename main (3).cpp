#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 100;
int grades[SIZE];

void readData() {


    string inFileName = "example.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for (int i = 0; i < SIZE; i++)
        {
            inFile >> grades[i];
            cout << grades[i] << " ";
        }



        
        inFile.close(); 
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }

    
    
    
      
       int j = 1;
       int tmp;

       for(int i = 0; i < 100; i++){
          for(j = 0; j < 100-i-1; j++){
              if(grades[j] > grades[j + 1]){
                  tmp = grades[j];
                  grades[j] = grades[j + 1];
                  grades[j + 1] = tmp;
              }

          }
       }

       cout << "The sorted data in order least to greatest: " << endl;
       for(int i = 0; i < 100; i++){
          cout << grades[i] << endl;
       }


   
}



int main()
{
    
    readData();
   
    return 0;
}
