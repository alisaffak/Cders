#include <iostream>
#include <cstdio>

void createMatrix(int rows, int columns, int ***array)
{

    *array = new int *[rows];
    
    for(int i = 0; i < rows; i++){
        (*array)[i] = new int [columns];     
    }
    
    for(int i = 0; i < rows; i++){
       
        for(int j = 0; j < columns; j++){
            (*array)[i][j] = i+j+2;
        }
    }
}


int main(int argc, char const *argv[])
{
    int row = 5;
    int coloumn = 3;
    int **array = nullptr;
    
    std::cout << "createMatrix func started..." << std::endl;
    createMatrix(row, coloumn, &array);
    std::cout << "createMatrix func finished succesfully..." << std::endl;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < coloumn; j++){
        std::cout << array[i][j]<< " ";    
        }
        std::cout << "\n";    
    }
    
    for( int i = 0 ; i < row ; i++ ) {
    delete [] array[i];
    }   
    delete [] array;  
    return 0;
}

