/*
 * Project 1
 * Task: Find the frequency of a letter and then find a key to shift the text
 * Author: Scott Derbes
 * Date: 9/21/18
 */
#include <iostream>
#include <array>
#include <fstream>
#include <string>
using namespace std;

void readTextFile();
void findFrequency();

int main() {
    readTextFile();
    findFrequency();
    return 0;
}

void readTextFile(){
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUWXYZ";

    int totalChars = 0;
    char currentCharacter;
    double valA = 0;
    double valB = 0;
    double valC = 0;
    double valD = 0;
    double valE = 0;
    double valF = 0;
    double valG = 0;
    double valH = 0;
    double valI = 0;
    double valJ = 0;
    double valK = 0;
    double valL = 0;
    double valM = 0;
    double valN = 0;
    double valO = 0;
    double valP = 0;
    double valQ = 0;
    double valR = 0;
    double valS = 0;
    double valT = 0;
    double valU = 0;
    double valV = 0;
    double valW = 0;
    double valX = 0;
    double valY = 0;
    double valZ = 0;


    ifstream inFile("D:\\Documents\\Github\\Letter_Frequency\\CipherFiles\\Scott.txt", fstream::in);

    if (inFile.fail()) {//Make sure file is able to open
        cerr << "Unable to open file";
        exit(1);   // call system to stop
    }


    while(!inFile.eof()){//View each line as a separate string of characters Problem is at this loop
        inFile >> currentCharacter;//Get character from file
            if(currentCharacter == 'A'){
                valA += 1;
                totalChars += 1;
           }
            else if(currentCharacter == 'B'){
                valB += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'C'){
                valC += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'D'){
                valD += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'E'){
                valE += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'F'){
                valF += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'G'){
                valG += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'H'){
                valH += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'I'){
                valI += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'J'){
                valJ += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'K'){
                valK += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'L'){
                valL += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'M'){
                valM += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'N'){
                valN += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'O'){
                valO += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'P'){
                valP += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'Q'){
                valQ += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'R'){
                valR += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'S'){
                valS += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'T'){
                valT += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'U'){
                valU += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'V'){
                valV += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'W'){
                valW += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'X'){
                valX += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'Y'){
                valY += 1;
                totalChars += 1;
            }
            else if(currentCharacter == 'Z'){
                valZ += 1;
                totalChars += 1;
            }
        }

    cout << "A: " << valA / totalChars * 100 << "% \n";
    cout << "B: " << valB / totalChars * 100 << "% \n";
    cout << "C: " << valC / totalChars * 100<< "% \n";
    cout << "D: " << valD / totalChars * 100<< "% \n";
    cout << "E: " << valE / totalChars * 100<< "% \n";
    cout << "F: " << valF / totalChars * 100<< "% \n";
    cout << "G: " << valG / totalChars * 100<< "% \n";
    cout << "H: " << valH / totalChars * 100<< "% \n";
    cout << "I: " << valI / totalChars * 100<< "% \n";
    cout << "J: " << valJ / totalChars * 100<< "% \n";
    cout << "K: " << valK / totalChars * 100<< "% \n";
    cout << "L: " << valL / totalChars * 100<< "% \n";
    cout << "M: " << valM / totalChars * 100<< "% \n";
    cout << "N: " << valN / totalChars * 100<< "% \n";
    cout << "O: " << valO / totalChars * 100<< "% \n";
    cout << "P: " << valP / totalChars * 100<< "% \n";
    cout << "Q: " << valQ / totalChars * 100<< "% \n";
    cout << "R: " << valR / totalChars * 100<< "% \n";
    cout << "S: " << valS / totalChars * 100<< "% \n";
    cout << "T: " << valT / totalChars * 100<< "% \n";
    cout << "U: " << valU / totalChars * 100<< "% \n";
    cout << "V: " << valV / totalChars * 100<< "% \n";
    cout << "W: " << valW / totalChars * 100<< "% \n";
    cout << "X: " << valX / totalChars * 100<< "% \n";
    cout << "Y: " << valY / totalChars * 100<< "% \n";
    cout << "Z: " << valZ / totalChars * 100<< "% \n";

    inFile.close();
}

void findFrequency(){
    char currentCharacter;

    ifstream inFile("D:\\Documents\\Github\\Letter_Frequency\\CipherFiles\\Scott.txt", fstream::in);//Open input file
    ofstream file("D:\\Documents\\Github\\Letter_Frequency\\CipherFiles\\ScottOut.txt", ios_base::out);//Open output file

    if (file.fail()) {//Make sure file is able to open
        cerr << "Unable to open file";
        exit(1);   // call system to stop
    }

    while(!inFile.eof()){
        inFile >> noskipws >> currentCharacter;//Get character from file

        if(currentCharacter == 'A'){
            file << "B";
        }
        else if(currentCharacter == 'B'){
            file << "V";
        }
        else if(currentCharacter == 'C'){
            file << "J";
        }
        else if(currentCharacter == 'D'){
            file << "I";
        }
        else if(currentCharacter == 'E'){
            file << "T";
        }
        else if(currentCharacter == 'F'){
            file << "C";
        }
        else if(currentCharacter == 'G'){
            file << "G";
        }
        else if(currentCharacter == 'H'){
            file << "Q";
        }
        else if(currentCharacter == 'I'){
            file << "R";
        }
        else if(currentCharacter == 'J'){
            file << "W";
        }
        else if(currentCharacter == 'K'){
            file << "O";
        }
        else if(currentCharacter == 'L'){
            file << "U";
        }
        else if(currentCharacter == 'M'){
            file << "P";
        }
        else if(currentCharacter == 'N'){
            file << "A";
        }
        else if(currentCharacter == 'O'){
            file << "Z";
        }
        else if(currentCharacter == 'P'){
            file << "L";
        }
        else if(currentCharacter == 'Q'){
            file << "X";
        }
        else if(currentCharacter == 'R'){
            file << "S";
        }
        else if(currentCharacter == 'S'){
            file << "K";
        }
        else if(currentCharacter == 'T'){
            file << "E";
        }
        else if(currentCharacter == 'U'){
            file << "H";
        }
        else if(currentCharacter == 'V'){
            file << "F";
        }
        else if(currentCharacter == 'W'){
            file << "M";
        }
        else if(currentCharacter == 'X'){
            file << "N";
        }
        else if(currentCharacter == 'Y'){
            file << "Y";
        }
        else if(currentCharacter == 'Z'){
            file << "D";
        }
        else if(isspace(currentCharacter)){
            file << '\n';
        }
        else{
            file << currentCharacter;
        }
    }
    file.close();//Close File
    }