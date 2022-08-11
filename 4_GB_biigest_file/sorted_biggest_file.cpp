#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string>



void merge_to_file(std::ifstream &fin1, std::ifstream &fin2, std::ofstream &fout); 
void to_file(std::ifstream &fin1, std::ifstream &fin2, std::ofstream &fout);


int main() {
     	std::vector<int> vec;
		srand(time(0));
		std::string line;
		std::ofstream Writefile("file.txt");
		for(int i = 0; i< 1000;++i) {
		Writefile << rand()  << '\n';

		}
	  	
        std::ifstream readfile("file.txt");
		Writefile.close();
		int flag  = 1;
		int count = 50;
		for(int  i = 0; i < count;){
		std::getline(readfile,line);
		if(flag  ==  1){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 2;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write("file1.txt");
		for(int i = 0;i < vec.size();++i) {
           write << vec[i] << '\n' ;
		}
		write.close();
		vec.clear();
		}
		}


        if(flag  ==  2){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 3;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write1("file2.txt");
		for(int i = 0;i < vec.size();++i) {
           write1 << vec[i] << '\n' ;
		}
		write1.close();     
        vec.clear(); 
		}
		}
		

        if(flag  ==  3){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 4;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write2("file3.txt");
		for(int i = 0;i < vec.size();++i) {
           write2 << vec[i] << '\n' ;
		}
		write2.close();     
        vec.clear(); 
		}
		}
	   	
         if(flag  ==  4){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 5;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write3("file4.txt");
		for(int i = 0;i < vec.size();++i) {
           write3 << vec[i] << '\n' ;
		}
		write3.close();     
        vec.clear(); 
		}
		}
	   		
        if(flag  == 5){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 6;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write4("file5.txt");
		for(int i = 0;i < vec.size();++i) {
           write4 << vec[i] << '\n' ;
		}
		write4.close();     
        vec.clear(); 
		}
		}
	   
       if(flag  ==  6){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 7;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write5("file6.txt");
		for(int i = 0;i < vec.size();++i) {
           write5 << vec[i] << '\n' ;
		}
		write5.close();     
        vec.clear(); 
		}
		}
	   
        if(flag  ==  7){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 8;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write6("file7.txt");
		for(int i = 0;i < vec.size();++i) {
           write6 << vec[i] << '\n' ;
		}
		write6.close();     
        vec.clear(); 
		}
		}
	   	
        if(flag  ==  8){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 9;
		i = 0;
		std::sort(vec.begin(),vec.end());
       std::ofstream write7("file8.txt");
		for(int i = 0;i < vec.size();++i) {
           write7 << vec[i] << '\n' ;
		}
		write7.close();     
        vec.clear(); 
		}
		}
	   	 
       if(flag  ==  9){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 10;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write8("file9.txt");
		for(int i = 0;i < vec.size();++i) {
           write8 << vec[i] << '\n' ;
		}
		write8.close();     
        vec.clear(); 
		}
		}
	   
        
        if(flag  ==  10){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 11;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write9("file10.txt");
		for(int i = 0;i < vec.size();++i) {
           write9 << vec[i] << '\n' ;
		}
		write9.close();     
        vec.clear(); 
		}
		}
	   	
        if(flag  ==  11){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 12;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write10("file11.txt");
		for(int i = 0;i < vec.size();++i) {
           write10 << vec[i] << '\n' ;
		}
		write10.close();     
        vec.clear(); 
		}
		}
	   
       if(flag  ==  12){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 13;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write11("file12.txt");
		for(int i = 0;i < vec.size();++i) {
           write11 << vec[i] << '\n' ;
		}
		write11.close();     
        vec.clear(); 
		}
		}
	   
       if(flag  ==  13){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 14;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write12("file13.txt");
		for(int i = 0;i < vec.size();++i) {
           write12 << vec[i] << '\n' ;
		}
		write12.close();     
        vec.clear(); 
		}
		}
	   
       if(flag  ==  14){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 15;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write13("file14.txt");
		for(int i = 0;i < vec.size();++i) {
           write13 << vec[i] << '\n' ;
		}
		write13.close();     
        vec.clear(); 
		}
		}
	   

		if(flag  ==  15){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 16;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write14("file15.txt");
		for(int i = 0;i < vec.size();++i) {
           write14 << vec[i] << '\n' ;
		}
		write14.close();     
        vec.clear(); 
		}
		}
	   
        if(flag  ==  16){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 17;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write15("file16.txt");
		for(int i = 0;i < vec.size();++i) {
           write15 << vec[i] << '\n' ;
		}
		write15.close();     
        vec.clear(); 
		}
		}
	   
       if(flag  ==  17){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 18;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write16("file17.txt");
		for(int i = 0;i < vec.size();++i) {
           write16 << vec[i] << '\n' ;
		}
		write16.close();     
        vec.clear(); 
		}
		}
	   	
        if(flag  ==  18){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 19;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write17("file18.txt");
		for(int i = 0;i < vec.size();++i) {
           write17 << vec[i] << '\n' ;
		}
		write17.close();     
        vec.clear(); 
		}
		}
	   
       if(flag  ==  19){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 20;
		i = 0;
		std::sort(vec.begin(),vec.end());
        std::ofstream write18("file19.txt");
		for(int i = 0;i < vec.size();++i) {
           write18 << vec[i] << '\n' ;
		}
		write18.close();     
        vec.clear(); 
		}
		}
	   	
       if(flag  ==  20){		
		vec.push_back(stoi(line));
		i +=(line.size() + 1);
		if(i >= count) {
		flag = 21;
		std::sort(vec.begin(),vec.end());
        std::ofstream write19("file20.txt");
		for(int i = 0;i < vec.size();++i) {
           write19 << vec[i] << '\n' ;
		}
		write19.close();     
        vec.clear(); 
		}
		}
	   	
		

}

        readfile.close();



      ///////// file1 and  file2 into outtext.txt
	    std::ifstream file1("file1.txt");
		std::ifstream file2("file2.txt");
		std::ofstream file ("output.txt");

        std::ifstream file3("file3.txt");
		std::ifstream file4("file4.txt");
		std::ofstream filea("output1.txt");
 
        std::ifstream file5("file5.txt");
		std::ifstream file6("file6.txt");
		std::ofstream fileb("output2.txt");

        std::ifstream file7("file7.txt");
		std::ifstream file8("file8.txt");
		std::ofstream filec("output3.txt");

        std::ifstream file9("file9.txt");
		std::ifstream file10("file10.txt");
		std::ofstream filed("output4.txt");

        std::ifstream file11("file11.txt");
		std::ifstream file12("file12.txt");
		std::ofstream filee("output5.txt");
 
        std::ifstream file13("file13.txt");
		std::ifstream file14("file14.txt");
		std::ofstream filef("output6.txt");

        std::ifstream file15("file15.txt");
		std::ifstream file16("file16.txt");
		std::ofstream fileg("output7.txt");

        std::ifstream file17("file17.txt");
		std::ifstream file18("file18.txt");
		std::ofstream fileh("output8.txt");

        std::ifstream file19("file19.txt");
		std::ifstream file20("file20.txt");
		std::ofstream filek("output9.txt");
         


    	std::ifstream  out("output.txt");
		std::ifstream  out1("output1.txt");
		std::ofstream  fout("put.txt");

		std::ifstream  out2("output2.txt");
		std::ifstream  out3("output3.txt");
		std::ofstream  fout1("put1.txt");

     	std::ifstream  out4("output4.txt");
		std::ifstream  out5("output5.txt");
		std::ofstream  fout2("put2.txt");

		std::ifstream  out6("output6.txt");
		std::ifstream  out7("output7.txt");
		std::ofstream  fout3("put3.txt");

    	std::ifstream  out8("output8.txt");
		std::ifstream  out9("output9.txt");
		std::ofstream  fout4("put4.txt");




     	std::ifstream  put("put1.txt");
		std::ifstream  put1("put2.txt");
		std::ofstream  fput("fput.txt");

		std::ifstream  put2("put3.txt");
		std::ifstream  put3("put4.txt");
		std::ofstream  fput1("fput1.txt");




     	std::ifstream  afin("fput.txt");
		std::ifstream  afin2("fput1.txt");
		std::ofstream  affin("afin.txt");



		std::ifstream  finall("put.txt");
        std::ifstream  finall1("afin.txt");
		std::ofstream  ofinal("ofinal.txt");



 		merge_to_file(file1, file2, file);		
 		merge_to_file(file3, file4, filea);
     	merge_to_file(file5, file6, fileb);
 		merge_to_file(file7, file8, filec);
    	merge_to_file(file9, file10, filed);
 		merge_to_file(file11, file12, filee);
     	merge_to_file(file13, file14, filef);
 		merge_to_file(file15, file16, fileg); 
		merge_to_file(file17, file18, fileh);
 		merge_to_file(file19, file20, filek);

    	file.close();
		filea.close();
        fileb.close();
    	filec.close();
		filed.close();
        filee.close();
        filef.close();
    	fileg.close();
		fileh.close();
        filek.close();

 		to_file(out,out1,fout);		
 	    to_file(out2,out3,fout1);
        to_file(out4,out5,fout2);
 		to_file(out6,out7,fout3);
    	to_file(out8,out9,fout4);

         fout.close();
         fout1.close();	
         fout2.close();
         fout3.close();			
		 fout4.close();
		 
 		to_file(put,put1,fput);		
 	    to_file(put2,put3,fput1);

          fput.close();
		  fput1.close();


        to_file(afin,afin2,affin);

         affin.close();
		 
        to_file(finall,finall1,ofinal);
 
         ofinal.close();

		 }

