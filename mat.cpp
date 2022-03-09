
#include "mat.hpp"
#include <iostream>
#include <string>
 
 using namespace std;
namespace ariel{
    string mat(int a, int b, char c, char d) {
        
        if(a < 0 || b< 0 || a%2 == 0 || b%2 == 0 ){
            throw invalid_argument("The inputs are non positive, even or invalid");}
        
        
        string str = "";
        // int x,y=0;
        // int arr[a][b];
        // char symbol =' ';
        // while(x <= (a/2)){
        //     if(x%2 == 0){
        //         symbol = c;
        //     }else{ symbol = d;}

        //     for(int i = x; i<a-x; i++){
        //         arr[x][i] = arr[b-x-1][i] = symbol;
        //     }
        //     x++;
        // }

        // while(y<=(b/2)){
        //     if(y%2 == 0){
        //         symbol = c;
        //     }else{ symbol = d;}

        //     for(int j=y; j<b-y; j++){
        //         arr[j][y] = arr[j][a-1-y] = symbol;
        //     }
        //     y++;
        // }
        // for(int i = 0; i < a; i++){
        //     for(int j = 0; j < b; j++){
        //     str += arr[i][j];    }
        //  cout<<"\n";
        //  }
        // cout << str;
        //return (str)
        return "";
	}

    // string printArray(arr[][]){
    //     for(int i = 0; i < array.length(); i++){
    //         for(int j = 0; j < array[0].length(); j++){
    //             cout<< ""<< array[i][j] <<"";
    //         }
    //         cout<<"\n";
    //     }
    // }

}