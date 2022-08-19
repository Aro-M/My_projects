#ifndef Julius_Caesar
#define Julius_Caesar

#include <string>
#include <iostream>

class Caesar{
public:
     Caesar(){};
    ~Caesar(){};
public:
     void encode_Caesar();
     void decode_Caesar(std::string code2);
    
};

 void Caesar::encode_Caesar() {
   std::string cesar_algorithm_code;
   getline(std::cin,cesar_algorithm_code);
   std::string cesar_algorithm_code1;
   std::string code2;
   for(int i = 0; i < cesar_algorithm_code.length();++i){
     int str={};
      if((cesar_algorithm_code[i] < 65 || cesar_algorithm_code[i] > 90 )
      && (cesar_algorithm_code[i] < 97 || cesar_algorithm_code[i] >122)){
        str = cesar_algorithm_code[i];
        cesar_algorithm_code1[i] =str;
        str ={};

             }
            if(cesar_algorithm_code[i] >= 65 && cesar_algorithm_code[i]  <=67 ){
                 str = cesar_algorithm_code[i];
                cesar_algorithm_code1[i] = str +  23;
               

                } 
            if(cesar_algorithm_code[i] >=68 && cesar_algorithm_code[i] <= 90){
                   str = cesar_algorithm_code[i];
                    cesar_algorithm_code1[i] = str - 3;
            
                }
            
          
            if(cesar_algorithm_code[i] >= 97 && cesar_algorithm_code[i]  <= 99 ){
                str = cesar_algorithm_code[i];
                cesar_algorithm_code1[i]= str +  23;
            
                } 
            if(cesar_algorithm_code[i] >=100 && cesar_algorithm_code[i] <= 122){
                str = cesar_algorithm_code[i];
                cesar_algorithm_code1[i] = str - 3;
              
                }
              
             code2+=cesar_algorithm_code1[i];
       } 
        std::cout<< "Decode_Caesar "<<code2 <<std::endl;
        decode_Caesar( code2);
   

    }
    void Caesar::decode_Caesar(std::string code2){
    std::string code3;

   for(int i = 0; i < code2.length();++i){
     int str1={};
      if((code2[i] < 65 || code2[i] > 90 )
      && (code2[i] < 97 || code2[i] >122)){
        str1 = code2[i];
        code3[i] =str1;
        str1 ={};

             }
            if(code2[i] >= 88 && code2[i]  <=90 ){
                 str1 =code2[i];
                code3[i] = str1 -  23;

                } 
            if(code2[i] >=65 && code2[i] <= 87){
                   str1 = code2[i];
                    code3[i] = str1 + 3;       
                }

            if(code2[i] >= 120 && code2[i]  <= 122 ){
                str1 =code2[i];
               code3[i]= str1 -  23;
            
                } 
            if(code2[i] >=97 && code2[i] <= 119){
                str1 = code2[i];
                code3[i] = str1 + 3;
              
                }
              
        code3+=code3[i];
        
    } 
   std::cout<<"Encode_Caesar " <<code3;
}
    
    #endif //Julius_Caesar;
