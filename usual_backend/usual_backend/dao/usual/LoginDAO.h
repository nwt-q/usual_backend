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
#ifndef _SAMPLE_DAO_
#define _SAMPLE_DAO_
#include "BaseDAO.h"
#include "../../domain/do/usual/LoginDO.h"
//#include "../../domain/query/sample/SampleQuery.h"

/**
 * 示例表数据库操作实现
 */
class LoginDAO : public BaseDAO
{
public:
	// 用户名查询密码
	list<LoginDO> selectByName(const string& name);
};
#endif // !_SAMPLE_DAO_
