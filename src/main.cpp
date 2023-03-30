/*
 * Metodolog�a de la Programaci�n: Language1
 * Curso 2022/2023
 */

/* 
 * File:   main.cpp
 * @author Silvia Acid Carrillo <acid@decsai.ugr.es>
 * @author Andr�s Cano Utrera <acu@decsai.ugr.es>
 * @author Luis Castillo Vidal <L.Castillo@decsai.ugr.es>
 *
 * Created on 7 de febrero de 2023, 14:02
 */


/**
 * This program reads from the stardard input, an integer n (number of elements) 
 * and a list of n pairs bigram-frequency. The pairs are stored in an array, 
 * and then it is sorted in decreasing order of frequency. After that, 
 * all the bigrams are changed to uppercase. The sorted array is finally shown 
 * in the stardard output. 
 * Running example:
 * > language1 < data/miniquijotebigrams.txt 
 */
#include <iostream>
#include "ArrayBigramFreqFunctions.h"
using namespace std;
int main(int argc, char* argv[]) {
    int MAX = 1000;
    BigramFreq array[MAX];
    int n;
    cin >> n;
    
    readArrayBigramFreq(array, MAX, n);
    sortArrayBigramFreq(array, n);
    
    toUpperArrayBigramFreq(array, n);
    printArrayBigramFreq(array, n);
//    BigramFreq bigram;
//    Bigram b("AD");
//    bigram.setBigram(b);
//    bigram.setFrequency(5);
//    cout << bigram.toString();
  
}
