#ifndef THREAD_H
#define THREAD_H
#include <boost/noncopyable.hpp>
#include <functional>
#include <pthread.h>
class Thread : boost::noncopyable
{
public:

    typedef std::function<void()> ThreadCallback;

    Thread(ThreadCallback cb);
    ~Thread();

    void start();
    void join();

    static void *runInThread(void *);


private:

    pthread_t _threadId;
    bool _isRun;
    ThreadCallback _callback;
};


#endif  /*THREAD_H*/
