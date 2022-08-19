#include <iostream>
#include <initializer_list>
template <typename T>
 class Vector {
  public:
    Vector();
    ~Vector();
  public:
    void clear();
    void shrink_to_fit();
    int* data();
    int capacity();
    void erase(int);
    int size() const;
    void insert(int,int);
    int begin();
    int end();
    bool empty();
    void push_back(int);
    int at(int);
    void pop_back();
private:
    int m_cap;
    int m_size;
    T* m_buf;
};
enum {bit_count = 8 * sizeof(size_t)};
template <>
class Vector<bool> {
public:
    Vector();
    Vector(const Vector<bool>&);
    Vector(Vector<bool>&&);
    Vector(std::initializer_list<bool>);
    Vector(size_t);
    Vector(size_t, bool);
    ~Vector(){};
public:
    void insert(size_t, bool);
    void erase(size_t);
    void push_back(bool);
    void pop_back();
    bool empty() {
    if (m_size == 0) {
        return true;
    }
    else {
        return false;
    }
}
private:
    size_t m_cap;
    size_t m_size;
    size_t* m_buf;
public:
    class Reference {
    public:
        Reference(size_t*, size_t);
        Reference(const Reference&);
        Reference(Reference&&);
        Reference& operator=(const Reference&);
        Reference& operator=(bool);
        operator bool() const;
        void flip();
    private:
        size_t* ptr;
        size_t index;
        bool val;
    };
public:
    Reference operator[](size_t pos) {
        return Reference(m_buf, pos);
    }
    const Reference operator[](size_t pos) const {
        return Reference(m_buf, pos);
    }
};
Vector<bool>::Reference::Reference(size_t* pt, size_t ind): ptr{pt}, index{ind}, val{} {
    val = ptr[index / bit_count] & (1 << (index % bit_count));
}
void Vector<bool>::Reference::flip() {
    ptr[index/ bit_count] ^= (1 << (index % bit_count));
    val = !val;
}
Vector<bool>::Reference::Reference(const Vector<bool>::Reference& oth): ptr{oth.ptr}, index{oth.index}, val{oth.val} { }
Vector<bool>::Reference& Vector<bool>::Reference::operator=(const Vector<bool>::Reference& oth) {
    if (val != oth.val) {
        this->flip();
    }
    return *this;
}
Vector<bool>::Reference& Vector<bool>::Reference::operator=(bool oth) {
    if (val != oth) {
        this->flip();
    }
    return *this;
}
Vector<bool>::Reference::operator bool() const {
    return val;
}
Vector<bool>::Vector(const Vector<bool>& oth): m_cap{oth.m_cap}, m_size{oth.m_size} {
    m_buf = new size_t[m_cap / bit_count];
    for (int i = 0; i < (m_cap / bit_count); ++i) {
        m_buf[i] = oth.m_buf[i];
    }
}
Vector<bool>::Vector(std::initializer_list<bool> init): m_cap{}, m_size{init.size()}, m_buf{} {
    if (init.size()) {
        while (m_cap < init.size()) {
            m_cap += bit_count;
        }
        m_buf = new size_t[m_cap / bit_count];
        size_t bit = 1;
        int i = 0;
        for (auto it = init.begin(); it != init.end(); ++it, ++i) {
            if (*it) {
                m_buf[i / bit_count] |= (1 << (i % bit_count));
            }
            bit <<= 1;
        }
    }
}
Vector<bool>::Vector(size_t count): m_cap{}, m_size(), m_buf{} {
    if (count) {
        while (m_cap < count) {
            m_cap += bit_count;
        }
        m_buf = new size_t[m_cap / bit_count];
    }
}
Vector<bool>::Vector(size_t count, bool val): m_cap{}, m_size{count}, m_buf{} {
    if (count) {
        while (m_cap < count) {
            m_cap += bit_count;
        }
        m_buf = new size_t[m_cap / bit_count];
        if (val) {
            size_t bit = 1;
            for (int i = 0; i < m_size; ++i) {
                m_buf[i / bit_count] |= bit;
                bit << 1;
            }
        }
    }
}
void Vector<bool>::insert(size_t pos, bool val) {
    if (this->empty()) {
        m_cap = bit_count;
        m_buf = new size_t[1];
        m_buf[m_size++] = val;
        return;
    }
    if (m_size == m_cap) {
        m_cap += bit_count;
        size_t* ptr = new size_t[m_cap / bit_count];
        for (int i = 0; i < (m_size/ bit_count); ++i) {
            ptr[i] = m_buf[i];
            m_buf = ptr;
            ptr = nullptr;
        }
        for (size_t i = m_size; i > pos; --i) {
            (*this)[i] = (*this)[i - 1];
        }
        (*this)[pos] = val;
        ++m_size;
    }
}
void Vector<bool>::erase(size_t pos) {
    if (this->empty()) {
        return;
    }
    for (size_t i = m_size; i > pos; --i) {
        (*this)[i - 1] = (*this)[i];
    }
    --m_size;
}
void Vector<bool>::push_back(bool val) {
    if (this->empty()) {
        m_cap = bit_count;
        m_buf = new size_t[1];
        (*this)[m_size++] = val;
        return;
    }
    if (m_size == m_cap) {
        m_cap += bit_count;
        size_t* ptr = new size_t[m_cap / (bit_count)];
        for (int i = 0; i < (m_size / bit_count); ++i) {
            ptr[i] = m_buf[i];
        }
        delete[] m_buf;
        m_buf = ptr;
        ptr = nullptr;
    }
    (*this)[m_size++] = val;
}
void Vector<bool>::pop_back() {
    (*this)[m_size--] = false;
}
int main() {

	Vector<bool> a(1,false);
	a.push_back(true);

}
