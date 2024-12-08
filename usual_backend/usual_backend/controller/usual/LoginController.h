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

#ifndef _LOGINCONTROLLER_
#define _LOGINCONTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/query/PageQuery.h"
#include "domain/GlobalInclude.h"
#include "domain/dto/usual/LoginDTO.h"
#include "domain/vo/usual/LoginVO.h"
#include "domain/query/usual/LoginQuery.h"

// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

/*	名称: 平时分查询控制器
 *
 *  功能: 1. 学生平时成绩信息(分页)
 */
class LoginController : public oatpp::web::server::api::ApiController // 1 继承控制器
{
	// 2 定义控制器访问入口
	API_ACCESS_DECLARE(LoginController);

public:
	//接口定义------------------------------------------------------------------------------
	//查询组织所有成员信息
	ENDPOINT_INFO(queryLogin) {
		info->summary = u8"登入授权";
		//API_DEF_ADD_AUTH();
		API_DEF_ADD_RSP_JSON(LoginJsonVO::Wrapper);
		API_DEF_ADD_QUERY_PARAMS(String, "username", ZH_WORDS_GETTER("login.username"), "admin", false);
		API_DEF_ADD_QUERY_PARAMS(String, "password", ZH_WORDS_GETTER("login.password"), "123456", false);
	}

	//响应接口------------------------------------------------------------------------------
	//响应组织所有成员信息
	ENDPOINT(API_M_GET,"/login/admin", queryLogin, QUERIES(QueryParams, params)) {

		API_HANDLER_QUERY_PARAM(condtion, LoginQuery, params);

		return createDtoResponse(Status::CODE_200, execQueryLogin(condtion));
	};

private:
	// 登入验证
	LoginJsonVO::Wrapper execQueryLogin(LoginQuery::Wrapper &condtion);
};

// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif //_LOGINCONTROLLER_