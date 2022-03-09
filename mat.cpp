
#include "mat.hpp"
#include <iostream>
#include <string>
 
 using namespace std;
namespace ariel{
    string mat(int a, int b, char c1, char c2) {
        
        if(a < 0 || b< 0 || a%2 == 0 || b%2 == 0 ){
            throw invalid_argument("The inputs are non positive, even or invalid");}
        
        
        string str = "";
        int x = 0;
        int y=0;
        int arr[a][b];
        char symbol =' ';
        while(x <= (a/2)){
            if(x%2 == 0){
                symbol = c1;
            }else{ symbol = c2;}

            for(int i = x; i<b-x; i++){
                arr[x][i] = arr[a-x-1][i] =symbol;
            }
            x++;
        }

        while(y<=(b/2)){
            if(y%2 == 0){
                symbol = c1;
            }else{ symbol = c2;}

            for(int j=y; j<a-y; j++){
                arr[j][y] = arr[j][b-1-y] = symbol;
            }
            y++;
        }
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
            str += arr[i][j];    }
         str+="\n";
         }
       // cout << str;
        return str;
        //return "";
	}


}

    int main(){
        cout<<"this is the solution"<<endl;
        cout<<ariel::mat(13,5,'@','-') <<endl;
        cout<<ariel::mat(9,9,'@','-') <<endl;
        return 0;
        
    };