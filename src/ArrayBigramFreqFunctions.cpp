/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ArrayBigramFreqFunctions.cpp
 * Author: javi
 * 
 * Created on 20 de marzo de 2023, 12:46
 */

#include "ArrayBigramFreqFunctions.h"
#include "BigramFreq.h"
#include <iostream>
#include <string>
#include <cstring>

void readArrayBigramFreq(BigramFreq array[], int dim, int &nElements) {
    if (nElements > 0) {
        std::string bigram;
        int freq;

        for (int i = 0; i < nElements; i++) {
            std::cin >> bigram;
            std::cin >> freq;
            Bigram bigrams(bigram);
            array[i].setBigram(bigrams);
            array[i].setFrequency(freq);
        }

    } else {
        throw std::out_of_range(std::string("void readElementsArrayBigramFreq() ")
                + "Introduced negative value");
    }
}

void printArrayBigramFreq(BigramFreq array[], int nElements) {
    std::cout << nElements << std::endl;
    for (int i = 0; i < nElements; i++) {
        std::cout << array[i].toString() << std::endl;
    }
}

void swapElementsArrayBigramFreq(BigramFreq array[], int nElements, int first, int second) {
    if ((first >= nElements || first < 0) || (second >= nElements || second < 0)) {
        throw std::out_of_range(std::string("void swapElementsArrayBigramFreq() ")
                + "Introduced negative value");
    } else {
        BigramFreq aux;
        aux = array[first];
        array[first] = array[second];
        array[second] = aux;
    }
}

void sortArrayBigramFreq(BigramFreq array[], int nElements) {
    for (int i = 0; i < nElements; i++) {
        for (int j = nElements - 1; j > i; j--) {
            if (array[j].getFrequency() > array[j - 1].getFrequency()) {
                if ((j >= nElements || j < 0) || (j - 1 >= nElements || j - 1 < 0)) {
                    throw std::out_of_range(std::string("void sortArrayBigramFreq() ")
                            + "Introduced negative  ");
                } else {
                    swapElementsArrayBigramFreq(array, nElements, j, j-1);
                }
            }
        }
    }
}

void toUpperArrayBigramFreq(BigramFreq array[], int nElements) {
    for (int i = 0; i < nElements; i++) {
        array[i].toUpper();
    }
}



