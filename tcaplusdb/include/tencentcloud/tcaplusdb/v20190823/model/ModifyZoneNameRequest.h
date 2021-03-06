/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYZONENAMEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYZONENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyZoneName请求参数结构体
                */
                class ModifyZoneNameRequest : public AbstractModel
                {
                public:
                    ModifyZoneNameRequest();
                    ~ModifyZoneNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大区所属的应用实例ID
                     * @return ApplicationId 大区所属的应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置大区所属的应用实例ID
                     * @param ApplicationId 大区所属的应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取待修改名称的大区ID
                     * @return LogicZoneId 待修改名称的大区ID
                     */
                    std::string GetLogicZoneId() const;

                    /**
                     * 设置待修改名称的大区ID
                     * @param LogicZoneId 待修改名称的大区ID
                     */
                    void SetLogicZoneId(const std::string& _logicZoneId);

                    /**
                     * 判断参数 LogicZoneId 是否已赋值
                     * @return LogicZoneId 是否已赋值
                     */
                    bool LogicZoneIdHasBeenSet() const;

                    /**
                     * 获取新的大区名称
                     * @return ZoneName 新的大区名称
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置新的大区名称
                     * @param ZoneName 新的大区名称
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                private:

                    /**
                     * 大区所属的应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 待修改名称的大区ID
                     */
                    std::string m_logicZoneId;
                    bool m_logicZoneIdHasBeenSet;

                    /**
                     * 新的大区名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYZONENAMEREQUEST_H_
