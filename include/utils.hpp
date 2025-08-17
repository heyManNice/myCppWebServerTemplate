#pragma once

#include <thread>
#include <chrono>


/// @brief 阻塞当前线程
/// @param ms 毫秒
void sleep(int64_t ms){
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}