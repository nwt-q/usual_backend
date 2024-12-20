#pragma once
/*
 Copyright Zero One Star. All rights reserved.
 
 @Author: EvLast
 @Date: 2022/10/24 23:01:31
 
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
#ifndef _SEVERCONFIGINFO_H_
#define _SEVERCONFIGINFO_H_
#include "Macros.h"
#include <string>
/**
 * 服务器信息实体，用于记录当前服务器连接服务或自身服务信息
 */
class ServerInfo
{
private:
	// 成员初始化
	void init() {}
	// 定义单例
	DECLARE_INSTANCE(ServerInfo);
	// 服务器端口
	CC_SYNTHESIZE(std::string, serverPort, ServerPort);
	// Nacos配置参数
	CC_SYNTHESIZE(std::string, nacosAddr, NacosAddr);
	CC_SYNTHESIZE(std::string, nacosNs, NacosNs);
	// 注册服务配置ID
	CC_SYNTHESIZE(std::string, nacosRegFileID, NacosRegFileID);
};
#endif // _SEVERCONFIGINFO_H_