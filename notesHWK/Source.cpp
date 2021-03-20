#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <vector>
using namespace std;

class Movie {
public:
    Movie(string movieTitle);
    void SetVotes(int numUpVotes, int numDownVotes) {
        upVotes = numUpVotes;
        downVotes = numDownVotes;
    }
    string GetTitle() const { return title; }
    int GetVoteDifference() const { return upVotes - downVotes; }

private:
    string title;
    int upVotes;
    int downVotes;
};

Movie::Movie(string movieTitle) {
    title = movieTitle;
    upVotes = 0;
    downVotes = 0;
}

bool operator<(const Movie& movie1, const Movie& movie2) {
    return movie1.GetVoteDifference() < movie2.GetVoteDifference();
}

int main() {
    vector<Movie> movieList;
    Movie movie1("Batman");
    Movie movie2("Up");
    Movie movie3("It");
    Movie movie4("Frozen");

    movie1.SetVotes(11, 2);
    movie2.SetVotes(15, 13);
    movie3.SetVotes(15, 4);
    movie4.SetVotes(13, 7);

    movieList.push_back(movie1);
    movieList.push_back(movie2);
    movieList.push_back(movie3);
    movieList.push_back(movie4);

    sort(movieList.begin(), movieList.end());

    cout << movieList.back().GetTitle() << " is the best." << endl;

    return 0;
}