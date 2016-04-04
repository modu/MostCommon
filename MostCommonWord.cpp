//
//  testFile.cpp
//  
//
//  Created by Varun Vyas on 04/04/16.
//
//
#include <iostream>
#include "stdio.h"
#include "limits.h"
#include <string>
#include <unordered_map>

using namespace std;

string mostCommonString(string str){
    unordered_map<string, int > map ;
    string word = "";
    string tempMax = "";
    int max = INT_MIN;
    for( int i = 0 ; i < str.length() ; i++) {
        
        if (str[i] == ' ') {
            map[word] +=1;
            word = "";
        }
        else {
            word +=str[i];
        }
        
        if ( max < map[word]){
            tempMax = word;
            max = map[word];
        }
    }
    return tempMax;
}

int main(){
    
    string str = "cat dog fish fish dog dog";
    cout<< mostCommonString(str);
    
}