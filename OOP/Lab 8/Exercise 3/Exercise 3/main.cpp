#include <iostream>
using namespace std;

class Book{
    private:
    int m_currentPage = 0;
    int m_currentChapter;
    string m_bookTitle;
    int m_chapter= {10,20,30,40,50,60,70,80,90,100};
    public:
    int pageNum;

    void changeCurrentPage(int newPage){
        m_currentPage = newPage;
    }
    
    int getCurrentChapter(){
        return m_currentChapter;
    }

    string getBookTitle(){
        return m_bookTitle; 
    }
    Book(){
        int request;
        cout << "Hi! This is Book!";
        cout << "Choose the Service: ";
        cout << "1. Book Title";
        cout << "2. Current Chapter";
        cout << "3. Current Page";
        cin >> request;

        if(request=1){
            getBookTitle();
        }
        elif(request = 2){
            return getCurrentChapter();
        }
    }
}

int main(){

    Book();

    

}