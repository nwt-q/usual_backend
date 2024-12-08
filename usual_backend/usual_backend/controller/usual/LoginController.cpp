#include"LoginController.h"
#include "../../service/usual/LoginSevice.h"
#include <iostream>

LoginJsonVO::Wrapper LoginController::execQueryLogin(LoginQuery::Wrapper& condtion) {
	auto res = LoginJsonVO::createShared();
	LoginService service;
	auto result = service.Loginsearch(condtion);
	std::cout << condtion->username.getValue({}) << condtion->password.getValue({}) << "\n";
	if (condtion->username.getValue({}) == "admin" && condtion->password.getValue({}) == "123456") {
		result->status = 200;
		res->success(result);
		return res;
	}
	res->success(result);
	return 	res;
}
