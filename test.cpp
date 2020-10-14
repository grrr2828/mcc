#include <fstream>
#include <iostream>
#include <vector>
using namespace std;


const int maxLine = 50;
void scan(const char* fileName, vector<char>& buffer)
{
    ifstream in( fileName );
    if( !in.is_open() )
    { 
       return;
    }

    char lineBuffer[maxLine];
    
    while( !in.eof() )
    {
        in.getline( lineBuffer, maxLine );

        for (size_t i = 0; i < maxLine; i++)
        {
            char ch = lineBuffer[ i ];
            if( ch == '\000' ){
                break;
            }

            buffer.push_back(ch);
        }
    }

    in.close();
}

int main()
{

    vector<char> buffer;
    scan("test.txt", buffer);

    system("pause");
    return 0;
}