#include <iostream>
#include <cstring>

class String {

private:
	char* c_str;
    int size;	
   	

public:
	 String();
	~String();

	bool empty();
	void clear();
	void push_back(char c); 
    void print();
	void pop_back();
    void swap(String& obj);
	void append(int count , char ch);
	int  compare(const String& obj);
	bool start_with(int count,char* c);
	bool ends_with(int count,char* c);
    bool contains(char * cs);
    bool contains(String& obj);
	String  substr(int pos , int count);
    void copy(int count, int pos);
	void resize(int count);
	void replace(int pos ,int count, char* c);
	void insert(int pos, int count, char* c);
	void erase( int pos , int count);
	void at(int pos);
	char& front();
	char& back();
	void find(std::string s, int pos);
};




String::String()
:size{},c_str{nullptr}
{
}

String::~String() {
}




char& String::back() {

return c_str[size-1];

}

char& String::front() { 

return c_str[0];

}

void String::at(int pos) {

	for(int i = 0; i < size;++i) {
	
			if(i == pos) {
			 char value = c_str[i];
			 std::cout << value  << " ";
			}
	}
          
} 


void String::erase (int pos, int count) {
    int d = 0;
	int  j = 0; 
	int  k = 0;
	int pos1 = pos+count;
	char* tmp = new char[k+1];
	
     for(int i = pos ; i < size;++i) {
	    if(c_str[j] != c_str[pos]) {
		tmp[d] = c_str[j];
		++d;
		++j;
	
		std::cout << "tmp " << tmp << std::endl;

		}
//		std::cout << "tmp " << tmp << std::endl;
	 }
	// std::cout << "tmp " << tmp << std::endl;
	 delete[]c_str;
	c_str = tmp;
    tmp = nullptr;
}

void String::insert(int pos, int count , char* c){
   int k  =0;
   int j = 0;
char * tmp = new char[k+1];
int pos1 = count +pos;   
 for(int i = pos; i < pos1;++i) {
   tmp[k]  = c_str[i];
   ++k;
   c_str[i]  = c[j];

 	}
 for(int i = 0; i< k;++i){
   c_str[size] = tmp[i];
   ++size;
 }

}

void String::replace(int pos,int count,char* c){
      int j = 0;
		int pos1 = count+pos;
		for(int i = pos; i < pos1; ++i) {
		c_str[i] =c[j];
				++j;
		}

}


void String::resize(int count) {

		std::string s = c_str;

if(count > size) {
   std::cout << " error " << std::endl;
	}

else {
for(int i = 0 ; i < count ; ++i) {
  size--;
  char* tmp = new char[size +1];
  for(int i = 0; i < size; ++i) {
  tmp[i] = c_str[i];
  }
  tmp[size] = '\0';
  delete[] c_str;
  c_str = tmp;
}
}
}

void String::copy( int count,int pos) {
	int i = 0;
char* tmp  = new char;
if(pos > size) {
  std::cout << "Error " << std::endl;
	} 
//	int i =0;

//	char* tmp =  new char[i+1];
	int count1 =  count + pos;

	for(int j = pos ; j < 4;++j ){

     tmp[i] = c_str[j]; 
	// std::cout << "tmp[i] " <<tmp[i] <<std::endl;
	// std::cout << "i " << i; 
	 ++i;
//	 std::cout << tmp << std::endl;
    
	}
	

	c_str = tmp;
  //   std::cout << "i" <<c_str << std::endl;
	//tmp[i] = '\0';
//	std::cout << "tmp[i]"  << tmp[i] << std::endl;
//	delete [] c_str;
//	c_str = tmp;
   // delete [] tmp;
   // tmp = nullptr;
//	std::cout << c_str << " " ;
}


bool String::contains(String& obj) {
 int count= 0;
	for(int i = 0; i < size;++i) {
		for(int j = 0; j < obj.size;++j) {
		  if(c_str[i] == obj.c_str[j] ){
		  ++count;
		  if(count == obj.size) {
		  return true;
		  	}
		  	}
			}
		}

	return false;
}


