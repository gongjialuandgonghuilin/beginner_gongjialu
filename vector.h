#include<class T>
using namespace std;
class <T> vector
{
    public:
        friend std:ostream& operator<< (std::ostream& os,const vector<T>&v)
        {
            for(int i=0;i<v.m_size;++i)
                os<<v.m_data[i]<<" ";
            return os;
        }
        vector(int 
