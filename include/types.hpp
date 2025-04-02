#pragma once

#include "crow.h"

using Object = crow::json::wvalue;
using ObjReader = crow::json::rvalue;
using String = std::string;
using Number = int64_t;
using WebServer = crow::SimpleApp;

using HTML = String;
using JSON = Object;


#define ROUTE_GET(server,url, callback) CROW_ROUTE(server, url).methods(crow::HTTPMethod::GET)(callback);