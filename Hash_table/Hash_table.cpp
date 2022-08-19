#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <utility>
#include <algorithm>

template<typename Key, typename Value>
class Hash_table {

		private:
		std::vector<std::list<std::pair<Key,Value>>> vec;
		
		public:
		Hash_table();
		Hash_table(const Hash_table<Key,Value>&);   
		Hash_table( Hash_table<Key,Value>&&);
		Hash_table(int count);
	  ~Hash_table(){};
		bool empty();
		int hashfunction(Key key);
    void insert(Key key,Value value);
		void print();
		void  clear();
		int size();
		void swap(Hash_table<Key,Value>& obj);

};

template <typename Key, typename Value>
void Hash_table<Key, Value>::swap(Hash_table<Key, Value>& obj) {
    auto swap_obj = this->vec;
    this->vec = obj.vec;
    obj.vec = swap_obj;
}

template <typename Key,typename Value>
Hash_table<Key,Value>::Hash_table() = default;

template <typename Key, typename Value> 
Hash_table<Key, Value>::Hash_table(int count) : vec(count) {}


template <typename Key, typename Value>
int Hash_table<Key, Value>::size() {
    return vec.size();
}

template <typename Key, typename Value>
Hash_table<Key, Value>::Hash_table(const Hash_table<Key, Value>& obj) {
    vec = obj.vec;
}


template <typename Key, typename Value>
Hash_table<Key, Value>::Hash_table( Hash_table<Key, Value>&& objmove) {
    vec = std::move(objmove.vec);
}


template<typename Key,typename Value>
void  Hash_table<Key,Value>::clear() {
   if(vec.size() == 0) {
        std::cout << "Vec havn't size " << std::endl;
   		}
   else {
     vec.clear();
     }
	} 

template<typename Key,typename Value>
bool Hash_table<Key,Value>::empty() {
  int sum = vec.size();
			if(0 == sum) {
		  return true;
		}
		return false;
 
}

template <typename Key,typename Value>
int Hash_table<Key,Value>::hashfunction(Key key) { 
   int size1 = vec.size()+1;
   return key % size1;
}



template<typename Key,typename Value>
void Hash_table<Key,Value>::insert(Key key,Value value){
 int size = 0;
	if(vec.size() != 0) {
		    vec[hashfunction(key)].push_back(make_pair(key,value));
	}else {
	vec[++size];
		    vec[hashfunction(key)].push_back(make_pair(key,value));
	}
}

template <typename Key,typename Value>
void Hash_table<Key,Value>::print() {
 for(int i = 0; i < vec.size();++i) {
  auto it  =  vec[i].begin();
   for(it; it != vec[i].end();++it) {
   std::cout <<"First " << it->first << std::endl;
   std::cout << "Second " << it->second << std::endl; 
  		}
	 }
}


int main() {

  Hash_table<int ,std::string> ht(10);
  Hash_table<int ,std::string> vt(10);
  ht.insert(111,"asdzro");
  ht.insert(122,"jame");
  ht.insert(2515,"adsaz");

  vt.insert(11511,"arsdafdzo");
  vt.insert(1262,"jawsadzme");
  vt.insert(205,"assdasaz");

     std::cout <<  ht.empty();
     ht.print();
     ht.clear();
   //ht.print();
	   vt.print();
	   std::cout << std::endl;
   //std::cout << ht.empty();
     vt.swap(ht);
	   ht.print();
}
