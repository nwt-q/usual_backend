#pragma once
/*
 Copyright EvLast. All rights reserved.

 @Author: EvLast
 @Date: 2024/12/8 0:27:04

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

#ifndef _LOGIN_QUERY_
#define _LOGIN_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例分页查询对象
 */
class LoginQuery : public PageQuery
{
	DTO_INIT(LoginQuery, PageQuery);
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
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_LOGIN_QUERY_