#include <locale>
#include <iostream>
#include <iomanip>
#include <sys/time.h>
#include <cstdio>

int main()
{
	timeval ctime;
	time_t	secs;

	// gettimeofday(&ctime, NULL);
	// std::cout << ctime.tv_sec * 1000000 + ctime.tv_usec << std::endl;

	// secs = std::chrono::system_clock::now().time_since_epoch().count();
	// std::cout << secs;
	secs = std::chrono::system_clock::now().time_since_epoch().count() / 1000000;
	std::cout << std::put_time(std::localtime(&secs), "%Y%m%d_%H%M%S");
return (0);
}
