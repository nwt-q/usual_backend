#include "LoginSever.h"

LoginDTO::Wrapper LoginService::Loginsearch(const LoginQuery::Wrapper& query)
{
	auto result = LoginDTO::createShared();
	LoginDAO dao;
	auto res = dao.selectByName(query->username.getValue({}));
	if (res.empty()) {
		return result;
	}
	if (query->username.getValue({}) == res.front().getUsername() &&
		query->password.getValue({}) == res.front().getPassword()) {
		//res->token = JWTUtil::generateTokenByHmac(res, "123456");
		//���潫������ȥ��
		for (auto& item : res) {
			result->username = item.getUsername();
			result->password = item.getPassword();
			//�����������ȥ
			result->teacher_id = item.getTeacher_id();
			result->status = 200;
		}
	}
	return result;
}