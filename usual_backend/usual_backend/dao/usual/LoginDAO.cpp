/*
 Copyright EvLast. All rights reserved.

 @Author: EvLast
 @Date: 2022/10/25 14:26:52

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
#include "stdafx.h"
#include "../Mappers.h"
#include <sstream>
#include "LoginDAO.h"


list<LoginDO> LoginDAO::selectByName(const string& name)
{
	stringstream sql;
	sql << "SELECT teacher_id, course_id, teacher_power, teacher_name FROM teachers WHERE teacher_name = ?";
	LoginMapper mapper;
	string sqlStr = sql.str();
	return sqlSession->executeQuery<LoginDO, LoginMapper>(sqlStr, mapper, "%s",name);
}
