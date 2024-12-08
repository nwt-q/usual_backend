#pragma once
/*
 Copyright EvLast. All rights reserved.

 @Author: EvLast
 @Date: 2023/02/17 16:25:30

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
#ifndef _LOGINDO_H_
#define _LOGINDO_H_

#include "../DoInclude.h"

/**
 * 测试菜单数据库实体
 */
class LoginDO
{
	//用户名
	CC_SYNTHESIZE(string, username, Username);
	// 密码
	CC_SYNTHESIZE(string, password, Password);

	//唯一id 
    CC_SYNTHESIZE(string, teacher_id, Teacher_id);

	// 教授课程
    CC_SYNTHESIZE(string, course_id, Course_id);
public:
	LoginDO() {};
	LoginDO(string password, string username, string teacher_id, string course_id)
	{
		this->password = password;
		this->username = username;
        this->teacher_id = teacher_id;
        this->course_id = course_id;
	}
};
#endif // !_LOGINDO_H_