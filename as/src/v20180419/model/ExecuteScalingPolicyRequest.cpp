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

#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

ExecuteScalingPolicyRequest::ExecuteScalingPolicyRequest() :
    m_autoScalingPolicyIdHasBeenSet(false),
    m_honorCooldownHasBeenSet(false)
{
}

string ExecuteScalingPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingPolicyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_autoScalingPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_honorCooldownHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HonorCooldown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_honorCooldown, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExecuteScalingPolicyRequest::GetAutoScalingPolicyId() const
{
    return m_autoScalingPolicyId;
}

void ExecuteScalingPolicyRequest::SetAutoScalingPolicyId(const string& _autoScalingPolicyId)
{
    m_autoScalingPolicyId = _autoScalingPolicyId;
    m_autoScalingPolicyIdHasBeenSet = true;
}

bool ExecuteScalingPolicyRequest::AutoScalingPolicyIdHasBeenSet() const
{
    return m_autoScalingPolicyIdHasBeenSet;
}

bool ExecuteScalingPolicyRequest::GetHonorCooldown() const
{
    return m_honorCooldown;
}

void ExecuteScalingPolicyRequest::SetHonorCooldown(const bool& _honorCooldown)
{
    m_honorCooldown = _honorCooldown;
    m_honorCooldownHasBeenSet = true;
}

bool ExecuteScalingPolicyRequest::HonorCooldownHasBeenSet() const
{
    return m_honorCooldownHasBeenSet;
}


