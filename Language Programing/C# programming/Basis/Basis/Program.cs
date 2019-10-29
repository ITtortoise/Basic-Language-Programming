using System;
struct Books
{
    public string title;
    public string author;
    public string subject;
    public int book_id;
};
namespace Basic
{
    class Program
    {
        static void Main(string[] args)
        {
            Books book1, book2;
            book1.title = "c programming";
            book1.author = "Nuha ali";
            book1.subject = "C programming tutorial";
            book1.book_id = 64325353;

            book2.title = "c++ programming";
            book2.author = "telecom billing ";
            book2.subject = "C++ programming tutorial";
            book2.book_id = 64325353;

            Console.WriteLine("Book 1 title : {0}", book1.title);
            Console.WriteLine("Book 1 author : {0}", book1.author);
            Console.WriteLine("Book 1 subject : {0}", book1.subject);
            Console.WriteLine("Book 1 book_id : {0}", book1.book_id);
            Console.WriteLine("\n");
            Console.WriteLine("Book 2 title : {0}", book2.title);
            Console.WriteLine("Book 2 author : {0}", book2.author);
            Console.WriteLine("Book 2 subject : {0}", book2.subject);
            Console.WriteLine("Book 2 book_id : {0}", book2.book_id);


        }
    }
}
