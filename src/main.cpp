#include "types.hpp"
#include "model.hpp"


HTML index(){
    return crow::mustache::load_text("index.html");
}

JSON userTest(){
    auto user = UserModel("John", 25);
    return JSONResModel(200, "userTest测试成功获取", user);
}

JSON queryTest(String str,Number num){
    auto obj = Object({
        {"message", "对象嵌套测试"}
    });
    auto data = Object({
        {"num", num},
        {"str", str},
        {"obj", obj}
    });
    return JSONResModel(200, "queryTest测试成功获取", data);
}


int main()
{
    WebServer sv;

    ROUTE_GET(sv,"/", index);
    ROUTE_GET(sv,"/userTest", userTest);
    ROUTE_GET(sv,"/hello/<string>/<int>", queryTest);

    sv.bindaddr("127.0.0.1").port(18080).run();
}