void merge_to_file(std::ifstream &fin1, std::ifstream &fin2, std::ofstream &fout){
    std::string token1;
    std::string token2;
    fin1 >> token1;
    fin2 >> token2;
    int num1 = std::stoi(token1);
    int num2 = std::stoi(token2);
    while(!(fin1.eof()) && !(fin2.eof())){
        if(num1 < num2){
            fout << num1 << '\n';
            fin1 >> token1;
            num1 = std::stoi(token1);
        }
        else{
            fout << num2 << '\n';
            fin2 >> token2;
            num2 = std::stoi(token2);
        }
    }
    while(!(fin1.eof())){
        fout << num1 << '\n';
        fin1 >> token1;
        num1 = std::stoi(token1);
    }
    while(!(fin2.eof())){
        fout << num2 << '\n';
        fin2 >> token2;
        num2 = std::stoi(token2);
    }
}


void to_file(std::ifstream &fin1, std::ifstream &fin2, std::ofstream &fout){
    std::string token1;
    std::string token2;
    fin1 >> token1;
    fin2 >> token2;
    int num1 = std::stoi(token1);
    int num2 = std::stoi(token2);
    while(!(fin1.eof()) && !(fin2.eof())){
        if(num1 < num2){
            fout << num1 << '\n';
            fin1 >> token1;
            num1 = std::stoi(token1);
        }
        else{
            fout << num2 << '\n';
            fin2 >> token2;
            num2 = std::stoi(token2);
        }
    }
    while(!(fin1.eof())){
        fout << num1 << '\n';
        fin1 >> token1;
        num1 = std::stoi(token1);
    }
    while(!(fin2.eof())){
        fout << num2 << '\n';
        fin2 >> token2;
        num2 = std::stoi(token2);
    }
}


