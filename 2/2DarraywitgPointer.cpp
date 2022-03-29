
#include <iostream>



int main(int argc, char const *argv[])
{
    int **array = 0;
    int ROWS = 5;
    int COLUMNS = 3;
    array = new int *[ROWS];

for( int i = 0 ; i < ROWS ; i++ ) {
    array[i] = new int[COLUMNS];
}
 
    for(int i = 0; i < ROWS; i++){
       
        for(int j = 0; j < COLUMNS; j++){
            array[i][j] = i+j+2;
        }
    }

     for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
        std::cout << array[i][j]<< " ";    
        }
        std::cout << "\n";    
    }
    
    for( int i = 0 ; i < ROWS ; i++ ) {
    delete [] array[i];
    }
    
    delete [] array;
    
    return 0;
}
