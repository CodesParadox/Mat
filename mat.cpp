#include "mat.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <sstream>

 using namespace std;
namespace ariel{
    string mat(int a, int b, char c1, char c2) {
        if(a < 0 || b < 0 || a%2 == 0 || b%2 == 0 ){
            throw invalid_argument("The inputs are non positive, even or invalid");}
        // if (c1 == c2){ //if they cant be quals, idk need 2 C
        //       throw invalid_argument("the symbols cant be equal -> invalid");  }
        if (c1 < '!' || c2 < '!' || c1 > '~' || c2 > '~') {
		throw invalid_argument("Invalid charcters -> OUT OF RANGE");}

        string str;
        int x = 0;
        int y=0;
        vector <vector<string>> arr(b, vector<string>(a));
        //int arr[b][a];
        char symbol =' ';
        while(x <= (b/2)){
            if(x%2 == 0){
                symbol = c1;
            }else{ symbol = c2;}
            
      

            for(int i = x; i<a-x; i++){
                arr[x][i] = arr[b-x-1][i] =symbol;
            }
            x++;
        }

        while(y<=(a/2)){
            if(y%2 == 0){
                symbol = c1;
            }else{ symbol = c2;}

            for(int j=y; j<b-y; j++){
                arr[j][y] = arr[j][a-1-y] = symbol;
            }
            y++;
        }

         

                //Tell me u like 2 spend storage WITHOUT telling me you like 2 spend storage
        //          vector <vector<string>> NoReason2Use;
        //         for(int row=0; row<b;row++){
        //             vector<string> irelevant4beginner(b);
        //             for(int col=0; col<a; col++){
                      
        //                 irelevant4beginner.push_back(arr[row][col]);
        //             }
        //             NoReason2Use.push_back(irelevant4beginner);
        //         }
       
        // for(int i=0; i<NoReason2Use.size(); i++){
        //     for(int j=0; j<NoReason2Use[i].size(); j++){
        //          str+=NoReason2Use.at(i).at(j);
        //          }
        //      str+="\n";
        // }
 
        for(int i = 0; i < b; i++){
            for(int j = 0; j < a; j++){
            str+=arr[i].at(j);
            //str += arr[i][j];  
            //str+= NoReason2Use.at(i).at(j);   
             }
         str+="\n";
         }
        return str;
      
	}
}
    
    // int main(){
    //  cout<<" ::::::::  ::::    ::: :::     :::   :::                  :::   :::       :::    :::::::::::\n";
    // cout<<":+:    :+: :+:+:   :+: :+:     :+:   :+:                  :+:+: :+:+:    :+: :+:     :+:\n";      
    // cout<<"+:+    +:+ :+:+:+  +:+ +:+      +:+ +:+                  +:+ +:+:+ +:+  +:+   +:+    +:+ \n";      
    // cout<<"+#+    +:+ +#+ +:+ +#+ +#+       +#++:   +#++:++#++:++   +#+  +:+  +#+ +#++:++#++:  +#+\n";        
    //  cout<<"+#+    +#+ +#+  +#+#+# +#+        +#+                  +#+       +#+ +#+     +#+  +#+\n";         
    // cout<<"#+#    #+# #+#   #+#+# #+#        #+#                  #+#       #+# #+#     #+#  #+#\n";          
    // cout<<"########  ###    #### ########## ###                  ###       ### ###     ###  ###\n";           
    // cout<<"\n"<<endl;
      
    //     cout<<ariel::mat(13,5,'@','-') <<endl;
    //    // cout<<ariel::mat(9,9,'@','-') <<endl;
    //    return 0; 
    // }