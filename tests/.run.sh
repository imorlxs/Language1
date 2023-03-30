touch tests//.timeout
CMD="valgrind --leak-check=full  valgrind --leak-check=full /home/isaac/NetBeansProjects/Language1/dist/Debug/GNU-Linux/language1  < tests/SimpleTextbigrams.test 1> tests//.out7 2>&1"
eval $CMD
rm tests//.timeout
