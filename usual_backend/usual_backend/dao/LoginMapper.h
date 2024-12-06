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
#ifndef _LOGIN_MAPPER_
#define _LOGIN_MAPPER_

#include "Mapper.h"
#include "../../domain/do/usual/LoginDO.h"

class LoginMapper : public Mapper<LoginDO>
{
public:
	LoginDO mapper(ResultSet* resultSet) const override
	{
		LoginDO data;
        data.setTeacher_id(resultSet->getString(1));
		data.setCourse_id(resultSet->getString(2));
		data.setPassword(resultSet->getString(3));
		data.setUsername(resultSet->getString(4));
		return data;
	}
};

#endif // !_LOGIN_MAPPER_