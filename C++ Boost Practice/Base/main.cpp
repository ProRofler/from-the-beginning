#include <iostream>
#include <boost/asio.hpp>
#include <chrono>
#include <thread>

void AsyncWait (boost::asio::io_context& BoostIOContext){
    std::cout << "************ running async wait ************\n";
    boost::asio::steady_timer timer1 {BoostIOContext, std::chrono::seconds{1}};
    boost::asio::steady_timer timer2 {BoostIOContext, std::chrono::seconds{2}};

    timer1.async_wait([](const boost::system::error_code&){std::cout << std::this_thread::get_id() << " Async wait 1 in progress" << '\n';});
    //...
    //...
    std::cout << std::this_thread::get_id() << " ID outside of async_wait\n"; 

    timer2.async_wait([](const boost::system::error_code&){std::cout << std::this_thread::get_id() << " ID Async wait 2 in progress" << '\n';});

    std::thread thread1{
        [&BoostIOContext](){BoostIOContext.run();}
    };

    std::thread thread2{
        [&BoostIOContext](){BoostIOContext.run();}
    };


    thread1.join();
    thread2.join();
    
    std::cout << "************** END ****************" << '\n';
}

void RunResolver (boost::asio::io_context& BoostIOContext){
    std::cout << "\n************ running resolver ************\n";
    boost::asio::ip::tcp::resolver resolver{BoostIOContext};
    auto query = boost::asio::ip::tcp::resolver::query {"yandex.ru", "80"};
    auto it = resolver.resolve(query);

    boost::asio::ip::tcp::endpoint ep = *it;

    std::cout << ep.address().to_string() << ":" << ep.port() << '\n' << '\n';
    BoostIOContext.run();

 }

 void RunAsyncResolver(){

    std::cout << "\n************ running async resolver ************\n";
    boost::asio::io_context BoostIOContext;
    boost::asio::ip::tcp::resolver resolver{BoostIOContext};
    auto query = boost::asio::ip::tcp::resolver::query {"yandex.ru", "80"};


    resolver.async_resolve(
        query,
        [](const boost::system::error_code& ec, boost::asio::ip::tcp::resolver::iterator it){
            for (it; it != boost::asio::ip::tcp::resolver::iterator{}; it++){
                boost::asio::ip::tcp::endpoint ep = *it;
                std::cout << ep.address().to_string() << ":" << ep.port() << '\n' << '\n';
            }
        });
    
    BoostIOContext.run();

 }

int main(int, char**){

    //boost context breaks if passed by reference to different functions, works only in the first one 
    boost::asio::io_context BoostIOContext;
    AsyncWait(BoostIOContext);
    RunResolver(BoostIOContext);
    RunAsyncResolver();
    return 0;
}