bool String::contains(char* cs){

	int count= 0;
for(int i = 0; i < size-1; ++i) {	
  for(int j = 0 ; j < strlen(cs); ++j){
	if(cs[j] == c_str[i]){
			++count;
	if(count == strlen(cs))
	{
	return true;
	    }
      }
   }
}
	return  false;
}



String String::substr(int pos ,int count) {
	int j = 0;
		++j;
  char* tmp = new char[j+1];
	int pos1 = pos + count;
		if(!empty()) {

	for(int i = pos; i < pos1;++i ){	
	  tmp[j] = c_str[i]; 
	 
	}
	 tmp[j] = '\0';
		}
	 delete[] c_str;
     c_str = tmp;
	 delete[] tmp;
	 tmp = nullptr;
      return *this;
}


bool String::ends_with(int count, char * c){	

		int size1 = size - count;
		for(int i = size; i > count;--i) {
				
		if(c_str[i] == c[i]){
		return true;
			}
			}

		return false;

} 


bool String::start_with(int count ,char* c) {
 for(int i = 0; i < count;++i) {
 if(c_str[i] == c[i] ){
 	return true;
	 }
 		}
	return false;
	}

bool String::empty() {
	return  size == 0;
}

void String::clear() {
	delete[] c_str;
	c_str = nullptr;
 	size = 0;
}

void String::print() {

for(int i = 0; i < size  ; ++i) {
   std::cout << c_str[i] << " ";
	}
}

void String::append(int count , char ch){

  if(empty()) {
	c_str = new char[size + 1];
    for(int i = 0;i < count;++i) {
	  c_str[size++] = ch;
		}
	c_str[size]  ='\0';
	}
else {
  
  char* tmp = new char [size +1];

   for(int i = 0; i < size; ++i) {
   tmp[i] = c_str[i];
   		}
   for(int i = 0; i < count; ++i) {
      tmp[size++] = ch;
   		}
    tmp[size] = '\0';
	delete [] c_str;
	c_str = tmp;
	tmp = nullptr;
	}
}


void String::swap(String& obj) {

		char* tmp = c_str;
		c_str = obj.c_str;
		obj.c_str = tmp;
        
		int tmp_size = size;
		size = obj.size;
		obj.size = tmp_size;

}


int String::compare(const String& obj) {
if(this->size != obj.size ){
  return false;
	}
else {
 for(int i = 0; i < size;++i) {
	  if(c_str[i] == obj.c_str[i]) {
	  return true;
	  }	
 	} 
}
return false;

}

void String::pop_back() {
if(!empty()) {
  size--;
  char* tmp = new char[size +1];
  for(int i = 0; i < size; ++i) {
  tmp[i] = c_str[i];
  }
  tmp[size] = '\0';
  delete[] c_str;
  c_str = tmp;
	}
	else {
  std::cout << "Empty  string " << std::endl;
	}
}

void String::push_back(char ch) {
  if(this->empty()) {
   size++;

   c_str = new char[size +1 ];

   	 c_str[size-1] = ch;
   c_str[size] = '\0';
  } else {
 size++;
char* tmp = new char[size +1];
  for(int i = 0; i < size ;++i) {
    tmp[i] = c_str[i];
	}    
  tmp[size - 1] = ch;
   tmp[size] = '\0';
   delete[] c_str;
   c_str = tmp;
   tmp = nullptr;
  }
}


int main() {

  String a;
  String c;
  String b;
  a.push_back('a');
  a.push_back('r');
  a.push_back('o');
 // a.print();
  c.push_back('a');
  c.push_back('r');
  c.push_back('m');
  c.push_back('a');
  c.push_back('n');
  //std::cout << c.back();
 // std::cout << c.front();
 // c.at(4);
 // c.erase(2,1);
 // c.insert(2,3,"tt");
//  c.replace(2,2,"qq");
 // c.resize(4);
 // c.copy(2,2);
//  std::cout << a.contains(c);
//  c.substr(2,2);
// std::cout << c.ends_with(3,"ar");

//  std::cout <<c.start_with(3,"arm");
   c.print();
  // a.append(3,'*'); a.swap(c);
//  std::cout << a.compare(c) << std::endl; a.print();
  //std::cout << a.empty();
}
