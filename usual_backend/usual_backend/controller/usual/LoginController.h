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

// 0 ����API������ʹ�ú�
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

/*	����: ƽʱ�ֲ�ѯ������
 *
 *  ����: 1. ѧ��ƽʱ�ɼ���Ϣ(��ҳ)
 */
class LoginController : public oatpp::web::server::api::ApiController // 1 �̳п�����
{
	// 2 ����������������
	API_ACCESS_DECLARE(LoginController);

public:
	//�ӿڶ���------------------------------------------------------------------------------
	//��ѯ��֯���г�Ա��Ϣ
	ENDPOINT_INFO(queryLogin) {
		info->summary = u8"������Ȩ";
		//API_DEF_ADD_AUTH();
		API_DEF_ADD_RSP_JSON(LoginJsonVO::Wrapper);
		API_DEF_ADD_QUERY_PARAMS(String, "username", ZH_WORDS_GETTER("login.username"), "admin", false);
		API_DEF_ADD_QUERY_PARAMS(String, "password", ZH_WORDS_GETTER("login.password"), "123456", false);
	}

	//��Ӧ�ӿ�------------------------------------------------------------------------------
	//��Ӧ��֯���г�Ա��Ϣ
	ENDPOINT(API_M_GET,"/login/admin", queryLogin, QUERIES(QueryParams, params)) {

		API_HANDLER_QUERY_PARAM(condtion, LoginQuery, params);

		return createDtoResponse(Status::CODE_200, execQueryLogin(condtion));
	};

private:
	// ������֤
	LoginJsonVO::Wrapper execQueryLogin(LoginQuery::Wrapper &condtion);
};

// 0 ȡ��API������ʹ�ú�
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif //_LOGINCONTROLLER_