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

#ifndef _SAMPLE_SERVICE_
#define _SAMPLE_SERVICE_
//#include <list>
#include "domain/query/usual/LoginQuery.h"
#include "domain/dto/usual/LoginDTO.h"
#include "dao/usual/LoginDAO.h"

/**
 * ʾ������ʵ�֣���ʾ������ʾ������ʵ��
 */
class LoginService
{
public:
	// ��ҳ��ѯ����Ա����
	LoginDTO::Wrapper Loginsearch(const LoginQuery::Wrapper& query);
};

#endif // !_SAMPLE_SERVICE_