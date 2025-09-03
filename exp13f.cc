//overloading (polymorphism)
//operator overloading example 
//exp13f

#include <iostream>
using namespace std;

class Song {
public:
    string title;

    Song(string t = "") {
        title = t;
    }

    // Operator overloading 
    Song operator+(const Song& s) {
        return Song(title + " & " + s.title);
    }
};

int main() {
    Song s1("Shape of You");
    Song s2("Perfect");
    Song s3("Galway Girl");
    //playlist 
    Song playlist = s1 + s2 + s3;

    cout << "Playlist: " << playlist.title << endl;

    return 0;
}
/*
OUTPUT 

Playlist: Shape of You & Perfect & Galway Girl 

*/
