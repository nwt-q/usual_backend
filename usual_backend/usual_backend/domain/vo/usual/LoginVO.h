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

#ifndef _LOGIN_VO_
#define _LOGIN_VO_

#include "../../GlobalInclude.h"
#include "../../dto/usual/LoginDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class LoginJsonVO : public JsonVO<LoginDTO::Wrapper> {
	DTO_INIT(LoginJsonVO, JsonVO<LoginDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SAMPLE_VO_