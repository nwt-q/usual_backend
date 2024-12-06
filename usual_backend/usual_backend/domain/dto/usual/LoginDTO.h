#pragma once
/*
 Copyright EvLast. All rights reserved.

 @Author: EvLast
 @Date: 2022/10/25 10:59:38

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _LOGIN_DTO_
#define _LOGIN_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 *  返回给前端的数据
 */
class LoginDTO : public oatpp::DTO
{
	DTO_INIT(LoginDTO, DTO);

	//唯一teacher_id
    DTO_FIELD(String, teacher_id);
    DTO_FIELD_INFO(teacher_id) {
		info->description = ZH_WORDS_GETTER("login.teacher_id");
	}

	// 用户名
	DTO_FIELD(String, username);
	DTO_FIELD_INFO(username) {
		info->description = ZH_WORDS_GETTER("login.username");
	}
	// 密码
	DTO_FIELD(String, password);
	DTO_FIELD_INFO(password) {
		info->description = ZH_WORDS_GETTER("login.password");
	}
	// 是否验证通过
	DTO_FIELD(Int32, status);
	DTO_FIELD_INFO(status) {
		info->description = ZH_WORDS_GETTER("login.password");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_LOGIN_DTO_