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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEACCESSREGIONSBYDESTREGIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEACCESSREGIONSBYDESTREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeAccessRegionsByDestRegion请求参数结构体
                */
                class DescribeAccessRegionsByDestRegionRequest : public AbstractModel
                {
                public:
                    DescribeAccessRegionsByDestRegionRequest();
                    ~DescribeAccessRegionsByDestRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源站区域：接口DescribeDestRegions返回DestRegionSet中的RegionId字段值
                     * @return DestRegion 源站区域：接口DescribeDestRegions返回DestRegionSet中的RegionId字段值
                     */
                    std::string GetDestRegion() const;

                    /**
                     * 设置源站区域：接口DescribeDestRegions返回DestRegionSet中的RegionId字段值
                     * @param DestRegion 源站区域：接口DescribeDestRegions返回DestRegionSet中的RegionId字段值
                     */
                    void SetDestRegion(const std::string& _destRegion);

                    /**
                     * 判断参数 DestRegion 是否已赋值
                     * @return DestRegion 是否已赋值
                     */
                    bool DestRegionHasBeenSet() const;

                private:

                    /**
                     * 源站区域：接口DescribeDestRegions返回DestRegionSet中的RegionId字段值
                     */
                    std::string m_destRegion;
                    bool m_destRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEACCESSREGIONSBYDESTREGIONREQUEST_H_
