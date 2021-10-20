/*Name:Alejandro_Rodriquez,2001889172,lab7A
*Description: Write triangle with user defined functions
*Input: 2 < number < 20, character input
*Output: triangle according to user input num/char
*/
//include required libraries
#include <iostream>
#include <string>
//prototypes
int getIntegerInput(std::string, int, int);
char getCharacterInput(std::string);
void writeRightsideUpTriangle(int,char);
void writeUpsideDownTriangle(int,char);
int main(){
    //initialize min and max values
    const int min = 2;
    const int max = 20;
    //store user prompt for count in variable
    std::string promptOne = "Enter a count between " +
                            std::to_string(min) + " and "+ 
                            std::to_string(max)
                            + "\n**";
    //store user prompt for character in variiable
    std::string promptTwo = "Enter a character \n**";
    //function prompts user for integer input//
    //passing variables with user Input through parameters
    int outputCount = getIntegerInput(promptOne,min,max); 
    //function prompts user for character input//
    //passing string prompt for user's input in as a parameter
    char userCharacter = getCharacterInput(promptTwo);
    //call function that takes stored user integer input and char 
    //-using these values to output upside down triangle
    //-using user's input character choice stored in variable
    writeUpsideDownTriangle(outputCount,userCharacter);
    //calling function which does the same with right sideup triangle
    writeRightsideUpTriangle(outputCount,userCharacter);
}
/*function which verifies the user input falls within set /
******parameters and clears failstate********************/
int getIntegerInput(std::string prompt,int min, int max){
    int userInput;
    int ignoreNum = 60;
    //loop will return Error until input is valid
    while(true){
    std::cout<<prompt;
    std::cin>>userInput;
    std::cout<<std::endl;
    //will check if users input is in the desired range
    if(!std::cin || userInput < min|| userInput > max){
        std::cout<<"ERROR: Invalid input!"<<std::endl;
        std::cin.clear();
        std::cin.ignore(ignoreNum,'\n');
    }else{
        return userInput;
    }
  }
}
/*Next fuction will get a character value for user*/
//value will be used for triangle function
char getCharacterInput(std::string prompt){
    char userChar;
    std::cout<<prompt;
    std::cin>>userChar;
    std::cout<<std::endl;
    return userChar;
}
/*function will write an upside down triangle*/
//-using user input char and int
void writeUpsideDownTriangle(int size, char character){
    int outputCount = size;
    int j;
    while(outputCount>=1){
        outputCount--;
        j = 0;
        while(j<=outputCount){
            std::cout<<character;
            j++;
        }
        std::cout<<std::endl;
    }
}
/*function will write a right side up triangle*/
//-using user input char and int
void writeRightsideUpTriangle(int size, char character){
    int outputCount=0;
    int j;
    //while loop iterating right triangle
    while(outputCount<size) {
        outputCount++;
        j =1;
        while(j<= outputCount){
            std::cout<< character;
            j++;
        }
        std::cout<<std::endl;
    }
}
