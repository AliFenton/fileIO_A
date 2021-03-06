// Name: Ali Fenton
// October 22, 2015
// Programming Practice - File IO A

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outResult;
    ofstream outCapitalize;
    ofstream outUpperCase;
    string word, newString, upperString, upperFirst;
    char letter,letter1;
    int wordcount =0;
    int lettercount =0;
    int average = 0;
    int word1 = 0;
	int word2 = 0;
	int word3 = 0;
	int word4 = 0;
	int word5 = 0;
	int word6 = 0;
	int word7 = 0;
	int word8 = 0;
	int word9 = 0;
	int word10 = 0;
    int wordM11 = 0;
    
    inFile.open("gba.txt");
    outResult.open("results.txt");
    outCapitalize.open("capitalize.txt");
    outUpperCase.open("uppercase.txt");
//***************************************************************************
//Check to make sure file opens properly,if it doesnt it stops the program   
    if(inFile.fail()){
        cout << "error opening input file" << endl;
        exit(1);
    }
    if(outResult.fail()){
        cout << "error opening output file" << endl;
        exit(1);
    }
        if(outCapitalize.fail()){
        cout << "error opening outputB file" << endl;
        exit(1);
    }
        if(outUpperCase.fail()){
        cout << "error opening outputC file" << endl;
        exit(1);
    }
//***************************************************************************
    while(!inFile.eof()){
        lettercount += word.length();
        wordcount+=1;
        
        newString+= word + " ";
         
		if(word.length() == 1){
			word1++;
		}else if(word.length() == 2){
			word2++;
		}else if(word.length() == 3){
			word3++;
		}else if(word.length() == 4){
			word4++;
		}else if(word.length() == 5){
			word5++;
		}else if(word.length() == 6){
			word6++;
		}else if(word.length() == 7){
			word7++;
		}else if(word.length() == 8){
			word8++;
		}else if(word.length() == 9){
			word9++;
		}else if(word.length() == 10){
			word10++;
		}else if(word.length() >= 11){
			wordM11++;
		}
        inFile >> word;
        
    }

//***************************************************************************  
    for( int i = 0; i < newString.length(); i++){
        letter = toupper(newString[i]);
        upperString += letter;
    }
    
//***************************************************************************
    for( int i = 0; i < newString.length();i++){
        if(newString[i-1] == ' ' ){
            letter1 = toupper(newString[i]);
            upperFirst += ( letter1);
        }else if ( newString[i] == ' '){
            letter1 = ' ';
            upperFirst +=  letter1;
        }else{
        letter1= newString[i];
        upperFirst += letter1;
        }
    }
    
//***************************************************************************
    average = lettercount / wordcount;
    outResult << "average characters per word:  " << average << endl;
    outResult << "wordcount is " << wordcount-1 << endl;
    
    outResult << word1 << " words have the of length 1" << endl;
	outResult << word2 << " words have the of length 2" << endl;
	outResult << word3 << " words have the of length 3" << endl;
	outResult << word4 << " words have the of length 4" << endl;
	outResult << word5 << " words have the of length 5" << endl;
	outResult << word6 << " words have the of length 6" << endl;
	outResult << word7 << " words have the of length 7" << endl;
	outResult << word8 << " words have the of length 8" << endl;
	outResult << word9 << " words have the of length 9" << endl;
	outResult << word10 << " words have the of length 10" << endl;
    outResult << wordM11 << " words have the of length 11 or longer" << endl;
    outCapitalize << upperString << endl;
    outUpperCase << upperFirst << endl;
    
//*****************************************************************************  
    inFile.close();
    outResult.close();
    outCapitalize.close();
    outUpperCase.close();
    
    return 0;
}
