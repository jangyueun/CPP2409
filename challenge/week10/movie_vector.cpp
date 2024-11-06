#include <vector>
#include <iostream>
using namespace std;

class Movie{
public:
    string name;
    double score;

    Movie(string n, double s){
        name=n;
        score=s;
    }

    void Print(){
        cout<<name<<": "<<score<<endl;
    }
};

int main(){
    vector<Movie> list;

    list.push_back(Movie("titinic",9.9));
    list.push_back(Movie("gone with the wind",9.6));
    list.push_back(Movie("terminator",9.7));

    for(auto& l:list){
        l.Print();
    }

    return 0;
}