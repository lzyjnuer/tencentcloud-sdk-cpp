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

#include <tencentcloud/tke/v20180525/model/ClusterCIDRSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

ClusterCIDRSettings::ClusterCIDRSettings() :
    m_clusterCIDRHasBeenSet(false),
    m_ignoreClusterCIDRConflictHasBeenSet(false),
    m_maxNodePodNumHasBeenSet(false),
    m_maxClusterServiceNumHasBeenSet(false)
{
}

CoreInternalOutcome ClusterCIDRSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterCIDR") && !value["ClusterCIDR"].IsNull())
    {
        if (!value["ClusterCIDR"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterCIDRSettings.ClusterCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCIDR = string(value["ClusterCIDR"].GetString());
        m_clusterCIDRHasBeenSet = true;
    }

    if (value.HasMember("IgnoreClusterCIDRConflict") && !value["IgnoreClusterCIDRConflict"].IsNull())
    {
        if (!value["IgnoreClusterCIDRConflict"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterCIDRSettings.IgnoreClusterCIDRConflict` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreClusterCIDRConflict = value["IgnoreClusterCIDRConflict"].GetBool();
        m_ignoreClusterCIDRConflictHasBeenSet = true;
    }

    if (value.HasMember("MaxNodePodNum") && !value["MaxNodePodNum"].IsNull())
    {
        if (!value["MaxNodePodNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClusterCIDRSettings.MaxNodePodNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodePodNum = value["MaxNodePodNum"].GetUint64();
        m_maxNodePodNumHasBeenSet = true;
    }

    if (value.HasMember("MaxClusterServiceNum") && !value["MaxClusterServiceNum"].IsNull())
    {
        if (!value["MaxClusterServiceNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClusterCIDRSettings.MaxClusterServiceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxClusterServiceNum = value["MaxClusterServiceNum"].GetUint64();
        m_maxClusterServiceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterCIDRSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clusterCIDRHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreClusterCIDRConflictHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IgnoreClusterCIDRConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreClusterCIDRConflict, allocator);
    }

    if (m_maxNodePodNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxNodePodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodePodNum, allocator);
    }

    if (m_maxClusterServiceNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxClusterServiceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxClusterServiceNum, allocator);
    }

}


string ClusterCIDRSettings::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void ClusterCIDRSettings::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool ClusterCIDRSettings::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

bool ClusterCIDRSettings::GetIgnoreClusterCIDRConflict() const
{
    return m_ignoreClusterCIDRConflict;
}

void ClusterCIDRSettings::SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict)
{
    m_ignoreClusterCIDRConflict = _ignoreClusterCIDRConflict;
    m_ignoreClusterCIDRConflictHasBeenSet = true;
}

bool ClusterCIDRSettings::IgnoreClusterCIDRConflictHasBeenSet() const
{
    return m_ignoreClusterCIDRConflictHasBeenSet;
}

uint64_t ClusterCIDRSettings::GetMaxNodePodNum() const
{
    return m_maxNodePodNum;
}

void ClusterCIDRSettings::SetMaxNodePodNum(const uint64_t& _maxNodePodNum)
{
    m_maxNodePodNum = _maxNodePodNum;
    m_maxNodePodNumHasBeenSet = true;
}

bool ClusterCIDRSettings::MaxNodePodNumHasBeenSet() const
{
    return m_maxNodePodNumHasBeenSet;
}

uint64_t ClusterCIDRSettings::GetMaxClusterServiceNum() const
{
    return m_maxClusterServiceNum;
}

void ClusterCIDRSettings::SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum)
{
    m_maxClusterServiceNum = _maxClusterServiceNum;
    m_maxClusterServiceNumHasBeenSet = true;
}

bool ClusterCIDRSettings::MaxClusterServiceNumHasBeenSet() const
{
    return m_maxClusterServiceNumHasBeenSet;
}

