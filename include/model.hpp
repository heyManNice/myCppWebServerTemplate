#pragma once
#include "types.hpp"


/// @brief 用户数据模型
/// @param username 
/// @param age 
/// @return
Object UserModel(
    String username,
    Number age
){
    return Object({
        {"username", username},
        {"age", age}
    }); 
}


/// @brief JSON类型响应模型
/// @param status 状态码
/// @param message 消息
/// @param data 数据
Object JSONResModel(
    Number status,
    String message,
    Object data
){
    return Object({
        {"status", status},
        {"message", message},
        {"data", data}
    });
}