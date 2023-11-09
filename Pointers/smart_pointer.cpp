#include <iostream>
#include <vector>
#include <memory>

class Book
{
public:
    Book(std::string title, std::string author) : title(title), author(author) {}

    void displayInfo() const
    {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }

    void setTitle(std::string newTitle)
    {
        title = std::move(newTitle);
    }

    void setAuthor(std::string newAuthor)
    {
        author = std::move(newAuthor);
    }

private:
    std::string title;
    std::string author;
};

int main()
{
    std::vector<std::shared_ptr<Book>> bookList;
    std::vector<std::shared_ptr<Book>> bookList2;

    auto book1 = std::make_shared<Book>("The Great Gatsby", "F. Scott Fitzgerald");
    auto book2 = std::make_shared<Book>("The Catcher in the Rye", "J.D. Salinger");
    auto book3 = std::make_shared<Book>("Pride and Prejudice", "Jane Austen");
    auto book4 = std::make_shared<Book>("To Kill a Mockingbird", "Harper Lee");
    auto book5 = std::make_shared<Book>("The Color Purple", "Alice Walker");

    // Adding books using shared_ptr
    bookList.push_back(book1);
    bookList.push_back(book2);
    bookList.push_back(book3);
    bookList.push_back(book4);
    bookList.push_back(book5);

    bookList2 = std::move(bookList);

    std::cout << "First book list: " << std::endl;

    // Displaying book information
    if (!bookList.empty())
    {
        for (const auto &book : bookList)
        {
            book->displayInfo();
        }
    }

    std::cout << "Second book list: " << std::endl;

    for (const auto &book : bookList2)
    {
        book->displayInfo();
    }

    // No need to manually delete objects, smart pointers handle it

    return 0;
}
