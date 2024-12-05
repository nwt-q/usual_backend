#include"LoginController.h"
#include <iostream>

LoginJsonVO::Wrapper LoginController::execQueryLogin(LoginQuery::Wrapper& condtion) {
	auto res = LoginJsonVO::createShared();
	std::cout << condtion->username.getValue({}) << condtion->password.getValue({}) << "\n";
	if (condtion->username.getValue({}) == "admin" && condtion->password.getValue({}) == "123456") {
		
	}
	auto result = LoginDTO::createShared();
	result->status = 200;
	res->success(result);
	return 	res;
}
